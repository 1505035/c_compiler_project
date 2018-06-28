#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class SymbolInfo
{
    string name;
    string type;

public:

    SymbolInfo *next;
    SymbolInfo *prev;

    SymbolInfo(string name = "", string type = "")
    {
        this->name = name;
        this->type = type;
        next = 0;
        prev = 0;
    }
    void SetName(string str)
    {
        this->name = str;
    }
    string GetName()
    {
        return this->name;
    }

    void SetType(string type)
    {
        this->type = type;
    }

    string GetType()
    {
        return this->type;
    }

};

class ScopeTable
{
    int id,pos,hashVal;
    SymbolInfo **table;
    int tableSize;

public:

    ScopeTable *parentScope;
    ScopeTable(int id = 0)
    {
        this->id = id;
        table = 0;
        tableSize = 0;
        parentScope = 0;
    }
    ~ScopeTable()
    {
        for(int i =0; i< tableSize ; i++)
        {
            SymbolInfo *temp=table[i]->next;
            while(table[i] !=0)
            {
                delete table[i];
                table[i]=temp;
                if(temp !=0 )
                    temp = temp->next;
            }
        }
        if(table) delete []table;
    }
    int initialize(int Size)
    {
        tableSize = Size;
        table = new SymbolInfo*[tableSize];
        for(int i =0; i< Size ; i++)
        {
            table[i] = new SymbolInfo();
        }
        return tableSize;
    }
    unsigned int APHash(const std::string& str)
    {
        unsigned int hash = 0xAAAAAAAA;

        for(std::size_t i = 0; i < str.length(); i++)
        {
          hash ^= ((i & 1) == 0) ? (  (hash <<  7) ^ str[i] * (hash >> 3)) :
                                   (~((hash << 11) + (str[i] ^ (hash >> 5))));
        }

        return hash;
    }

    bool Insert(string name, string type)
    {
        if(Search(name) != 0) return false;
        //int hashVal;
        pos = 0;
        hashVal=APHash(name)%tableSize;

        SymbolInfo * item = new SymbolInfo(name, type);
        SymbolInfo * head = table[hashVal];
        item->next = 0;
        while(head->next != 0)
        {
             head = head->next;
             pos++;
        }
        head->next = item;
        item->prev = head;

        return true;
    }

    SymbolInfo * Search(string name)
    {
        pos = 0;
        hashVal = APHash(name)%tableSize;
        SymbolInfo* head = table[hashVal]->next;
        while(head != 0 && head->GetName() != name)
        {
            head = head->next;
            pos++;
        }
        return head;
    }

    bool Delete(string name)
    {
        SymbolInfo* head = Search(name);
        //cout <<"here"<<endl;
        if(head == 0) return false;
        SymbolInfo* temp;
        temp = head->prev;
        temp->next = head->next;
        if(head->next != 0) head->next->prev = temp;

        delete head;
        return true;
    }
    int getPos()
    {
        return pos;
    }
    int getHash()
    {
        return hashVal;
    }
    int getID()
    {
        return id;
    }
    void printTable(ofstream &fout)
    {
        SymbolInfo * head;
        for(int i=0; i<tableSize; i++)
        {
            head = table[i]->next;
	    if(head != 0 ){
		    fout <<" "<< i<<" -->  ";
                    cout <<" "<< i<<" -->  ";
	    	
		    while(head != 0)
		    {
		        fout << "<"<<head->GetName() <<":"<<head->GetType()<< ">    ";
		        cout << "<"<<head->GetName() <<":"<<head->GetType()<< ">    ";
		        head = head->next;
		    }
		    fout << endl;
		    cout << endl;
           }		
        }
    }
};

class SymbolTable
{
    int id;
    int tableSize;
    ScopeTable* currentScope;
public:
    SymbolTable(int Size)
    {
        id = 1;
        tableSize = Size;
        currentScope = new ScopeTable(id);
        currentScope->initialize(Size);
    }

    void EnterScope(ofstream &fout)
    {
        id++;
        ScopeTable *temp = new ScopeTable(id);
        temp->initialize(tableSize);
        temp->parentScope = currentScope;
        currentScope = temp;
        fout <<" New ScopeTable with id "<<id<<" created"<<endl<<endl;
        cout <<" New ScopeTable with id "<<id<<" created"<<endl<<endl;
    }

    void ExitScope(ofstream &fout)
    {
        if(id == 0) {
            fout<<"No scopetable found!"<<endl<<endl;
            cout <<"No scopetable found!"<<endl<<endl;
            return;
        }
        ScopeTable *temp = currentScope;
        if(currentScope->parentScope != 0) currentScope = currentScope->parentScope;
        delete temp;
        fout<<" ScopeTable with id "<<id <<" removed"<<endl<<endl;
        cout<<" ScopeTable with id "<<id <<" removed"<<endl<<endl;
        id--;
        if(id==0) currentScope = 0;
        return;
    }

    bool Insert(string name, string type, ofstream &fout)
    {
        if(id == 0) {
            fout<<"No scopetable found!"<<endl<<endl;
            cout <<"No scopetable found!"<<endl<<endl;
            return false;
        }
        if(currentScope->Insert(name, type) == true)
        {
            //fout <<" Inserted in ScopeTable# "<< currentScope->getID() << " at position "<<currentScope->getHash()<<", " <<currentScope->getPos()<<endl<<endl;
            cout <<" Inserted in ScopeTable# "<< currentScope->getID() << " at position "<<currentScope->getHash()<<", " <<currentScope->getPos()<<endl<<endl;
            return true;
        }
        else
        {
            //fout <<" <"<<name<<","<<type<<"> already exists in current ScopeTable"<<endl<<endl;
            cout <<" <"<<name<<","<<type<<"> already exists in current ScopeTable"<<endl<<endl;
            return false;
        }
    }

    bool Remove(string name,ofstream &fout)
    {
        if(id == 0) {
            fout<<"No scopetable found!"<<endl<<endl;
            cout <<"No scopetable found!"<<endl<<endl;
            return false;
        }
        if(currentScope->Delete(name) == true)
        {
            fout <<" Found in ScopeTable# "<< currentScope->getID() << " at position "<<currentScope->getHash()<<", " <<currentScope->getPos()<<endl<<endl;
            cout <<" Found in ScopeTable# "<< currentScope->getID() << " at position "<<currentScope->getHash()<<", " <<currentScope->getPos()<<endl<<endl;
            fout <<" Deleted entry at "<<currentScope->getHash()<<", "<<currentScope->getPos() <<"from current ScopeTable"<<endl<<endl;
            cout <<" Deleted entry at "<<currentScope->getHash()<<", "<<currentScope->getPos() <<"from current ScopeTable"<<endl<<endl;
            return true;
        }
        else
        {
            fout <<" Not Found"<<endl<<endl;
            cout <<" Not Found"<<endl<<endl;
            fout <<" "<<name<<" not found"<<endl<<endl;
            cout <<" "<<name<<" not found"<<endl<<endl;
            return false;
        }
    }

    SymbolInfo* LookUp(string name,ofstream &fout)
    {
        if(id == 0) {
            fout<<"No scopetable found!"<<endl<<endl;
            cout <<"No scopetable found!"<<endl<<endl;
            return 0;
        }
        SymbolInfo* temp ;
        ScopeTable* scope = currentScope;

        while(scope != 0)
        {
            temp = scope->Search(name);
            if(temp != 0)
            {
                fout <<" Found in ScopeTable# "<< scope->getID() << " at position "<<scope->getHash()<<", " <<scope->getPos()<<endl<<endl;
                cout <<" Found in ScopeTable# "<< scope->getID() << " at position "<<scope->getHash()<<", " <<scope->getPos()<<endl<<endl;
                return temp;
            }
            scope = scope->parentScope;
        }

        fout <<" Not Found "<<endl<<endl;
        cout <<" Not Found "<<endl<<endl;
        return 0;
    }

    void PrintCurrentScope(ofstream &fout)
    {
        currentScope->printTable(fout);
    }

    void PrintAllScope(ofstream &fout)
    {
        if(id == 0) {
            fout<<"No scopetable found!"<<endl<<endl;
            cout <<"No scopetable found!"<<endl<<endl;
            return;
        }
        int i =id;
        ScopeTable * temp = currentScope;
        while(temp != 0)
        {
            fout <<" ScopeTable # "<<i<<endl;
            cout <<" ScopeTable # "<<i<<endl;
            temp->printTable(fout);
            temp = temp->parentScope;
            i--;
            fout <<endl;
            cout <<endl;
        }
    }
};


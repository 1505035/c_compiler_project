%option noyywrap

%x MYSTATE

%{
#include<stdio.h>
#include<stdlib.h>

%}

AlphaNumeric [a-zA-Z0-9]

%%

[ \t\n]+ {}
<MYSTATE>[ \t\n]+ {}

abc {
		BEGIN MYSTATE; 
		printf("MYSTATE started at %s\n",yytext);
	}

<MYSTATE>def 	{
					printf("ending mystate at %s\n",yytext); 
					BEGIN INITIAL;
				}

<MYSTATE>.  {}

[a-z]+ 	{
			printf("In initial State %s found\n",yytext);
		}

%%
int main(){
	
	
	yylex();
	return 0;
}

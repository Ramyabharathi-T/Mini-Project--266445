#include "prototype.h"


void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	//getch();
     	char q;
	scanf("%c",&q);
	printf("\n\n\n\nPress any key to continue");
    	char t;
    	scanf("%c",&t);
    }

#include<stdio.h>
 char a[9]={'1','2','3','4','5','6','7','8','9'};
 int b=0,d=0;
void show (void);
void start(void);
void show()
{ system("cls");
 if(b<9)
    start();
    printf("\n\t\t    |    |      ");
	printf("\n\t\t  %c |  %c |  %c  ",a[0],a[1],a[2]);
	printf("\n\t\t =============");
    printf("\n\t\t    |    |      ");
	printf("\n\t\t  %c |  %c |  %c  ",a[3],a[4],a[5]);
	printf("\n\t\t =============");
    printf("\n\t\t    |    |      ");
	printf("\n\t\t  %c |  %c |  %c  ",a[6],a[7],a[8]);
		if(d==0)
		printf("\n\n\nFIRST(X) PLAYER TURN==> ");
		else 
		printf("\n\n\nSECOND(O) PLAYER TURN==>");
   
}
void start()
{
	printf("\n\t\t WELCOME TO TIC TAK GAME");
		printf("\n\n\t\t FIRST PLAYER ==: X");
		printf("\n\t\t SECOND PLAYER==: O");
		printf("\n\t\t PRESS R FOR RESTART \n");
			printf("\t\t PRESS E FOR EXIT \n\n\n");
	
		}
	/*void get()
	{ int c;
	scanf("%d",&c);
	if(c==101||c==69)
	goto ex;
	show();
	if(a[c-1]==48+c)
	{if(d==0)
	{a[c-1]='X';d=1;
	}else
	{a[c-1]='O';d=0;
		
	}
		b++;
	}}*/
	int check(char q)
	{
		if(a[0]==q&&a[1]==q&&a[2]==q)
		return 1;
		if(a[0]==q&&a[3]==q&&a[6]==q)
		return 1;if(a[1]==q&&a[4]==q&&a[7]==q)
		return 1;if(a[2]==q&&a[5]==q&&a[8]==q)
		return 1;if(a[3]==q&&a[4]==q&&a[5]==q)
		return 1;if(a[6]==q&&a[7]==q&&a[8]==q)
		return 1;if(a[0]==q&&a[4]==q&&a[8]==q)
		return 1;
		if(a[2]==q&&a[4]==q&&a[6]==q)
		return 1;
	}
main()
{ 
 int i;
 ex:   a[0]='1';
  a[1]='2'; a[2]='3'; a[3]='4'; a[4]='5'; a[5]='6'; a[6]='7'; a[7]='8';
   a[8]='9';
 
while(b<9){
	show();
	int c;
	scanf("%c",&c);
	fflush(stdin);
	
	if(c==101||c==69)
	exit(0);
if(c==114||c==82)
goto ex;
  
	show();
	if(a[c-1-48]==c)
	{if(d==0)
	{a[c-1-48]='X';d=1;
	}else
	{a[c-1-48]='O';d=0;
		
	}
		b++;
	}
	
	
	
	
	
	
	
	
	
	
	if(check('X')==1){	system("cls");
	printf("\n\n\n\t\tplayer 1 won\n\n\n");
	b=50; break;}
	
	if(check('O')==1){	b=50;system("cls");
	printf("\n\n\n\t\tplayer 2 won\n\n\n"); break;}
	}
	if(b!=50){system("cls");
	printf("\n\n\t\t GAME DRAW");}
char ab;
 getch();
}
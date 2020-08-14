#include<stdio.h>
void show(void);
void slow(void);
int x,y,frx,fry,score,l=20,b=40,gameover,flag,tailx[100],taily[100],counttail=0;

void setup()
{gameover=0;
	x=l/2;
	y=b/2;
label1:	frx=rand()%l;
	if(frx==0)
	goto label1;
	label2:	fry=rand()%b;
	if(fry==0)
	goto label2;
	score=0;
}
void show()
{   
   system("cls");
     printf("\nscore==%d\n",score);
	int i,j,k;


	for(i=0;i<=l;i++)
	{
		for(j=0;j<=b;j++)
		{
		if(i==0||i==l||j==0||j==b)
			printf("*");
			else
			 {
			if(i==x&&j==y)
			
				printf("O");
			
			    else if(i==frx&&j==fry)
			    printf("A");
			    else
			    {int ch=0;
			    	for(k=0;k<counttail;k++)
			    	{
			    		if(i==tailx[k]&&j==taily[k])
			    		{
			    			printf("o");
			    			ch=1;
						}
					}
			    	if(ch==0)	printf(" ");
				}
				
			     }
		
		}printf("\n");
	}slow();
	
}
void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'a': flag=1; break;
			case 'd': flag=2; break;
			case 'w': flag=3; break;
			case 's': flag=4; break;
			case 'x': gameover=1;break;
		}
	}
}
void makelogic()
{int i;
	int prevx=tailx[0];
	int prevy=taily[0];
	int prev2x,prev2y;
	tailx[0]=x;
	taily[0]=y;
	for(i=1;i<counttail;i++)
	{
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevx;
		taily[i]=prevy;
		prevx=prev2x;
		prevy=prev2y;
	}
	
	switch(flag)
	{
		case 1:y--; break;
		case 2:y++; break;
		case 3:x--; break;
		case 4:x++; break;
		
	}
	if(x<=0||x>=l||y<=0||y>=b)
	{
		gameover=1;
		return ;
	}
	
	for(i=1;i<counttail;i++)
	{
		if(x==tailx[i]&&y==taily[i])
		gameover=1;
	
	}
	
	if(x==frx&&y==fry)
	{
		label1:	frx=rand()%l;
	if(frx==0)
	goto label1;
	label2:	fry=rand()%b;
	if(fry==0)
	goto label2;
	score+=10;
	counttail++;
	}
}
 void main()
{
    
re: setup();
counttail=0;
	while(!gameover)
	{
		show();
	input();
	makelogic();
	}
//	system("cls");
	printf("\tgame over\nYOUR HIGH SCORE IS==%d\n",score);
	char c;
printf("REASTART PRESS R");
	fflush(stdin);
	c=getch();
	//scanf("%c",&c);
	if(c=='r'||c=='R')
	goto re;
}
	
void slow()
{
int j,k;
	
		for(k=0;k<=5000;k++)
		for(j=0;j<=5000;j++);
}
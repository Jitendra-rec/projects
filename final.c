#include<stdio.h>
#include<conio.h>
#include<windows.h>
char homepage(void);
void gotoxy(short x, short y); 
int CreateMarksheet(void);
int main ()
{
	char a;
	int i=0;
	while(1)
	{system("CLS");
		a=homepage ();
	system("CLS");
	if(a=='1')
	  i=CreateMarksheet ();
	else if(a=='2')
	    i=search();
	    if(i==51)
	    exit(0);
	}
	
		
	
}

 int search()
{  
 FILE *fp;
  fp=fopen("markssheet.txt","r");
    char nam[20],dob[10],ch,e;
     int i=0,c=0,m=0,find;
	 printf("Enter roll number see marksheet");
	scanf("%d",&find);
	fflush(stdin);
	if(fp==NULL)
	printf("file is not opened\n");
	ch=fgetc(fp);
	while(!feof(fp))
	{
	if(ch==10)
     {
	 	i=0;
	 	if(c==find)
	 	m=1;
	 	else m=0;
	 	c=0;
	 }
     if(ch=='{')
     {
     	i=1;
	 } 
     
	  if(i==0){	
		if(ch<=57&&ch>=48)
	     c=c*10+(ch-48);
	
	  }
	  if(m==1){
	  	if(ch!=',')
	  	 printf("%c",ch);
	  	 else
	  	 printf("\n");
	  	
	  }
	 
	  
		ch=fgetc(fp);
	}

	fclose(fp);
	printf("\n\nENTER # FOR EXIT\nENTER @ to homepage");
	e=getch();
	if(e=='#')
	return(1);
	if(e=='@')
	return (0);
	
	
	
	
	
	
}
char homepage()
{
	int n;
	printf("Rajkiya Engineering Collage\n\nAmbedkar Nagar\n");
	printf("\n");
	printf("Welcome to Home Page \n");
	printf("\n");
	printf("1. Create Marksheet \n");
	printf("\n");
	printf("2. View Marksheet \n");
	printf("\n");
	printf("Go");
	fflush(stdin);
	n=getch();
	
	return n;
	}
	
	
int CreateMarksheet()
{     FILE *fp ;
fp=fopen("markssheet.txt","a+");
    char nam[20],dob[10],e;
    int c,r,s1,s2,s3,s4,s5,total;
    printf("Please enter the following data in respected order :=> \n");
    printf("\n");
    printf("\n 1. NAME    ==> \n 2. CLASS   ==> \n 3. ROLL NO.==> \n 4. DOB     ==> \n");
    printf("\n");
    printf("Marks obtain (Out of 100) \n");
    printf("\n MATHS    ==> \n PHYSICS  ==> \n CHEMISTRY==> \n ENGLISH  ==> \n COMPUTER ==> \n");
    printf("\n");
    
    gotoxy(16,3);
    gets(nam);        //name input
    
    gotoxy(16,4);
    fflush(stdin);        // class input
    scanf("%d",&c);
    
    gotoxy(16,5);
    fflush(stdin);                //roll number
	scanf("%d",&r);          
    
    
     gotoxy(16,6);
      fflush(stdin);       //date of birth in string foormat
      gets(dob);
      
     gotoxy(16,10);
     fflush(stdin);       // maths marks 
     scanf("%d",&s1);
     
    gotoxy(16,11);
    fflush(stdin);       // physic marks 
     scanf("%d",&s2);
     
    gotoxy(16,12);
    fflush(stdin);       // chemistry marks 
     scanf("%d",&s3);
     

    gotoxy(16,13);
    fflush(stdin);       // english marks 
     scanf("%d",&s4);
     
    gotoxy(16,14);
    fflush(stdin);       //computer marks 
     scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    printf("Total marks obtains= %d\n",total);
    printf("Persent obtains by %s is %d%%",nam,total/5);
    fprintf(fp,"\n%d{\nNAME=%s,CLASS=%d,DOB=%s,ROLL no.=%d,MATHS=%d,PHYSIC=%d,CHEMISTRY%d,ENGLISH=%d,COMPUTER=%d",r,nam,c,dob,r,s1,s2,s3,s4,s5);
    fclose(fp);
    printf("\n\nENTER # FOR EXIT\nENTER @ to homepage");
	e=getch();
	if(e=='#')
	return(1);
	if(e=='@')
	return (0);
    
   
}    


void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}





// Compiler: Turbo C++







 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>
 void main()
 {
 clrscr();
 int n;

 cout<<"\n         Menu ";
 cout<<"\n----------------------------";
 cout<<"\n 1) Tic-Tac-Toe";
 cout<<"\n 2) Bollywood game";
 cout<<"\n----------------------------";

 cout<<"\n Enter choice:- ";cin>>n;

 switch(n)
 {
 case 1:
{   clrscr();
    int a[3][3],i,j,b=1,k;
    char n,s='v';


    for (i=0; i<3; i++)
     {
      for (j=0; j<3; j++)
       { a[i][j]=b;b++; }
    }


    for (i=0; i<3; i++)
     {
      for (j=0; j<3; j++)
       { cout<<a[i][j]<<"    "; }
       cout<<endl<<endl;
     }


   for (k=0; k<9; k++)
    {
      if (k%2==0)
       cout<<"\n Player X turn";
      else
       cout<<"\n Player O turn";

    cout<<"\n Enter position you want to enter: " ;cin>>b;

    if (k%2==0)
    n='X';

    else
    n='O';

   if (b==1)
    a[0][0]=n;

   else if (b==2)
    a[0][1]=n;

   else if (b==3)
    a[0][2]=n;

   else if (b==4)
    a[1][0]=n;

   else if (b==5)
    a[1][1]=n;

   else if (b==6)
    a[1][2]=n;

   else if (b==7)
    a[2][0]=n;

   else if (b==8)
    a[2][1]=n;

   else if (b==9)
   a[2][2]=n;

     clrscr();

   cout<<endl;
    for (i=0; i<3; i++)
     {
       for (j=0; j<3; j++)
	{
	 if (a[i][j]<50)
	 a[i][j]='_';
	 cout<<(char)a[i][j]<<"    ";
	}
	 cout<<endl<<endl;
       }


   if (a[0][0]==a[1][0] && a[0][0]==a[2][0] && a[0][0]!='_' )
   { cout<<" Game over";s=a[0][0];break; }

   else if (a[0][0]==a[0][1] && a[0][0]==a[0][2] && a[0][0]!='_')
   { cout<<" Game over";s=a[0][0];break; }

   else if (a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[0][0]!='_')
   { cout<<" Game over";s=a[0][0];break; }

   else if (a[0][1]==a[1][1] && a[0][1]==a[2][1] && a[0][1]!='_')
   { cout<<" Game over";s=a[0][1];break; }

   else if (a[0][2]==a[1][2] && a[0][2]==a[2][2] && a[0][2]!='_')
   { cout<<" Game over";s=a[0][2];break; }

   else if (a[1][0]==a[1][1] && a[1][0]==a[1][2] && a[1][0]!='_')
   { cout<<" Game over";s=a[1][0];break; }

   else if (a[2][0]==a[2][1] && a[2][0]==a[2][2] && a[2][0]!='_')
   { cout<<" Game over";s=a[2][0];break; }

   else if (a[2][0]==a[1][1] && a[2][0]==a[0][2] && a[2][0]!='_')
   { cout<<" Game over";s=a[2][0];break; }

   else
   continue;
   }
    if (s=='v')
     cout<<"\n\n Game draw";
    else
     cout<<"\n\n Player "<<s<<" Wins";


}break;



 case 2:
{ clrscr();
 char ch[40],n,str[40],in[40]={'\0'};
 int a=-1,m=0,q=0,l=0,c=-1,d=-1,e=-1;

 cout<<"\n Enter Movie name: ";gets(ch);
 clrscr();


 for (int i=0; ch[i]!='\0'; i++)
 {
 if (ch[i]==' ')
 str[i]=' ';
 else
 str[i]='_';
 }
 cout<<endl;


 do
 {
   clrscr();
   q=0;
   cout<<"\n\n";
   char b[10]={'B','O','L','L','Y','W','O','O','D'};

   for (int v=0+m; v<10; v++)
    {
     cout<<b[v]<<" ";
    }

   cout<<endl<<endl;


   for (int k=0; k<i; k++)
    {
	if (str[k]>=96)
	cout<<str[k];

	else
	{     if (a>=0 && a==k)
	  {	str[k]=n;
		cout<<str[k];         }

	      else if (c>=0 && c==k)
	  {
	       str[k]=n;
	       cout<<str[k];
				      }
	      else if (d>=0 && d==k)
	  {
	       str[k]=n;
	       cout<<str[k];
				      }
	      else if (e>=0 && e==k)
	  {
	       str[k]=n;
	       cout<<str[k];
				      }
	      else
		cout<<str[k];
       }
       cout<<" ";
    }

    cout<<"\n\n Incorrect words are: ";

  for (int g=0; g<=i; g++)
    cout<<in[g]<<" ";

  cout<<"\n\n Enter letter: ";cin>>n;

  a=-1;
  c=-1;
  d=-1;
  e=-1;
   for ( i=0; ch[i]!='\0'; i++)
    {

     if (ch[i]==n && a== -1)
     a=i;

     if (a>-1 && ch[i]==n && c==-1)
     {
	if (i>a)
	c=i;
     }
     if (c>-1 && ch[i]==n && d==-1)
     {
       if (i>c)
       d=i;
     }
     if (d>-1 && ch[i]==n)
     e=i;
    }
  if (a==-1)
  { m++;
    in[l++]=n;
  }


 for ( k=0; k<=i; k++)
 {
   if (str[k]=='_')
   q++;
 }

}
 while (q!=0 && m<10);

 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t          GAME OVER";

 }break;

 }

  getch();
 }
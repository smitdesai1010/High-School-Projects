





// Compiler: Turbo C++












 #include<iostream.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<stdio.h>
 void main()
 {
 clrscr();
 randomize();
 int n,c,pt=3;
 const int b=1;
 char ch,str;

 cout<<"\n 1=Stone    2=Paper    3=Scissor";
 cout<<"\n Enter choice: ";cin>>n;
 c=b+random(pt);




 for (int i=1; i>0; i++)
{
 cout<<"Stone";
 clrscr();

 cout<<"Paper";
 clrscr();

 cout<<"Scissor";
 clrscr();

 if(i==20000)
 break;
}


   if (n==1)
 cout<<"Stone vs ";

 else if (n==2)
 cout<<"Paper vs ";

 else if (n==3)
 cout<<"Scissor vs ";

   if (c==1)
 cout<<"Stone";

 else if (c==2)
 cout<<"Paper";

 else if (c==3)
 cout<<"Scissor";


 if (c==1)
  {
   if (n==1)
   cout<<"\n  Draw";

   else if (n==3)
   cout<<"\n You Win";

   else if (n==2)
   cout<<"\n You Lose" ;
 }

 else if (c==2)
  {
   if (n==2)
   cout<<"\n  Draw";

   else if (n==1)
   cout<<"\n You Win";

   else if (n==3)
   cout<<"\n You Lose" ;
 }

 else if (c==3)
  {
   if (n==3)
   cout<<"\n  Draw";

   else if (n==2)
   cout<<"\n You Win";

   else if (n==1)
   cout<<"\n You Lose" ;
 }

 getch();
 }
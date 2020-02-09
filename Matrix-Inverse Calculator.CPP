





// Compiler: Turbo C++








 #include<iostream.h>
 #include<conio.h>
 #include<process.h>

 void main()
 {
   clrscr();
      int n;

    cout<<"\n-------Inverse-------- ";
    cout<<"\n 1) 2x2 Matrice";
    cout<<"\n 2) 3x3 Matrice";

    cout<<"\n\n Enter choice: ";cin>>n;
 switch (n)
{
   case 1:
   {
      clrscr();

      int a[2][2],b[2][2],i,j,d;

       cout<<"\n Enter Matrice: \n";

       for (i=0; i<2; i++)
       {
	 for (j=0; j<2; j++)
	    cin>>a[i][j];
       }

      d= (a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
      if (d==0)
      {
       cout<<"\n Inverse doesnot Exist....";
       getch();
       exit(0);
      }
	b[0][0]=a[1][1];
	b[1][1]=a[0][0];
	b[1][0]=-a[1][0];
	b[0][1]=-a[0][1];

     cout<<"\n Inverse is: \n";


    for (i=0; i<2; i++)
     {
      for (j=0; j<2; j++)
       {
	cout<<b[i][j]<<"/"<<d<<"   ";
       }
       cout<<endl<<endl;
     }

   }break;


   case 2:
  {
   clrscr();

   int a[3][3],b[3][3],c[3][3],d,i,j,x,y,z;

   cout<<"\n Enter matrice:\n ";

    for (i=0; i<3; i++)
     {
       for (j=0; j<3; j++)
	 cin>>a[i][j];
     }

     x=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]));
     y=a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));
     z=a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));

     d=x-y+z;

       if (d==0)
      {
       cout<<"\n Inverse doesnot Exist....";
       getch();
       exit(0);
      }


     b[0][0]=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
     b[0][1]=( (a[1][0]*a[2][2])-(a[1][2]*a[2][0]) )* -1;
     b[0][2]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
     b[1][0]=( (a[0][1]*a[2][2])-(a[2][1]*a[0][2]) )* -1;
     b[1][1]=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);
     b[1][2]=( (a[0][0]*a[2][1])-(a[2][0]*a[0][1]) )* -1;
     b[2][0]=(a[0][1]*a[1][2])-(a[1][1]*a[0][2]);
     b[2][1]=( (a[0][0]*a[1][2])-(a[1][0]*a[0][2]) )* -1;
     b[2][2]=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);



       for (i=0; i<3; i++)
	{
	 for (j=0; j<3; j++)
	   {
	     c[i][j]=b[j][i];
	   }
	 }


      cout<<"\n\n\n Inverse is: \n";


      for (i=0; i<3; i++)
     {
      for (j=0; j<3; j++)
       {
	cout<<c[i][j]<<"/"<<d<<"   ";
       }
       cout<<endl<<endl;
     }
   }
}
  getch();
 }
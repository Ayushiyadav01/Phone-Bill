#include<iostream.h>
#include<conio.h>

 class bill
  {
   long bill_no;
   int bill_period;
   int no_of_calls;
   float amount;

   public:

   bill(long a,int b,int c)
   {
   bill_no=a;
   bill_period=b;
   no_of_calls=c;
   }

   void billing()
   {
   long amount;
   cout<<"\n\n************************* BILL **************************";
   cout<<"\n -> bill no : "<<bill_no;
   cout<<"\n -> bill_period : "<<bill_period;
   cout<<"\n -> no. of calls : "<<no_of_calls;
   cout<<"\n\n -> amount to pay : ";
   if(no_of_calls<=500)
    {
     amount=no_of_calls*1;
    }
   else if(no_of_calls>501 && no_of_calls<2000)
    {
     amount=no_of_calls*2;
    }
   else
    {
     amount=no_of_calls*4;
    }
   cout<<amount;
   }
  };

   void main()
    {
     clrscr();
     long b_no;
     int b_period,call;
     cout<<"***************  WELLCOME  ****************\n";
     cout<<"\n\n =>Enter bill no. : ";
     cin>>b_no;
     cout<<" =>Enter period of billing : ";
     cin>>b_period;
     cout<<" =>Enter no. of calls : ";
     cin>>call;

     bill b1(b_no,b_period,call);
     b1.billing();
     getch();
    }
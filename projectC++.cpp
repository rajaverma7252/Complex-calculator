#include<iostream>
using namespace std;
#include<stdlib.h>
template<class T>                                   //template function for generic programming
void sic(T a,T b)
{  T result;
int choice;

cout<<"\t Real numbers \n1.Addition \n2.subtraction \n3.multiplication \n4.division"<<endl;
cin>>choice;
 switch(choice)
{case 1:  cout<<"The addition of 2 real numbers is ="<<a+b<<endl;
         break;
case 2:cout<<"The subtraction of 2 real numbers is ="<<a-b<<endl;
         break;
case 3: cout<<"The multiplication of 2 real numbers is="<<a*b<<endl;
         break;
case 4: cout<<"The division of 2 real numbers is="<<a/b<<endl;
          break;

default : cout<<"Bad input"<<endl;} 
}



class complex
{int a,b;
public:
void read()
{
cout<<"\n Enter the real part :"<<endl;
cin>>a;
cout<<"\n Enter the imaginary part :"<<endl;
cin>>b;
}
complex operator +(complex c2)                            //'+'operator overloading
{complex c3;
c3.a=a+c2.a;
c3.b=b+c2.b;
return c3;
}

complex operator -(complex c2)                            //'-' operator overloading
{
complex c3;
c3.a=a-c2.a;
c3.b=b-c2.b;
return c3;
}

complex operator *(complex c2)                            //'*' operator overloading
{complex c3;
c3.a=(a*c2.a)-(b*c2.b);
c3.b=(b*c2.a)+(a*c2.b);
return c3;
}

complex operator /(complex c2)                            //'/' operator overloading
{
complex c3;

c3.a=((a*c2.a)+(b*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
c3.b=((b*c2.a)-(a*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));

return c3;
}

void display()                                             // to display the complex complex number
{
cout<<a<<"+"<<b<<"i";
}
};

int main()
{float aa,bb;
 int a,b,f;
complex c1,c2,c3;
int mainchoice,choice,ct,sc;
do{
cout<<" \tComplex calculator"<<endl;
cout<<"Press 1 to perform operation on real numbers"<<endl;
cout<<"Press 2 to perform operations on complex numbers"<<endl;
cin>>mainchoice;

if(mainchoice==1)
{
system("clear");

cout<<"press 1 for whole number values and 2 for floating point values"<<endl;
cin>>f;
if(f==1)
{cout<<"Enter the 1 real no"<<endl;
cin>>a;
cout<<"\nenter the 2nd real no"<<endl;
cin>>b;
sic(a,b);}                                                //template function to enter whole no values
else
{cout<<"Enter the 1st float no"<<endl;
cin>>aa;
cout<<"enter the 2nd float no"<<endl;
cin>>bb;
sic(aa,bb);}}                                            //template function to enter floating values
else if(mainchoice==2)
{
do
{cout<<"\tComplex numbers\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
cout<<"\n Enter your choice:";
cin>>choice;                        
system("clear");                                          //to clear the console
if(choice==1||choice==2||choice==3||choice==4)
{cout<<"\nEnter the 1st complex number";
c1.read();                                                 //to take the values of real and imaginary part from user
cout<<"\nEnter the second complex number";
c2.read();                                                
}

switch(choice)
{ 
case 1: c3=c1+c2;
        cout<<"\n Sum of 2 complex numbers is =";
        c3.display();
         break;

case 2:  c3=c1-c2;
         cout<<"\n Difference of the given complex numbers is =";
          c3.display();
         break;
case 3:  c3=c1*c2;
         cout<<"\n Product of the given complex numbers is =";
         c3.display();
         break;

case 4:  c3=c1/c2;
         cout<<"\n Division of the given complex numbers is =";
         c3.display();
         break;

default :cout<<"\n bad input";
}
cout<<"\n Do you want to continue? 1-yes,0-no \n";
cin>>ct;
system("clear");
}while(ct==1);
}
cout<<"\n DO you want to go to main menu? 1-yes,0-no \n";
cin>>sc;
system("clear");
}while(sc==1);

cout<<"complex calculator made by RAJA"<<endl;



return 0;
}








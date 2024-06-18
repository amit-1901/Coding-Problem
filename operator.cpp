#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int x,y;
cout<<"Enter the first number : ";
cin>>x;
cout<<"Enter the second number : ";
cin>>y; 

/*arithmatic operator
cout<<"Sum of first and second number : "<<x+y<<endl;
cout<<"Sub of first and second number : "<<x-y<<endl;
cout<<"Mul of first and second number : "<<x*y<<endl;
cout<<"Div of first and second number : "<<x/y<<endl;
cout<<"Rem of first and second number : "<<x%y<<endl;
cout<<"Inc of first number: "<<x++<<endl;
cout<<"Dec of second number : "<<y--<<endl;*/

/*assignment operator
cout<<"The value of x=y: "<<(x=y)<<endl;
cout<<"The value of x+=y: "<<(x+=y)<<endl;
cout<<"The value of x-=y: "<<(x-=y)<<endl;
cout<<"The value of x*=y: "<<(x*=y)<<endl;
cout<<"The value of x/=y: "<<(x/=y)<<endl;
cout<<"The value of x%=y: "<<(x%=y)<<endl;
cout<<"The value of x&=y: "<<(x&=y)<<endl;
cout<<"The value of x|=y: "<<(x|=y)<<endl;
cout<<"The value of x^=y: "<<(x^=y)<<endl;
cout<<"The value of x>>=y: "<<(x>>=y)<<endl;
cout<<"The value of x<<=y: "<<(x<<=y)<<endl; */

/*Comparison Operators
cout<<"The value of x==y: "<<(x==y)<<endl;
cout<<"The value of x!=y: "<<(x!=y)<<endl;
cout<<"The value of x>=y: "<<(x>=y)<<endl;
cout<<"The value of x<=y: "<<(x<=y)<<endl;
cout<<"The value of x>y: "<<(x>y)<<endl;
cout<<"The value of x<y: "<<(x<y)<<endl;*/

/*Logical Operators
cout<<"The value of (x==y)&&(x!=y): "<<((x==y)&&(x!=y))<<endl;
cout<<"The value of (x==y)||(x!=y): "<<((x==y)||(x!=y))<<endl;
cout<<"The value of !(x==y): "<<!(x==y)<<endl; */

/* float, double
float a=3.14f;
long double b=3.14l;
cout<<"The size of 3.14 is : "<<sizeof(a)<<endl;
cout<<"The size of 3.14f is : "<<sizeof(3.14f)<<endl;
cout<<"The size of 3.14F is : "<<sizeof(3.14F)<<endl;
cout<<"The size of 3.14 is : "<<sizeof(b)<<endl;
cout<<"The size of 3.14l is : "<<sizeof(3.14l)<<endl;
cout<<"The size of 3.14L is : "<<sizeof(3.14L)<<endl;*/

/*reference variable
int a=4;
int &b=a;
cout<<b; */

/*type casting
int a=4;
float b=3.14;
cout<<float(a)<<(float)a;
cout<<int(b)<<(int)b; 
 int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl; */
    
/* Constanat variable
int a=7;
cin>>a;
cout<<"The value of a is : "<<a;
cin>>a;
cout<<"The value of a is : "<<a;

const float b=3.14;
//cin>>b;
cout<<"The value of b is : "<<b;
//cin>>b;
cout<<"The value of b is : "<<b; */

/*mainipulator
int x=2,y=25,z=258;
cout<<"The value of x without setw : "<<x<<endl;
cout<<"The value of y without setw : "<<y<<endl;
cout<<"The value of z without setw : "<<z<<endl;
//must be added iomanip hadderal file
cout<<"The value of x with setw : "<<setw(3)<<x<<endl;
cout<<"The value of y with setw : "<<setw(3)<<y<<endl;
cout<<"The value of z with setw : "<<setw(1)<<z<<endl; */

return 0;
}

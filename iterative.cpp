#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long sum=0,n;
int i;
for(i=1;i<=10;i++)
{
cout<<“Enter “<<i<<” number : “;
cin>>n;
sum = sum + n;
}
cout<<“Addition of 10 numbers entered by the user is : “<<sum;
getch();
}

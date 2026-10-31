#include<iostream>
using namespace std;

{
int square=arr[i] * arr[i];
cout<<"Square is "<<square;
}
void sum(int arr[], int h )
{
int sum=0;
for(int i=0; i<h; i++)
{
sum+=arr[i];
}
cout<<"Sum of the array element is: "<<sum;
cout<<endl;
}
void average(int a , int b, int c)
{
int average;
average=a+b+c;
average=average/3;
cout<<"Average of your number is: "<<average;
}
int main()
{
int h=3;
int arr[3]={1,2,3};
cout<<"Enter the three numbers: "<<endl;
int a;
cin>>a;
int b;
cin>>b;
int c;
cin>>c;
sum(arr , h);
average(a , b , c);
square(h);

  
}

#include<iostream>
using namespace std;
printMultiplicationTable(int n)
{
for(int i=1; i<=10; i++)
{
cout<<n <<"*" <<i <<"= "<<n*i<<endl;
}
}
int main()
{
cout<<"Enter a number for your desired table: ";
int n;
cin>>n;
printMultiplicationTable(n);
return 0;
}

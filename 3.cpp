#include<iostream>
using namespace std;
printMultiplicationTable(int n)
{
cout<<"Table of "<<n <<" is "<<endl;
for(int i=100; i>=100; i--)
{
cout<<n <<"*" <<i <<"= "<<n*i<<endl;
}
cout<<endl;
}
int main()
{
for(int i=1; i<=10; i++)
{
printMultiplicationTable(i);
}
return 0;
}

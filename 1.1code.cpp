#include<iostream>
using namespace std;
int main()
{
int a=5,b;
int arr[a]={10,20,30,40,50};
cout<<"Enter a value to insert at the first index of the array"<<endl;
cin>>b;
cout<<"Before inserting"<<endl;
for(int i=0; i<a; i++)
{
cout<<arr[i]<<" ";
}
//inserting
for(int i=a-1; i>=0; i--)
{
arr[i+1]=arr[i];
}
arr[0]=b;
//Completed
cout<<"\nAfter inserting"<<endl;
for(int i=0; i<a; i++)
{
cout<<arr[i]<<" ";
}
return 0;
}


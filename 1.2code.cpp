#include<iostream>
using namespace std;
int main()
{
int a=5,b;
int arr[a]={10,20,30,40,50};
cout<<"Before inserting"<<endl;
for(int i=0; i<a; i++)
{
cout<<arr[i]<<" ";
}
cout<<"\nEnter a value to insert at the Last index of the array"<<endl;
cin>>b;
arr[a]=b;
cout<<"After inserting"<<endl;
for(int i=0; i<=a; i++)
{
cout<<arr[i]<<" ";
}
return 0;
}



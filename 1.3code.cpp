#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array"<<endl;
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
cout<<"Enter the element which you want to insert"<<endl;
int ele;
cin>>ele;
cout<<"Enter the position of the element (1 to "<<n+1<<" )"<<endl; 
int pos;
cin>>pos;
if(pos<1 || pos>n+1)
cout<<"Invalid position"<<endl;
for(int i=n; i>=pos; i--)
{
arr[i]=arr[i-1];
}
arr[pos-1]=ele;
cout<<"After inserting"<<endl;
for(int i=0; i<=n; i++)
{
cout<<arr[i]<<" ";
}
return 0;
}

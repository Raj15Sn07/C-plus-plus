#include<iostream>
using namespace std;

int main()
{
	int n,i,j,t;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int num[n];
	cout<<"Enter the elements of the array:\n";
	for(i=0;i<n;i++)
	 cin>>num[i];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	cout<<"Sorted array: ";
	for(i=0;i<n;i++)
	 cout<<num[i]<<" ";
	return 0;
}

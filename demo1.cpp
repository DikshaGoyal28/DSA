#include<iostream>

using namespace std;

int main()
{
	int a[]={6,8,4,2,9};
	
	cout<<a<<"\t" << *a <<"\t"    <<a[0]<<"\t"<<endl;
	cout<<a+1 <<"\t" << *(a+1) <<"\t" <<a[1]<<endl;
	cout<<a+3 << "\t" <<*(a+3) <<"\t" <<a[3]<<endl;
//	cout<<a+1 <<"\t"   << *a+1 <<"\t"  <<a[1] <<"\t"  <<*(a+1);
	
}

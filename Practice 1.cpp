#include<iostream>
using namespace std;
int main()
{
	int h=66;
	int *counter=&h;
	cout<<*counter<<endl;
	cout<<counter<<endl;
	return 0;
}

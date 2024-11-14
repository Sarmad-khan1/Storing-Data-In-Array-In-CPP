#include <iostream>
using namespace std;
int main()
{
	int arraySize=130;
	int students[arraySize];
	for(int i=0; i<arraySize; i++)
	{
		cout<<"Enter data "<<i+1<<": ";
		cin>>students[i];
	}
}
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout<<"8";

    for(int i = 1; i <= rows; ++i)
    {
        {
            cout << "=";
        }
    }
    cout<<"D"<<endl;
    if(rows < 5)
    {
    	cout<<"slaba rabota"<<endl;
	}
	if(rows>20)
	{
		cout<<"negar"<<endl;
	}
    return 0;
}

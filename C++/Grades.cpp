#include <iostream>
using namespace std;

int main()
{
	char grade;
	cout<<"Enter your grade:";
	cin>>grade;
	switch(grade){
		case 'A':{
			cout<<"Exellent!"<<endl;
			break;
		}
		case 'B':{
			cout<<"Good!"<<endl;
			break;
		}
		case 'C':{
			cout<<"Satisfactory."<<endl;
			break;
		}
		case 'D':{
			cout<<"Barely acceptable."<<endl;
			break;
		}
		case 'F':{
			cout<<"Unacceptable! Better, try again."<<endl;
			break;
		}
		default:{
			cout<<"Non valid input!";
			break;
		}
	return 0;
	}
}
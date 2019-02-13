#include <iostream>

using namespace std;
int main(){
	int a, b, c;
	cout<<"value of 'a':";
	cin>>a;

	cout<<"value of 'b':";
	cin>>b;

	cout<<"value of 'c':";
	cin>>c;
	cout<<"The greatest value is...";
	if (a > b and a > c){
		cout<<"'a'";
	}
	if (b > a and b > c){
		cout<<"'b'";
	}
	if (c > b and c > a){
		cout<<"'c'";
	}
return 0;
}
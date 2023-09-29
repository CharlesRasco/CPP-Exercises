#include<iostream>
using namespace std;

int main (){
	
	string name;
	int num;
	char letter;
	
	cout<< "Enter a String: ";
	getline(cin, name);
	
	cout<< "Enter a Number: ";
	cin>> num;
	
	cout<< "Enter a Letter: ";
	cin>> letter; 
	
	name[num] = letter;
	cout <<"New text is: "<<name;
		
	
	return 0;
}
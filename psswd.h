#include<iostream>
using namespace std;
bool psswd(){
	int i = 0;
	string psswd = "Melina";
	string input;

	while( psswd != input && i < 3){
	cout << "What's the password?\n";
	getline(cin, input);
	if(psswd != input && i == 0){cout << "That's not quite it. 2 tries left.\n";
	i++;}
	else if(psswd != input && i == 1){cout << "Are you sure you are authorized? 1 try left.\n";
	i++;}
	else{i++;}
	}

	bool pass;
	if(psswd != input){cout << "Get out of here!\n";
	pass = 0;}
	else{cout << "Welcome! Welcome!\n";
	pass = 1;}
	return pass;
}

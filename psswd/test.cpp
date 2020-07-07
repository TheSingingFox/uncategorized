#include<iostream>
//include the header file
#include"psswd.h"
using namespace std;
int main(){
	//call the function and put its output into a boolean variable
	bool test = psswd();
	//act upon the return value
	if(test){cout << "You made it!\n";}
	else{cout << "You're a failure!\n";}
	return 0;}

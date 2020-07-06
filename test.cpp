#include<iostream>
#include"psswd.h"
using namespace std;
int main(){
	bool test = psswd();
	if(test){cout << "You made it!\n";}
	else{cout << "You're a failure!\n";}
	return 0;}

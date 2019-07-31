#include<iostream>
#include<string>
using namespace std;
int main()
{
	char num;
	string name1;
	string name2;
	int pass1;
	int pass2;
	cout<<"//////////////MENU/////////////////"<<endl;
	cout<<"1. Register "<<endl;
	cout<<"2. Login "<<endl;
	cout<<"Q.Exit Program "<<endl;
	do{
		cout<<"Enter Menu : ";
		cin>>num;
		if(num=='1'){
		cout<<"*****Resgister*****"<<endl;
		cout<<"Input UserName : ";
		cin>>name1;
		cout<<"Input Password : ";
		cin>>pass1;}
		else if(num=='2') {
		cout<<"*****Login*****"<<endl;
		cout<<"Input UserName : ";
		cin>>name2;
		cout<<"Input Password : " ;
		cin>>pass2;
		if (name1==name2&&pass1==pass2)
		cout<<"UserName Or Password Correct ^__^ "<<endl;
		else 
		cout<<"UserName Or Password Incorrect Please Try Again"<<endl;

	}

} while (num!='Q');
	cout<<"Exit Program...."<<endl;
	
	return(0);
}
	
	
	
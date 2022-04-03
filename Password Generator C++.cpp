#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream SavePass;
    char yn;
    const char TrueSelect = 'y';
    int SelectLengthInput;
    string pwd = "0aAbB1cCdD1eEf2F2gG3hHiIjJk3K45lLmM9n5N6o4OpPqQ76rRsStT78uUvVwW98xXyY0zZ";
    string password;
    cout << "Type the size of your random password" << endl;
    cin >> SelectLengthInput;
    cout << "generating your password....."<<endl;
    cout << "Your Password is: ";
    for(int i = 0; i<SelectLengthInput; i++) {
        password[i] = pwd[rand()%72];
        cout<<password[i];
    }
    cout<<endl;
    password.resize(SelectLengthInput);
    cout<< "do you want to save this password in a file? (y/n): ";
    cin>>yn;
    if(yn == TrueSelect)
    {
        ofstream SavePass("passwords.txt");
    	SavePass << password;
    	cout<< "Password saved on password.txt"<<endl;
    }
    else
    {
        cout<< "Thanks for using my generator!";
    }
    return 0;   
}

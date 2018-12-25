#include <iostream>
#include <string>
  
using namespace std;
  
string name(string *pFname, string *pLname);
  
int main(){
  
    string firstName;
    string *lastName= NULL;
    name(&firstName, lastName);
    return 0;
}
  
string name(string *pFname, string *pLname){
 
    string Lname;
 
    cout << "Please enter your first name: ";
    getline(cin, *pFname);
    if(!pLname){
        cout << "Please enter your last name: ";
        getline(cin, Lname);
    }
    string fullName = (*pFname) + " " + (Lname);
    cout << "Nice to meet you " << fullName;
    return fullName;
}

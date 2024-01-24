#include <iostream>
//read from down to up
using namespace std;

void question1();
void question1a();
void question2();
void question3();

int main() {
//    question1();
//    question1a();
//    question2();

    return 0;
}

void question3(){
  cout << "Question: " << endl;
  int question;

  cin >> question;

  switch(question){
      case 1:
          question1();
          break;
      case 2:
          question2();
          break;
      default:
          cout << "Invalid choice." << endl;
          break;
  }
}

void question2(){
    int age;
    cout << "Age: " << endl;
    cin >> age;

    if(age < 18){
        cout << "Child" << endl;
    } else if(age < 65){
        cout << "Adult" << endl;
    } else {
        cout << "Senior Citizen" << endl;
    }
}

void question1a(){
    string name;
    cout << "Name: " << endl;
    getline(cin, name);
    string firstName, lastName;
    firstName = name.substr(0 , name.find( ' '));
    lastName = name.substr(name.find(' ') + 1);

    cout << "Hello " << lastName << ", " << firstName << endl;
}

void question1(){
        string firstName, lastName;

    cout << "First name:  " << endl;
    cin >> firstName;

    cout << "Last name:  " << endl;
    cin >> lastName;

    cout << "Hello " <<lastName<< " " << firstName << endl;
}

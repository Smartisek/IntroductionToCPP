#include <iostream>
#include <iomanip>
#include <limits>
//read from down to up
using namespace std;

void question1();
void question1a();
void question2();
void question3();
void question4();
void question5();
void question6();

int main() {
//    question1();
//    question1a();
//    question2();
//    question3();
//    question4();
//    question5();
      question6();
    return 0;
}

void question6(){
    int intVal = INT_MAX;
    double dbl = numeric_limits<double>::max();
    char carMax = numeric_limits<char>::max();

    cout << "Integer: " << intVal << endl;
    cout << "Double: " << dbl << endl;
    cout << "Char: " << (int)carMax << endl;
    cout << "\n";
    intVal++;
    dbl++;
    carMax++;
    cout << "Integer: " << intVal << endl;
    cout << "Double: " << dbl << endl;
    cout << "Char: " << (int)carMax << endl;

}

void question5(){
    //triangle
   int size = 5;

   for(int i =1; i <= size; i++){
       cout << string(size-i, ' ');
       cout << string (i*2-1, '*') << endl;
   }

    cout << "\n";

    //box
    for(int o= 0; o < 5; o++){
        cout << endl;
        for(int p=0; p <= 10; p++){
            cout << "*";
        }
    }

    cout << "\n";
//rectangle
    for(int o= 0; o <= 5; o++){
        cout << endl;
        for(int p=0; p <= 5; p++){
            cout << "*";
        }
    }

    cout << "\n";
}

void question4(){
    for(int i=1; i<= 10; i++){
        cout << left << setw(5) << i << " = " << setw(5) << (i*i) << endl;
    }
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

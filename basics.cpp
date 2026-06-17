#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<"Hello World!"<<endl;
    cout << "This is SK"<<endl;

    //int 
    int value = 10;
    cout << "Value: " << value << endl;

    //long
    long big_value = 1000000000;
    cout << "Big Value: " << big_value << endl;

    // long long
    long long very_big_value = 1000000000000;
    cout << "Very Big Value: " << very_big_value << endl;

    // float 
    float pi = 3.14;

    // double 
    double e = 2.718281828459045;

    // string
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Name: " << name << endl;

    //get line
    string fullname;
    cout << "Enter your full name: ";
    getline(cin >> ws,fullname); // this takes whole line as input
    cout << "full name : " << fullname << endl;

    // char
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    cout << "Grade:" << grade << endl;

    //program that takes an age and prints if you are adult or not
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 18){
        cout << "You are an adult." << endl;
    } else  {
        cout << "You are not an adult." << endl;
    } 

    /*program - a school has following rules for  grading system
    a. Below 25 - F
    b - 25-44 - E
    c - 45-49 - D
    d - 50 - 59 - C
    e - 60 -79 - B
    f - 80 - 100 - A
    ask user to enter marks and print the corresponding grade. */
    int marks;
    cout << "Enter your marks" << "/n";
    cin >> marks;
    if(marks <25){
        cout << "You got an F";
    }else if (marks <=44){
        cout << "You got an E"; 
    }else if(marks <=49){
        cout << "D";
    }else if(marks <=59){
        cout << "C";
    }else if(marks <=79){
        cout << "B";
    }else if(marks <=100){
        cout << "A";
    }

    /* program - Take the age from user and then decide
    1 - if age < 18,
    print  - not eligible for the job
    2 - if age > = 18
    print - eligible for job
    3 - if age >= 55 and age <=57
    print - eligible for job but retirement soon
    4 - if age > 57
    print - Retirement time
*/
} 

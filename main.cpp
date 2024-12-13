#include <iostream>

using namespace std;

class Student {
public:
    string First_Name;
    string Last_Name;
    string Course_Name;
    int Reg_No;
    int Age;

    void Display_Student() {
        cout << "My name is: " << First_Name + Last_Name << endl;
        cout << "My Registration Number is: " << Reg_No << endl;
        cout << "My age is: " << Age << endl;
        cout << "Am attending : "<<Course_Name << endl;
    };
    Student(string name1,string name2,string course,int no,int age) {
        First_Name = name1;
        Last_Name = name2;
        Course_Name = course;
        Reg_No = no;
        Age = age;


    }

};

int main() {
    Student student1= Student("Priver","Cosmas","Diploma in Computer Science",23100523140004,18);
    student1.Display_Student();
    return 0;
}
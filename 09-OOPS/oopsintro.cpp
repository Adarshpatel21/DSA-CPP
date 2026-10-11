#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private: //to restrict access outside the class
    double salary;

    public: //to acess outside the class

    //non parameterized constructor
         Teacher(){
            cout << "hi , I am a constructor of Teacher class" << endl;
            dept = "computer science"; //sbke liye default value set krdiya
         }

         

    
    //properties
    string name;
    string dept;
    string subject;
     
    // methods or members
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter 
    void setsalary(double s){
        salary = s;
    }
    //getter
    double getsalary(){
        return salary;
    }

};

class Account {
    private:
    double balance;
    string password; // data hiding
    public:
    string accountID;
    string username;

};
int main(){

    Teacher t1; //object of class Teacher "constructor is called here"
    t1.name = "John";
    //t1.dept = "Computer Science";
    t1.subject = "Data Structures";
    t1.setsalary(50000.0);

    cout << t1.name << " is a teacher in the " << t1.dept << " department, teaching " << t1.subject << " with a salary of $" << t1.getsalary() << endl;
}
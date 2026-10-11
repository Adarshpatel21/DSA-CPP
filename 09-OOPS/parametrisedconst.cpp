#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private: //to restrict access outside the class
    double salary;

    public: //to acess outside the class
 
    //parameterized constructor
         Teacher(string name, string d, string s, double sal){
            cout << "hi , I am a parameterized constructor of Teacher class" << endl;
            this->name = name; //this pointer is used to refer to the current object 
            dept = d;
            subject = s;
            salary = sal;

         }
    //copy constructor
    Teacher(Teacher &orgObj){//copy constructor is used to create a new object as a copy of an existing object
        cout << "hi , I am a  custom copy constructor of Teacher class" << endl;
        name = orgObj.name;
        dept = orgObj.dept;
        subject = orgObj.subject;
        salary = orgObj.salary;
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
    void getinfo(){
        cout << "name: " << name << endl;
        cout << "dept: " << dept << endl;
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

    Teacher t1("John", "Computer Science", "Data Structures", 50000.0); //object of class Teacher "constructor is called here"
    t1.getinfo();

    Teacher t2(t1); //default copy constructor invoked here ,,agr custom copy constructor na hota to default copy constructor call hota ab jase ki yha pe hamne custom copy constructor banaya hai to wo call hoga
    t2.getinfo();

    //cout << t1.name << " is a teacher in the " << t1.dept << " department, teaching " << t1.subject << " with a salary of $" << t1.getsalary() << endl;
}
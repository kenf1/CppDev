#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    //constructor (assign values faster)
    Student(std::string name,int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){
    Student student1("student1",21,2.01);
    std::cout << student1.name << " " << student1.age << " " << student1.gpa << "\n";

    Student student2("student2",50,3.99);

    return 0;
}
/*
    Add a student's name to the roster for a grade
    Get a list of all students enrolled in a grade
    Get a sorted list of all students in all grades (by grade, then alphabetical)
*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::map<int,std::vector<std::string>> roster;

void addS(int grade,std::string studentName);

int main(){
    //add student to grade
    addS(1,"J1");
    addS(3,"J3");
    addS(3,"J3a");
    addS(5,"J5");

    //students in single grade
    std::cout << "Students in grade 3:\n";
    for(auto i:roster[3]){
        std::cout << i << "\n";
    }

    std::cout << "\n";

    //sort students in all grades
    std::vector<std::string> all_students;
    for(auto i:roster){
        for(auto j:i.second){
            all_students.push_back(j);
        }
    }
    std::sort(all_students.begin(),all_students.end());

    //all students from all grades
    std::cout << "All students:\n";
    for(auto i:all_students) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}

//simplify amount of code to add student
void addS(int grade,std::string studentName){
    roster[grade].push_back(studentName);
}
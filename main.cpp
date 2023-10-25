#include "Student.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<Student> students;
    students.push_back(Student('A', 123, 2, 3));
    students.push_back(Student('B', 124, 1, 2));
    students.push_back(Student('C', 125, 3, 1));

    // Нэрээр эрэмбэлэх
    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        return a.getName() < b.getName();
    });

    // Курсаар эрэмбэлэх
    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        return a.getCourse() < b.getCourse();
    });

    // Статик гишүүн өгөгдлийг хэвлэх
    cout << "Number of students created: " << Student::getCount() << endl;

    return 0;
}

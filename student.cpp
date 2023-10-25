#include "Student.h"
#include <iostream>

// Анхдагч байгуулагч
Student::Student() {
    name = '\0';
    id = 0;
    course = 1;
    grade = 0;
    count++;
}

// Параметертэй байгуулагч
Student::Student(char n, int i, int c, int g) {
    name = n;
    id = i;
    course = c;
    grade = g;
    count++;
}

// Хуулагч байгуулагч
Student::Student(const Student &obj) {
    name = obj.name;
    id = obj.id;
    course = obj.course;
    grade = obj.grade;
    count++;
}

// Хуулагч функц
void Student::copyData(Student &obj) {
    name = obj.name;
    id = obj.id;
    course = obj.course;
    grade = obj.grade;
}

// Оюутныг курсээр нь харьцуулах функцууд
bool Student::greaterThan(Student &obj) {
    return course > obj.course;
}

bool Student::lessThan(Student &obj) {
    return course < obj.course;
}

bool Student::isEqual(Student &obj) {
    return course == obj.course;
}

// Оюутныг нэрээр нь харьцуулах функцууд
bool Student::before(Student &obj) {
    return name < obj.name;
}

bool Student::after(Student &obj) {
    return name > obj.name;
}

// Гишүүн өгөгдлүүд
char Student::getName() {
    return name;
}

void Student::setName(char n) {
    name = n;
}

int Student::getId() {
    return id;
}

void Student::setId(int i) {
    id = i;
}

int Student::getCourse() {
    return course;
}

void Student::setCourse(int c) {
    course = c;
}

int Student::getGrade() {
    return grade;
}

void Student::setGrade(int g) {
    grade = g;
}

// Устгагч функц
Student::~Student() {
    count--;
}

// Статик гишүүн өгөгдлүүдийг хэвлэх функц
int Student::count = 0;

int Student::getCount() {
    return count;
}

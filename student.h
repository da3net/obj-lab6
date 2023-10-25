#include <string>

using namespace std;

class Student {
public:
    char name; // Нэр
    int id; // Оюутны дугаар
    int course; // Курс
private:
    int grade; // Голч
    static int count; // Тоо

public:
    // Анхдагч байгуулагч
    Student();

    // Параметертэй байгуулагч
    Student(char n, int i, int c, int g);

    // Хуулагч байгуулагч
    Student(const Student &obj);

    // Хуулагч функц
    void copyData(Student &obj);

    // Оюутныг курсээр нь харьцуулах функцууд
    bool greaterThan(Student &obj);
    bool lessThan(Student &obj);
    bool isEqual(Student &obj);

    // Оюутныг нэрээр нь харьцуулах функцууд
    bool before(Student &obj);
    bool after(Student &obj);

    // Гишүүн өгөгдлүүд
    char getName();
    void setName(char n);
    int getId();
    void setId(int i);
    int getCourse();
    void setCourse(int c);
    int getGrade();
    void setGrade(int g);

    // Устгагч функц
    ~Student();

    // Статик гишүүн өгөгдлүүдийг хэвлэх функц
    static int getCount();
};

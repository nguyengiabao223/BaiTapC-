#include<iostream>
using namespace std;

class student {
    private :
    string name;
    int age;
    float gpa;
    
    public :
    student(string n, int a, float g ) : name(n), age(a), gpa(g) {}

    string getName() const { return name; }
    int getAge() const { return age;}
    float getGpa() const { return gpa; }

    void setName(string n) {name = n; }
    void setAge(int a) { age = a; }
    void setGpa(float g) { gpa = g; }

    void displayInfo() const {
        cout << "Ten: " << name << endl;
        cout << "Tuoi: " << age << endl;
        cout << "GPA: " << gpa << endl;

    }
};

int main () {
    student s1("Nguyen Gia Bao", 20, 3.5);
    cout << "Thong tin sinh vien: " << endl;
    s1.displayInfo();
    s1.setGpa(3.8);
    s1.displayInfo();
    return 0;
}
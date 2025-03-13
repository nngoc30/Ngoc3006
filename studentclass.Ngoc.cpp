#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int id;
    double gpa;

public:
    // Constructor
    Student(string name, int id, double gpa) 
        : name(name), id(id), gpa(gpa) {}

    // Getter methods
    string getName() const { return name; }
    int getId() const { return id; }
    double getGpa() const { return gpa; }

    // Setter methods
    void setName(const string& newName) { name = newName; }
    void setId(int newId) { id = newId; }
    void setGpa(double newGpa) { gpa = newGpa; }

    // Display method
    void displayInfo() const {
        cout << "Student Name: " << name << "\n"
             << "ID: " << id << "\n"
             << "GPA: " << gpa << "\n";
    }
};

int main() {
    // Tao mot sinh vien
    Student student("Nguyen Van A", 12345, 3.8);

    // Hien thi thong tin sinh vien
    student.displayInfo();
    
	// Thay doi thong tin sinh vien		
    student.setName("Phan Nguyen Ngoc");
    student.setGpa(3.2);

    // Hien thi thong tin sau khi cap nhat
    cout << "\nSau khi cap nhat:\n";
    student.displayInfo();
    
    return 0;
}

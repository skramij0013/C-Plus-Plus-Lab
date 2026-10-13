
#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Exam : public Student {
protected:
    int marks[6];

public:
    void getMarks() {
        cout << "Enter marks in 6 subjects:\n";
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
};

class Result : public Exam {
    int total = 0;
    float percentage;

public:
    void display() {
        for (int i = 0; i < 6; i++) {
            total += marks[i];
        }

        percentage = total / 6.0;

        cout << "\n--- Student Result ---\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << "/600" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result r;

    r.getStudent();
    r.getMarks();
    r.display();

    return 0;
}

// Name : Ansh Gupta
// UID : 22BCS14765
// Section : 802 - A

// Question 1
#include "iostream"
using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << (num * (num + 1)) / 2;
    return 0;
}

// Question 2
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    int numToCheck, maxFactor, isPrimeFlag = 0;
    cin >> numToCheck;

    maxFactor = ceil(sqrt(numToCheck));
    int originalNum = numToCheck;

    for (int factor = 2; factor <= maxFactor; factor++)
    {
        if (originalNum % factor == 0)
        {
            isPrimeFlag = 1;
        }
    }

    if (isPrimeFlag == 0 && originalNum != 1 || originalNum == 2 || originalNum == 3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

// Question 3
#include "iostream"
using namespace std;

int main()
{
    int rangeLimit;
    cin >> rangeLimit;

    for (int currentNum = 0; currentNum <= rangeLimit; currentNum++)
    {
        if (currentNum % 2 != 0)
        {
            cout << currentNum << "\t";
        }
    }
    return 0;
}

// Question 4
#include "iostream"
using namespace std;

int main()
{
    int inputNumber;
    cin >> inputNumber;
    cout << inputNumber * inputNumber << endl;
}

// Question 5
#include "iostream"
using namespace std;

int main()
{
    int multiplierValue, iteration = 1;
    cin >> multiplierValue;
    while (iteration <= 10)
    {
        cout << iteration << " X " << multiplierValue << " = " << iteration * multiplierValue << endl;
        iteration++;
    }
}

// Question 6
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    int numericValue;
    cin >> numericValue;
    cout << floor(log10(numericValue) + 1) << endl;
}

// Question 7
#include "iostream"
using namespace std;

int main()
{
    int numberToReverse, reversedNum = 0;
    cin >> numberToReverse;

    while (numberToReverse != 0)
    {
        int digit = numberToReverse % 10;
        reversedNum = reversedNum * 10 + digit;
        numberToReverse = numberToReverse / 10;
    }
    cout << reversedNum << endl;
}

// Question 8
#include "iostream"
using namespace std;

int main()
{
    long long numToAnalyze, maxDigit = -1, currentDigit;
    cin >> numToAnalyze;
    while (numToAnalyze != 0)
    {
        currentDigit = numToAnalyze % 10;
        if (maxDigit == -1)
        {
            maxDigit = currentDigit;
        }
        else
        {
            maxDigit = max(maxDigit, currentDigit);
        }
        numToAnalyze = numToAnalyze / 10;
    }
    cout << maxDigit << endl;
}

// Question 9
#include "iostream"
using namespace std;

int main()
{
    int numToCheckPalindrome, reversedNum = 0;
    cin >> numToCheckPalindrome;
    int tempNum = numToCheckPalindrome;
    while (tempNum != 0)
    {
        int remainder = tempNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        tempNum = tempNum / 10;
    }
    if (reversedNum == numToCheckPalindrome)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}

// Question 10
#include "iostream"
using namespace std;

int main()
{
    int digitSum = 0, inputNum;
    cin >> inputNum;
    while (inputNum != 0)
    {
        int singleDigit = inputNum % 10;
        digitSum += singleDigit;
        inputNum = inputNum / 10;
    }
    cout << digitSum;
}

// Question 11
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void computeArea(double radius) {
    cout << "Circle Area: " << 3.14159 * radius * radius << endl;
}
void computeArea(double length, double width) {
    cout << "Rectangle Area: " << length * width << endl;
}
void computeArea(double base, double height, int flag) {
    cout << "Triangle Area: " << 0.5 * base * height << endl;
}

void computeSalary(int stipend) {
    cout << "Intern Salary: " << stipend << endl;
}
void computeSalary(int basicPay, int allowance) {
    cout << "Employee Salary: " << basicPay + allowance << endl;
}
void computeSalary(int basicPay, int allowance, int bonus) {
    cout << "Manager Salary: " << basicPay + allowance + bonus << endl;
}

class EmployeeInfo {
private:
    int employeeId;
    string employeeName;
    float monthlyWage;

public:
    void setDetails(int id, string name, float salary) {
        employeeId = id;
        employeeName = name;
        monthlyWage = salary;
    }
    void displayDetails() {
        cout << "Employee ID: " << employeeId << "\nName: " << employeeName << "\nSalary: " << monthlyWage << endl;
    }
};

// Question 12
void calculateSalary(int stipend) {
    cout << "Intern Salary: " << stipend << endl;
}
void calculateSalary(int baseSalary, int bonuses) {
    cout << "Employee Salary: " << baseSalary + bonuses << endl;
}
void calculateSalary(int baseSalary, int bonuses, int incentives) {
    cout << "Manager Salary: " << baseSalary + bonuses + incentives << endl;
}

// Question 13
class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void setDetails(int empId, string empName, float empSalary) {
        id = empId;
        name = empName;
        salary = empSalary;
    }
    void displayDetails() {
        cout << "Employee ID: " << id << "\nEmployee Name: " << name << "\nEmployee Salary: " << salary << endl;
    }
};

// Question 14
class Student {
public:
    int rollNumber;
    string name;
    void setStudentDetails(int r, string n) {
        rollNumber = r;
        name = n;
    }
};

class Result : public Student {
public:
    int marks[3];
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void calculateAndDisplay() {
        int total = marks[0] + marks[1] + marks[2];
        cout << "Roll Number: " << rollNumber << "\nName: " << name
             << "\nTotal: " << total << "\nPercentage: " << (total / 3.0) << "%" << endl;
    }
};

// Question 15
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

// Question 16
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

// Question 17
void operate(int matA[2][2], int matB[2][2], int operation) {
    int result[2][2] = {};
    if (operation == 1) { // Addition
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result[i][j] = matA[i][j] + matB[i][j];
    } else if (operation == 2) { // Multiplication
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    result[i][j] += matA[i][k] * matB[k][j];
    }
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}

// Question 18
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

// Question 19
class Book {
public:
    string title, author;
    int isbn;
    void setBookDetails(string t, string a, int i) {
        title = t;
        author = a;
        isbn = i;
    }
};
class Borrower {
public:
    string name;
    int id;
    void setBorrowerDetails(string n, int i) {
        name = n;
        id = i;
    }
};
class Library : public Book, public Borrower {
public:
    void borrowBook() {
        cout << name << " (ID: " << id << ") has borrowed \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
    void returnBook() {
        cout << name << " (ID: " << id << ") has returned \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
};

// Question 20
class Account {
public:
    virtual void calculateInterest() = 0; // Pure virtual function
};
class SavingsAccount : public Account {
    double balance, rate, time;
public:
    SavingsAccount(double b, double r, double t) : balance(b), rate(r), time(t) {}
    void calculateInterest() override {
        cout << "Savings Account Interest: " << (balance * rate * time / 100) << endl;
    }
};
class CurrentAccount : public Account {
    double balance, fee;
public:
    CurrentAccount(double b, double f) : balance(b), fee(f) {}
    void calculateInterest() override {
        cout << "Balance after fee deduction: " << (balance - fee) << endl;
    }
};

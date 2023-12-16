#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
protected:
    string name;
    int age;
    
public:
    virtual void getdata() {
        cin >> name >> age;
    }
    virtual void putdata() {
        cout << name << " " << age << " ";
    }
};

class Professor : public Person {
private:
    static int count;
    int publications;
    int id;
    
public:
    Professor() : Person() {
        count++;
        id = getCount();
    }
    
    void getdata() {
        Person::getdata();
        cin >> publications;
    }
    
    void putdata() {
        Person::putdata();
        cout << publications << " " << id << endl;
    }
    
    static int getCount() {
        return count;
    }
};

class Student : public Person {
private: 
    static int count;
    int marks;
    int id;
public:
    Student() : Person() {
        count++;
        id = getCount();
    }

    void getdata() {
        Person::getdata();
        for (int i = 0; i < 6; i++) {
            int temp;
            cin >> temp;
            marks += temp;
        }
    }

    void putdata() {
        Person::putdata();
        cout << marks << " " << id << endl;
    }  
    
    static int getCount() {
        return count;   
    }
};

int Professor::count = 0;
int Student::count = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}

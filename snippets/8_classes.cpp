#include <iostream>

using namespace std;

/*
----------------------------------------
    classes are a way to group data and
    functions together

    classes are like blueprints for
    objects
----------------------------------------
*/

// Create a class called Person
class Person {
    // public means that these variables
    // and functions can be accessed
    // outside of the class
    public:
        // variables
        string name;
        int age;

        // methods
        string getName() {
            cout << name << endl;
        }

        int getAge() {
            cout << age << endl;
        }

        void ageUp() {
            age++;
        }
};

// Create a class called Car with a constructor
class Car {
    public:
        string make;
        string model;
        int year;

        // constructor
        Car(string make, string model, int year) {
            this->make = make;
            this->model = model;
            this->year = year;
        }

        // method
        void printCarInfo() {
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
};

// Create a class called Rectangle with a constructor, private variables, and public methods
class Rectangle {
    public:
        // constructor
        Rectangle(int length, int width) {
            this->length = length;
            this->width = width;
        }

        // methods
        int getArea() {
            return length * width;
        }

        int getPerimeter() {
            return 2 * (length + width);
        }

    // If we want to access these variables outside of the class,
    // we need to use getters and setters
    private:
        int length;
        int width;
};

int main() {
    // Create a person object
    Person person;

    // Set the name and age of the person
    person.name = "John";
    person.age = 20;

    // Call the getName and getAge methods
    person.getName();
    person.getAge();

    // Call the ageUp method
    person.ageUp();

    // Call the getAge method again
    person.getAge();
}
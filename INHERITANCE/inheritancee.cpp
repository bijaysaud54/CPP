#include <iostream>
#include <cmath>

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual double area() const = 0; // Pure virtual function

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius; // Area = π * r²
    }

    void display() const {
        std::cout << "Circle with radius: " << radius << ", Area: " << area() << std::endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height; // Area = width * height
    }

    void display() const {
        std::cout << "Rectangle with width: " << width << ", height: " << height 
                  << ", Area: " << area() << std::endl;
    }
};

int main() {
    // Create an array of Shape pointers
    Shape* shapes[2];

    // Create instances of Circle and Rectangle
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    // Display areas of the shapes
    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();
    }

    // Clean up
    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }

    return 0;
}

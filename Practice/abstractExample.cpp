class Shape {  // Abstract base class
protected:
    int x, y;
public:
    virtual double area() = 0;  // pure virtual function
    virtual double perimeter() = 0;
    
    // Concrete method shared by all shapes
    void setPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() override {
        return 3.14 * radius * radius;
    }
    
    double perimeter() override {
        return 2 * 3.14 * radius;
    }
};

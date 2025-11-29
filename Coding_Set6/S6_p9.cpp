/*Topic: Inheritance + Operator Overloading 
Problem: 
Create a class Vector2D with x and y coordinates and overload the + operator. 
Derive a class Vector3D that adds z coordinate and overloads the + operator as well. 
Show how the derived operator reuses base functionality. 
Learning Outcome: Combining operator overloading with inheritance and reusing base 
class code. */

#include <iostream>
using namespace std;

class Vector2D {
    protected:
    int x, y;
    public:
    Vector2D(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}

    Vector2D operator+(const Vector2D& v) {
        return Vector2D(x + v.x, y + v.y);
    }

    int getX() const { return x; }
    int getY() const { return y; }
    void display() {
        cout << "Vector2D(" << x << ", " << y << ")" << endl;
    }
};

class Vector3D : public Vector2D {
    private:
    int z;
    public:
    Vector3D(int x_val = 0, int y_val = 0, int z_val = 0) : Vector2D(x_val, y_val), z(z_val) {}

    Vector3D operator+(const Vector3D& v) {
        Vector2D base_sum = Vector2D(x, y) + Vector2D(v.x, v.y); // Reuse base class operator+
        return Vector3D(base_sum.getX(), base_sum.getY(), z + v.z);
    }

    void display() {
        cout << "Vector3D(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector2D v2d1(1, 2), v2d2(3, 4);
    Vector2D v2d_sum = v2d1 + v2d2;
    v2d_sum.display();

    Vector3D v3d1(1, 2, 3), v3d2(4, 5, 6);
    Vector3D v3d_sum = v3d1 + v3d2;
    v3d_sum.display();

    return 0;
}
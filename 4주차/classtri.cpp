#include <iostream>
#include <cmath>
using namespace std;

class Point {
    private:
        int x, y;
        
    public:
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        }
};

class Triangle {
    private:
        Point a, b, c;
    public:
        Triangle() {
            a.setX(1);
            c.setY(1);
        }
        
        double getAB() {
            return sqrt((a.getX() - b.getX()) * (a.getX() - b.getX()) + (a.getY() - b.getY()) * (a.getY() - b.getY()));
        }
        
        double getBC() {
            return sqrt((b.getX() - c.getX()) * (b.getX() - c.getX()) + (b.getY() - c.getY()) * (b.getY() - c.getY()));
        }
        
        double getCA() {
            return sqrt((a.getX() - c.getX()) * (a.getX() - c.getX()) + (a.getY() - c.getY()) * (a.getY() - c.getY()));
        }
        
        double getArea() {
            double AB = getAB();
            double BC = getBC();
            double CA = getCA();
            double S = (AB + BC + CA) / 2;
            
            return sqrt(S*(S-AB)*(S-BC)*(S-CA));
        }
};

int main(void) {
    Triangle t = *new Triangle();
    cout << t.getArea();
    return 0;
}
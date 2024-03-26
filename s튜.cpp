#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
    int x;
    int y;

    public:
    int getX(){
        return x;
    };

    int getY(){
        return y;
    };

    void setX(int x_test){
        x = x_test;
    }
    void setY(int y_test){
        y = y_test;
    }
};

class Triangle{
    private:
    Point a;
    Point b;
    Point c;
    

    public:
    Triangle() {
        a.setX(1);
        c.setY(1);
    }

    int cal(Point a, Point b, Point c){
        double q = sqrt(pow(a.getX()-b.getX(),2)+pow(a.getY()-b.getY(),2));
        double r = sqrt(pow(a.getX()-c.getX(),2)+pow(a.getY()-c.getY(),2));
        double t = sqrt(pow(c.getX()-b.getX(),2)+pow(c.getY()-b.getY(),2));
        int s = (q+r+t)/2;
        int area = sqrt(s*(s-q)*(s-r)*(s-t));
        return area;
    };
};

int main(){
    Point p = *new Point();
    //Point* p = new Point();
    p.setX(1);
    p.setY(1);
    
    std::cout <<p.getX() << p.getY() << endl;
    
    //std::cout <<p->getX() << p->getY() << endl;

    
}
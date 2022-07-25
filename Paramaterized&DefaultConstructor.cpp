#include<iostream>
#include<cmath>
using namespace std;
class Point{
    int x, y;
    
    friend void distance (Point, Point);

    public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<" ,"<<y<<")"<<endl;
    }
};
void distance(Point p1,Point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<< "The difference is : "<<diff<<endl;
    
    /* Second way to solve
     double dis;
    dis = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    cout << dis << endl;  */
}
int main(){
    Point p(1, 0);
    //p.displayPoint();

    Point q(70, 0);
    //q.displayPoint();

    distance(p,q);
    return 0;
}

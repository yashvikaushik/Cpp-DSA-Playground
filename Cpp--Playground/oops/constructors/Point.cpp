#include <iostream>
using namespace std;
class Point{
 public:
    int x,y;
   

   Point(){
    x=0;
    y=0;
    cout<<"default constructor called"<<endl;

   }

   Point(int xx,int yy){
    x=xx;
    y=yy;
    cout<<"parameterized constructor called"<<endl;

   }

   /*Point(const Point &p){
    this->x=19;
    this->y=20;
    cout<<"copy constructor called"<<endl;
   

   }*/
    

};

int main(){
    Point point1;
    Point point2(3,4);
    Point point3=point2;
    
    cout<<point1.x<<" "<<point1.y<<endl;
    cout<<point2.x<<" "<<point2.y<<endl;
    cout<<point3.x<<" "<<point3.y<<endl;
    return 0;
}
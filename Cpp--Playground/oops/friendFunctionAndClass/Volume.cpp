#include <iostream>
using namespace std;
class BoxPrinter;
class Box{
int length,breadth,heigth;
public:
Box(int l,int b,int h){
    length=l;
    breadth=b;
    heigth=h;

}

friend class BoxPrinter;
};

class BoxPrinter{
    public: 
    int calculateVolume(Box b){
        return b.length*b.breadth*b.heigth;
    }
};

int main(){
    int length,breadth,heigth;
    cout<<"enter length: "<<endl;
    cin>>length;

    cout<<"enter breadth: "<<endl;
    cin>>breadth;

    cout<<"enter heigth: "<<endl;
    cin>>heigth;
    Box box(length,breadth,heigth);

    BoxPrinter boxPrinter;

    cout<<"Volume: "<<boxPrinter.calculateVolume(box);
    return 0;

}
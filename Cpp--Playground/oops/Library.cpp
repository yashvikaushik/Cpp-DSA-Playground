#include <iostream>
using namespace std;
class Library{
string author;
string title;
float price;
int pages;


public:
static int count;

Library(){
    author="null";
    title="unknown";
    price=0.0f;
    pages=0;
    count++;
    cout<<"default constructor"<<endl;
}
Library(string author,string title,float price,int pages){
    this->author=author;
    this->pages=pages;
    this->price=price;
    this->title=title;
    cout<<"parameterized constructor";
    count++;
}

Library(const Library &l){
    this->author=l.author;
    this->title=l.title;
    this->pages=l.pages;
    this->price=l.price;
    cout<<"copy constructor";
    count++;
}

void setBookAuthor(string author){
    this->author=author;

}
 
void setBookTitle(string title){
    this->title=title;
}

void setBookPages(int pages){
    this->pages=pages;

}
void setBookPrice(float price){
    this->price=price;

}

string getBookAuthor(){
    return author;

}
 
string getBookTitle(){
    return title;
}

int getBookPages(){
    return pages;

}
float getBookPrice(){
   return price;

}

void displayBookDetails(){
    cout<<"title: "<<title<<endl;
    cout<<"author: "<<author<<endl;
    cout<<"price: "<<price<<endl;
    cout<<"pages: "<<pages<<endl;
    
}

static void getBookCount(){
    cout<<"number of books created are: "<<count<<endl;
}



};

int Library :: count=0; //scope resoltion

int main(){
    Library b1; // Default constructor
    Library b2( "C++ Fundamentals", "Bjarne", 599.99, 350); // Parameterized constructor
    Library b3 = b2; // Copy constructor

    b1.setBookPages(100);
    b1.setBookTitle("Intro to Java");
    b1.setBookAuthor("James Gosling");
    b1.setBookPrice(499.50);
    b1.setBookPages(400);

    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();

     Library :: getBookCount();


    return 0;
}
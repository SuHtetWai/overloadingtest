#include<iostream>
using namespace std;

class Math{
    int hour;
    int min;
public:
    void timeIN(){
        cout<<"Enter your Time hour and min"<<endl;
        cin>>hour;
        cin>>min;

    }
    void operator++(int){
        hour++;
        min++;
    }
    void operator--(int){
        hour--;
        min--;
    }
    void timeOut(){
        cout<<"The time is :"<<hour<<":"<<min<<endl;
    }
};

int main(){
    Math t;

    t.timeIN();
    t++;
    cout<<"After increment in time"<<endl;
    t.timeOut();
    cout<<"After decrement in time"<<endl;
    t--;
    t--;
    t.timeOut();
}

#include<iostream>
using namespace std;

/*class Math{
    int sum;
public:
    void add(int a,int b){
        sum = a + b;
    }
    void add(int a,int b, int c){
        sum = a + b + c;
    }
    void display(){
        cout<<"The sum is:"<<sum<<endl;
    }

};
int main(){
    Math m1,m2;
    m1.add(23,6);
    m1.display();
    m2.add(20,31,12);
    m2.display();
}

#include<iostream>
using namespace std;

class Math{
    int mul;
public:
    Math(){
        cout<<"This is no argument constructor"<<endl;
    }
    Math(int a,int b){
        mul = a * b;
        cout<<"This is parameterize constructor"<<endl;
        cout<<"The value is:"<<mul;
    }

};
int main(){
    Math m1;
    Math m2(2,3);

}*/
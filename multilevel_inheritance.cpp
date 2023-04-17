#include<iostream>
using namespace std;
class A{
    public:
    float temperature;
};
class B : public A{
    public:
    float a;
    void toFehrenheit(){
        cout<<"Enter Temperature in celsius :";
        cin>>this->temperature;
        a = (1.8*temperature)+32;
        cout<<"Temperature in Fehrenheit is : "<<a<<endl;
    };
};
class C : public B{
    public:
    float b;
    void toKelvin(){
        b = (a-32)*0.55 + 273.15;
        cout<<"Fehrenheit in Kelvin is : "<<b<<endl;
    };
};
int main(){
    C obj1;
    obj1.toFehrenheit();
    obj1.toKelvin();
    return 0;
}

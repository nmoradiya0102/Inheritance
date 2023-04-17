#include<iostream>
using namespace std;
class X{
    public:
    int p;
    int q;
    int r;
};
class Y : public X{
    public:
    void inputData(){
        cout<<"Enter value of P:";
        cin>>this->p;
        cout<<"Enter value of Q:";
        cin>>this->q;
        cout<<"Enter value of R:";
        cin>>this->r;
    }
    void setData(){
        this->p = p;
        this->q = q;
        this->r = r;
    }
    void getData(){       
        int m = (p*p*p)+(q*q*q)+(r*r*r);
        cout<<"Sum of all three numbers cubes: "<<m<<endl;
    }
};
int main () {
    Y obj1;
    obj1.inputData();
    obj1.setData();
    obj1.getData();
    return 0;
}

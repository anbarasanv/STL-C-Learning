//primitive type to class assignent
#include <iostream>
using namespace std;

class A {
    private:
    int a;
    public:
    A(){}
    A(int k){
        a = k;
    }
    void showData(){
        cout<<"Value = "<<a;
    }
};
int main(){
    A a;
    int x = 10;
    a = x;
    a.showData();
}


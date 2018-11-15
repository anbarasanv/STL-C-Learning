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

/******************************************************************************************/
//calss type  assigned to primitive type
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
    operator int(){
        cout<<"Inside function:\n";
        showData();
        return(a);
    }
};
int main(){
    A a;
    int x = 10, y;
    y = a;
    
}

/******************************************************************************************/

//one class type assigned to another class type
#include <iostream>
using namespace std;
class B {
    private:
    int a = 200;
    public:
    int getA(){
        return a;
    }
};
class A {
    private:
    int a;
    public:
    A(){}
    A(B bobj){
        a = bobj.getA();
    }
    void showData(){
        cout<<"Value = "<<a;
    }
    operator int(){
        cout<<"Inside function:\n";
        showData();
        return(a);
    }
};
int main(){
    A a;
    B b;
    a = b;
    a.showData();
    
}

/******************************************************************************************/


// Dynamic constructor
/* A constructor which alocates memory outside of the object block 
in run time which is called dynamic memory allocation
*/
#include <iostream>
using namespace std;
class A{
  private:
  int a, *p;
  public:
  A(int x, int y){
      a = x;
      p = new int;
      *p = y;
  }
  void showData(){
      cout << "a: "<<a<<" p: "<<*p;
  }
};
int main(){
    A obj(1,2);
    obj.showData();
}

/******************************************************************************************/


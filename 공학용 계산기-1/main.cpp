#include <iostream>
using namespace std;

class Calculator{
    int a,b;
public:
    void setValue(int x, int y);
    int add();
    int sub();
    int mul();
    double div();
};

void Calculator::setValue(int x, int y){
    a =x;
    b =y;
}
int Calculator::add(){
    return a+b;
}
int Calculator::sub(){
    return a-b;
}
int Calculator::mul(){
    return a*b;
}
double Calculator::div(){
    return (double)a /(double)b;

}

int main(){
    int x,y;
    char c;
    Calculator cal;
    cout << "두 정수와 연산자를 입력하세요";
    cin >> x >> c>> y;
    cal.setValue(x,y);

    switch (c){
    case '+':
        cout << cal.add();
        break;

    case '-':
        cout << cal.sub();
        break;
    case '*':
        cout << cal.mul();
        break;
    case '/':
        cout << cal.div();
        break;
    default:
        break;

    }
    cout<<endl;
    }

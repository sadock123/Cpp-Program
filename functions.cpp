
#include <iostream>
using namespace std;
class operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void get();
    void sum();
    void diff();
    void multi();
    void division();
};
inline void operation :: get(){
    cin >>  a;
    cin >>  b;

}
inline void operation :: sum (){
    cout << "summation" << a+b <<"\n";
}
inline void operation :: diff()
{
    sub = a-b;
    cout << "Difference of two numbers: " << a-b << "\n";
}

inline void operation :: multi()
{
    mul = a*b;
    cout << "Product of two numbers: " << a*b << "\n";
}

inline void operation ::division()
{
    div=a/b;
    cout<<"Division of two numbers: "<<a/b<<"\n" ;
}
int main() {
    cout << "Function to do calculation";
    operation s;
    s.get();
    s.sum();
    s.diff();
    s.multi();
    s.division();
    return 0;
}

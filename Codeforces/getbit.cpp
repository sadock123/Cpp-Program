//getbit,setbit, clearbit
#include <iostream>
using namespace std;
int getbit(int number, int position){
    return ((number & 1<<position)!=0);

}
int setbit(int number, int position){
    return (number | 1<<position);
}
int main(){
    cout << getbit(5,2)<<endl;
    cout << setbit(5,1);
}
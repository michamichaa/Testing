#include <iostream>

using namespace std;

void Ref(int& value) {
    value++;
    
}

int Norm(int value) {
    value++;
    return value;

}


int main(){
    int num {5};
    int val = Norm(num);
    cout << num << endl;
    Ref(num);
    cout << num << endl;

return 0;
}
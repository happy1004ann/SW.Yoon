#include <iostream>
using namespace std;

class Temporary{
    private:
        int num;
    public:
        Temporary(int n) : num(n){
            cout << "create obj: " << num << endl;
        }
        ~Temporary(){
            cout << "destroy obj: " << num << endl;
        }
        void ShowTempInfo(){
            cout << "My num is " << num << endl;
        }
};

int main(void){
    Temporary(100);
    cout << "************* after make!\n\n";

    Temporary(200).ShowTempInfo();
    cout << "************* after make!\n\n";

    const Temporary& ref = Temporary(300);
    cout << "************* end of main!\n\n";
    return 0;
}

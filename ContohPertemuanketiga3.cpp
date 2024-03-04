#include <iostream>
using namespace std;

int main(){
    string status;
    int nBilA, nBilB;
    srand(time(0));

    nBilA = rand() % 10;
    nBilB = rand () % 10;

    cout << "Tampilkan bilangan A = " << nBilA << endl;
    cout << "Tampilkan bilangan B = " << nBilB << endl;
    
    if (nBilA == nBilB){
        status = "nilai A dan nilai B sama besar";
    }
    else if (nBilA > nBilB){
        status = "Bilangan A lebih besar daripada bilangan B";
    }
    else {
        status = "Bilangan B lebih besar daripada bilangan A";
    }
    
    cout << "Tampilkan status =" << status << endl;

    return 0;
    

}
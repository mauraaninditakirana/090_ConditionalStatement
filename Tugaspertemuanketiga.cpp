#include <iostream>
using namespace std;

int main (){
    int nNilMat, nNilFisika;
    double nRerata;
    string status;
    
    cout << "Nilai Matematika =";
    cin >> nNilMat;

    cout << "Nilai Fisika =";
    cin >> nNilFisika;

    nRerata = (nNilMat + nNilFisika)/2;
    
    if (nRerata >= 60){
        status = "Lulus jalur rerata";
    }
    else if (nNilMat >= 70){
        status = "Lulus jalur Matematika";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Status Kelulusan =" << status << endl;

    return 0;

}
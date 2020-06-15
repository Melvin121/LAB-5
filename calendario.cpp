#include "iostream"
bool revisar(int rev);
bool revisar2(int rev2);
using namespace std;

bool revisar2(int rev2){

    int calculo2, rev;

    calculo2 = rev % 4 == 0;

    if( rev % 4 == 0 && rev % 100 > 0){
        return true;
    } else{
        return false;
    }
}

int main() {

    int opcion = 0;
    int rev, an, rev2;

    cout<< endl;
    cout << "REVISANDO ANS " << endl <<  endl;
    
    cout << "Ingrese el an a revisar: "; cin >> an; cout << endl;
    cout << "El an : ";

    if(revisar(rev) == true){
        cout << "segun la prueba 1 si es bisiesto" << endl;

    } 
    else if(revisar(rev) == false){
        cout << "Segun la prueba 1 no es bisiesto" << endl;

    }

    if(revisar2(rev2) == true){
        cout <<"Segun la prueba 2 si es bisiesto" << endl;

    } 
    else if (revisar2(rev2) == false){
        cout <<"Segun la prueba 2 es bisiesto" << endl;

    }

    return(0);

}

bool revisar(int rev){

    int calculo1; 
    
    calculo1 = rev % 100 == 0;

    if( rev % 100 ==0){
        return true;
    } 
    else {
        return false;
    }
}       




   
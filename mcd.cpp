#include "iostream"

using namespace std;

int mcd( int nma, int nme);

int main() {
     
    int nma, nme;
    int opcion = 0;

    cout << "CACLULADOR DE MCD ;)" << endl << endl;

    do 
    {
        cout << "1-----------Calcular mcd" << endl;
        cout << "2-----------Quien creo este metodo?" << endl;
        cout << "3-----------Salir" << endl;
        cin >> opcion;

        switch(opcion){

            case 1: mcd(nma, nme);
            break;
            case 2: cout << "Euclides, fue el líder de un equipo de matemáticos que trabajaba en Alejandria." << endl;
            break;

        }
    } while (opcion != 3);
        cout << "Un gusto ayudarte! :D" << endl << endl;

    return(0);
}

int mcd(int nma, int nme){

    int residuo;

    cout << "Ingrese el numero mayor: "; cin >> nma; cout << endl;
    cout << "Ingrese el numero menor: "; cin >> nme; cout << endl;

    do{
        residuo = nma % nme;

        if(residuo != 0){
             nma = nme;
             nme = nma;

         }
    } while(residuo != 0);
    cout << "El MCD es: " << nme << endl;

    return(nme);
}
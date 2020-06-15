#include <iostream>
using namespace std;
bool anbisiesto(int an)
{
return ((an % 4) == 0 && (an % 100) !=0) || ((an % 400) == 0);
}
int diames(int mes, int an)
{
  int dias = 31;
  if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
  {
    dias = 30;
  }
  else if (mes == 2)
  {
    if (anbisiesto(an))
    {
      dias =29;
    } 
    else
    {
      dias = 28;
    }
  }
  return dias;
}
int main()
{
  int dia, mes, an;
  
  cout << "ingresa el dia: " << endl;
  cin >> dia;
  cout << "ingresa el mes: " << endl;
  cin >> mes;
  cout << "ingresa el an: " << endl;
  cin >> an;
  dia++;
  
  if (dia > diames(mes, an))
  {
    dia = 1;
    mes++;
    if (mes > 12)
    {
      mes = 1;
      an++;
    }
  }
  cout <<"el dia siguiente es: " << dia << "/" << mes << "/" << an << endl;
}

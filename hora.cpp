  
#include <iostream>
using namespace std;
int main()
{
    int hrs,min,segs;
    
	cout <<"Hrs: "<<endl;
    cin >>hrs;
    cout <<"Min: "<<endl;
    cin >>min;
    cout <<"Segs: "<<endl;
    cin >>segs;
  
  
   if(hrs < 24 && min < 60 && segs < 60)
   {
          if(segs < 59 && segs >= 0)
		  {
          		cout<<hrs<<"h "<<min<<"min "<<(segs+1)<<"seg";
          }
		  else
		  {
          if(segs==59)
		  {
                  if(min==59)
				  {
                      if(hrs==23)
					  {
                          cout<<"00h 00m 00s";
                      }
					  else
					  {
                          cout<<(hrs+1)<<"h 00m 00s";
                      }
                  }
				  else
				  {
                      cout<<hrs<<"h "<<(min+1)<<"m 00s";
                  }
              }
          }
     	}
	  else
	    {
          cout<<"Error, ingrese de nuevo los digitos";
	    }

      return 0;
}
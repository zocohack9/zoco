#include <iostream>
using namespace std;

float Pretvori (float);
float TempFar;                 // globalna promenliva

int main ()
{
    float TempCel;            // lokalna promenliva za main ()
    
    cout << "Vnesete ja temperaturata vo Farenhajti: ";
    cin  >> TempFar;
    TempCel = Pretvori (TempFar);
    cout << "\nTemperaturata vo Celziusovi stepeni e: ";
    cout << TempCel << endl;
    return 0;

}

float Pretvori (float TempFar)
{

    float TempC;            // lokalna promenliva koja "zivee" samo vo funkcijava

    TempC = ((TempFar - 32 ) * 5 ) / 9;
                              //  TempFar e globalna promenliva 

return TempC;

}

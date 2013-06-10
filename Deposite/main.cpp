#include <iostream> 
#include <iomanip>  
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
   double amount=0; 
   double principal = 200;
   int dollars=0; 
   int cents=1; 
   double rate = .05; 

   cout << "Год" << setw( 20 ) << "         Сума на депозите\n";

   for ( int year = 1; year <= 10; year++ )
   {
      amount = ( principal * pow( 1.0 + rate, year ) );
      cout<<amount;
	  dollars=amount;
     cents=amount*100;
      cout << setw( 4 ) << year << setw( 20 ) << dollars << "    .     "<<cents%100<<endl;
   }
   double t=10.11;
   int temp=t*100;
   cout<<"TEMP is: ="<<temp%100;

   system("pause");
}

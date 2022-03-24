#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float hitung (float a,float b,float jrk){
	float hasil;
    return jrk =sqrt(a+b);
}

int main()

{
   float y1;
   float a;
   float hasil;
   float jarak;
   float x2;
   float y2;
   float b;
   float x1;
   float hsl;

   cout << "masukkan nilai (x1) =";
   cin >> x1;
   
   cout << "masukkan nilai (y1) =";
   cin >> y1;

   cout << "masukkan nilai (x2) =";
   cin >> x2;
   
   cout << "masukkan nilai (y2) =";
   cin >> y2;
   
   a =(x2-x1)*(x2-x1);
   b =(y2-y1)*(y2-y1);
   jarak =sqrt(a+b);

   cout << "jarak antara 2 titk fungsi adalah = " << hitung(a,b,jarak) << endl;
   return 0;
}

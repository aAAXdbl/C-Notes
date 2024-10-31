#include <iostream>

using namespace std;

//! Değişkenler - Variables ve Sabitler - Constants

int main() {
    
    /***
    *! int = tam sayıları alır. Exam: 2 , 7 , 368 (2 or 4 bytes)
    *! float = ondalıklı sayıları alır. Exam 2.15 , 1.6 , 2.80 (4 bytes)
    *! double = ondalıklı sayıları alır. Exam: 2.15 , 3.14 , 1.66667 (8 bytes)
    *! char = tek karakterli metinsel ifadeleri alır. Exam: 'A' , 'C' , '8' (1 byte)
    *! string = metinsel ifadeleri alır. Exam: "Hello" , "Pass123" (8 bytes)
    *! bool = true veya false değeri alır. Exam: true , false (başka da yok zaten xd) (1 byte)
    */

   /*

   int number = 15; // --> Variables
    |    |       |
    |    |       |--> Value
    |    |--> Identifier
    |--> Data Type
   
   */


   int num = 25;
   cout << num <<endl;

   //Ya da

   int num2;
   num2 = 18;
   cout << num2 <<endl; // OUTPUT = 18
   num2 = 10; // num2 adlı değişkenin 18 değerini 10 ile değiştirdim.
   cout << num2 <<endl; // OUTPUT = 10

   cout << "\n\n";

   //Diğer Türler
   int myNum = 16;
   double myFloatNum = 25;
   char MyLetter = 'Q';
   string myText = "Hello MY Friend!";
   bool myBoolean = true;

   //Değişkenleri  Görüntülemek
   string myName = "GhoST";
   int myAge = 1;
   cout << "Hello! My name is " << myName << " and I am " << myAge << " years old." << endl;

   //Değişkenleri Topla
   int x = 5;
   int y = 24;
   int sum = x + y;
   cout << "Sum = " << sum << endl;

   //Birçok Değişken Bildirmek
   int a = 24, b = 35, c = 12;
   int multiply = a * b * c;
   cout << "Multiply = " << multiply << endl;

   //Birden Fazla Değişkene Tek Bir Değer Bildirmek
   double d,e,f;
   d = e = f = 3.14;
   cout << "d = " << d  << " e = " << e << " f = " << f << endl;

   //Sabitler
   const int number = 8;  // sabitler başta tek bir değer alır ve sonradan değiştirilemez.
   //! number = 23; bu tarz bir durumda program hata verecektir çünkü bir sabiti daha sonradan değiştirmeye çalıştığımız için.
   cout << number << endl;

   //Değişmesi muhtemel olmayan değerlere sahip olduğunuzda değişkeni her zaman sabit olarak bildirmelisiniz.
   const int secondPerMinutes = 60;
   const double PI = 3.14;

   //Sabit bir değişken bildirdiğinizde, ona bir değer atanması gerekir.
   const int minutesPerHour = 60;

   //Fakat alttaki gibi yaparsanız program hata verecektir.
   /***
   *! const int hourPerDay; 
   *! hourPerDay = 24 
   */

   return 0;
}
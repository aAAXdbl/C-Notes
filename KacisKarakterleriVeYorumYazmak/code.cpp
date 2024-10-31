#include <iostream> //input and output

using namespace std;

//! Kaçış Karakterleri ve Yorum Yazmak

int main()
{
    cout << "Escape Sequence (Kaçış Karakterleri)\n"; // Örneğin buradaki ters slash 'n' komutu bir kaçış karakteridir.
    cout << "Hello My Friend!\n";                     // 2 tane slash koyduğumuzda yorum satırı olmuş olur.
    cout << "Hi MY FAMILY!" << "\n";                  // bu şekilde de kullanılabilir.
    cout << "Oh, endl?? Welcome\n"
         << endl; // Ya da bu şekilde sonuna endl manipülatörünü kullanabiliriz.

    cout << "2 + 3 = \t 5" << endl;                                  // ters slash 't' komutu ise bir tab atar.
    cout << "Mario Mazzanti\\İçimdeki Katil" << endl;                // çift ters slash ise bir tane '\' atar.
    cout << "\" Düşünüyorum, Öyleyse Varım. \" - Descartes" << endl; // ters slash '"' ise tırnak atar.

    return 0;

    // Yorum satırlarını program kod olarak okumaz. yazılımcılar kendileri için kullanır koda herhangi bir etkisi yoktur.

    /***
    *! Bu da çok satırlı yorum yapmamızı sağlar. ters slash '*' ile açılıp
    *! '*' ters slash ile kapatılır. Bu şekilde kodunuzu daha okunabilir ve anlaşılır kılarsınız.
    */
}
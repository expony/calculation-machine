#include <iostream>
using namespace std;

int main()
{
    
    double sayi1, sayi2;
    char islem;
    double sonuc;

    while (true) {
        

        cout << "islem seciniz: +, -, /, * , (cikmak icin e yazabilirsiniz.)" << endl;
        cin >> islem;

        if (islem == 'e') {
            break;
        }
        cout << "1. sayiyi girin: ";
        cin >> sayi1;
        cout << "2. sayiyi giriniz: ";
        cin >> sayi2;


        switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            cout << "sayilarin toplami : " << sonuc << endl;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            cout << "sayilarin farki : " << sonuc << endl;
            break;
        case '/':
            if (sayi2 == 0) {
                cout << "payda 0 olursa sonsuz olur!" << endl;
            }
            else
            {
                sonuc = sayi1 / sayi2;
                cout << "sayilarin bolumu: " << sonuc << endl;
            }
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            cout << "sayilarin carpimi: " << sonuc << endl;
            break;
        default:
            cout << "Gecersiz islem operatoru !";
        }
    }
    return 0;
}


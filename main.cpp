#include <iostream>
using namespace std;


void ToplamaIslemi(double sayi1 , double sayi2) {
    double sonuc;
    sonuc = sayi1 + sayi2;
    cout << "sayilarin toplami : " << sonuc << endl;
}
void CikarmaIslemi(double sayi1, double sayi2) {
    double sonuc;
    sonuc = sayi1 - sayi2;
    cout << "sayilarin farki : " << sonuc << endl;
}
void BolmeIslemi(double sayi1, double sayi2) {
    double sonuc;
    if (sayi2 == 0) {
        cout << "payda 0 olursa sonsuz olur!" << endl;
    }
    else
    {
        sonuc = sayi1 / sayi2;
        cout << "sayilarin bolumu: " << sonuc << endl;
    }
}
void CarpmaIslemi(double sayi1, double sayi2) {
    double sonuc;
    sonuc = sayi1 * sayi2;
    cout << "sayilarin carpimi: " << sonuc << endl;
}

int main()
{
    double sayi1, sayi2;
    char islem;
   
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
            ToplamaIslemi(sayi1,sayi2);
            break;
        case '-':
            CikarmaIslemi(sayi1, sayi2);
            break;
        case '/':
            BolmeIslemi(sayi1, sayi2);
            break;
        case '*':
            CarpmaIslemi(sayi1, sayi2);
            break;
        default:
            cout << "Gecersiz islem operatoru !" << endl;
        }
    }
    return 0;
}


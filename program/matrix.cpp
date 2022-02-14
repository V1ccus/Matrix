#include <iostream>
using namespace std;
/*
 * Hosea Nicolas ANPP | 672021159
*/

int main() {
    //...
    int v = 2, x, y;
    int a[v][v], b[v][v];
    int hasil[v][v];
    char pil;
        //...
        cout
        << "=== [ PROGRAM MATRIX | 2 ORDO ] ===\n"
        << "\n";
            //...
            cout << "( MATRIX A )\n";
            for(x=0; x<v; x++){
                for(y=0; y<v; y++){
                    cout << "Masukan elemen ["<<x<<","<<y<<"] : ";cin>>a[y][x];
                }
            }
            cout
                << "...\n"
                << "( MATRIX B )\n";
            for(x=0; x<v; x++){
                for(y=0; y<v; y++){
                    cout << "Masukan elemen ["<<x<<","<<y<<"] : ";cin>>b[y][x];
                }
            }
        //...
        do{
        system("cls");
        cout
            << "-- [  T A M P I L A N  ] --\n\n"
            << "MATRIX A : \n";
                for (x = 0; x < v; x++) {
                    for (y = 0; y < v; y++) {
                        cout << a[y][x] << "\t";
                    }cout << "\n";
                }
        cout
            << "MATRIX B : \n";
            for (x = 0; x < v; x++) {
                for (y = 0; y < v; y++) {
                    cout << b[y][x] << "\t";
                }cout << "\n";
            }
            //...
            cout
                << "\n- - - - - - - - - - - - - -\n\n"
                << "List Matrix's Process \n"
                << "...\n"
                << "(a) Bilangan Ganjil\n"
                << "(b) Bilangan Genap\n"
                << "(c) Hasil Penjumlahan ( A + B )\n"
                << "(d) Hasil Penguranagan ( A + B )\n"
                << "(e) Exit\n\n"
                << "Pilihan ( char ) : "; cin>>pil;
                //...
                switch(pil) {
                    case 'a' :
                        system("cls");
                        cout << "Bilangan ganjil Matriks A : \n";
                        for (x = 0; x < v; x++) {
                            for (y = 0; y < v; y++) {
                                if (a[y][x] % 2 != 0) {
                                    cout << a[y][x] << "\t";
                                }
                            }
                            cout << "\n";
                        }
                        cout << "Bilangan ganjil Matriks B : \n";
                        for (x = 0; x < v; x++) {
                            for (y = 0; y < v; y++) {
                                if (a[y][x] % 2 != 0) {
                                    cout << b[y][x] << "\t";
                                }
                            }
                            cout << "\n";
                        }
                        system("pause");
                        break;
                    case 'b' :
                        system("cls");
                        cout << "Bilangan genap Matriks A : \n";
                        for (x = 0; x < v; x++) {
                            for (y = 0; y < v; y++) {
                                if (a[y][x] % 2 == 0) {
                                    cout << a[y][x] << "\t";
                                }
                            }
                            cout << "\n";
                        }
                        cout << "Bilangan genap Matriks B : \n";
                        for (x = 0; x < v; x++) {
                            for (y = 0; y < v; y++) {
                                if (a[y][x] % 2 == 0) {
                                    cout << b[y][x] << "\t";
                                }
                            }
                            cout << "\n";
                        }
                        system("pause");
                        break;
                    case 'c' :
                        system("cls");
                        cout
                                << "Hasil Penjumlahan ( Matriks A + Matriks B )\n"
                                << "...\n";
                        for (x = 0; x < v; x++) {
                            for (y = 0; y < v; y++) {
                                hasil[y][x] = a[y][x] + b[y][x];
                                cout << hasil[y][x] << "\t";
                            }
                            cout << "\n";
                        }
                        system("pause");
                        break;
                    case 'd' :
                        system("cls");
                        cout
                                << "Hasil Pengurangan ( Matriks A - Matriks B )\n"
                                << "...\n";
                        for (x = 0; x < v; x++) {
                            for (y = 0; y < v; y++) {
                                hasil[y][x] = a[y][x] - b[y][x];
                                cout << hasil[y][x] << "\t";
                            }
                            cout << "\n";
                        }
                        system("pause");
                        break;
                    case 'e':
                        exit(0);
                    default :
                        system("cls");
                        cout << "[ ERROR ] : Unknown command\n";
                        system("pause");
                        break;
                }
        }while(pil!=0);
}
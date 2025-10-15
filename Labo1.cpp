// Labo1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    printf("1   Janiak   KJ\n");  //zad.1
    printf("2   KJ       KJ\n");
    printf("3   KJ       KJ\n");
    printf("4   KJ       KJ\n");
    printf("5   KJ       KJ\n");
    printf("6   KJ       KJ\n");

    cout << endl;

    cout << "1   Janiak   KJ" << endl;
    cout << "2   KJ       KJ" << endl;
    cout << "3   KJ       KJ" << endl;
    cout << "4   KJ       KJ" << endl;
    cout << "5   KJ       KJ" << endl;
    cout << "6   KJ       KJ" << endl;

    cout << endl;

    printf("        *          \n");   //zad.2
    printf("     *     *       \n");
    printf("   *         *     \n");
    printf("   ****   ****     \n");
    printf("       *  *        \n");
    printf("     *      *       \n");
    printf("    *   *    *      \n");
    printf("     *      *        \n");

    cout << endl;

    cout << "        *          " << endl;
    cout << "     *     *       " << endl;
    cout << "   *         *     " << endl;
    cout << "   ****   ****     " << endl;
    cout << "       *  *        " << endl;
    cout << "     *      *      " << endl;
    cout << "    *   *    *     " << endl;
    cout << "     *      *      " << endl;

    cout << endl;


    printf("--------------------------------------\n");   //zad.3
    printf("           Lista obecnosci            \n");
    printf("--------------------------------------\n");
    printf("| nr |   imie   |   nazwisko         |\n");
    printf("|----|----------|--------------------|\n");
    printf("|  1 | Kinga    | Janiak             |\n");
    printf("|  2 | Adam     | Wojtys             |\n");
    printf("|  3 | Amelia   | Wyborna            |\n");
    printf("--------------------------------------\n");

    cout << endl;

    cout << "--------------------------------------" << endl;
    cout << "           Lista obecnosci            " << endl;
    cout << "--------------------------------------" << endl;
    cout << "| nr |   imie   |   nazwisko         |" << endl;
    cout << "|----|----------|--------------------|" << endl;
    cout << "|  1 | Kinga    | Janiak             |" << endl;
    cout << "|  2 | Adam     | Wojtys             |" << endl;
    cout << "|  3 | Amelia   | Wyborna            |" << endl;
    cout << "--------------------------------------" << endl;

    cout << endl;
                                           //Zad.4
    int a, b;                              // w punkcie b zmiana int na float
     
    cout << "Podaj wartosc a" << endl;
    cin >> a;

    cout << "Podaj wartosc b" << endl;
    cin >> b;

    cout << "Wynik dodawania to " << a + b << endl;
    cout << "Wynik mnozenia to " << a * b << endl;

    int A, B, suma, c;                 // w punkcie b zmiana z int na float

    printf("Podaj wartosc A \n");
    scanf_s(" %d", &A);                // zmiana z %d na %f za kazdym razem

    printf("Podaj wartosc B \n");
    scanf_s(" %d", &B);

    suma = A + B;
    printf("Wynik dodawania to ");
    printf(" %d\n", suma);

    c = A * B;
    printf("Wynik mnozenia to ");
    printf(" %d\n", c);



    int f, s;                       // Zad.5

    printf("podaj temperature w stopniach Fahrenheita \n"); // cout <<"podaj temperature w stopniach Fahrenheita" << endl;
    scanf_s(" %d", &f); //cin >> f;

    s = 5 * (f - 32) / 9;

    printf(" %d stopni Fahrenheita to ", f);    // cout << f << "stopni Fahrenheita to " << s << endl;
    printf(" %d stopni Celsjusza \n", s);

    return 0;

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

// Multiple Dementions Kadane Algorithm.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <cstdio>
#include "subroutines.h"

int main() {
    int sizex = 0;
    int sizey = 0;
    int sizez = 0;
    int sizew = 0;
    int sizeq = 0;
    int sizeg = 0;

    int dimention = 0;

    int* array1d;
    int** array2d;
    int*** array3d;
    int**** array4d;
    int***** array5d;
    int****** array6d;

    int result = 0;

    scanf("%i", &dimention);

    switch (dimention) {
        case 6:
            scanf("%i", &sizeg);
        case 5:
            scanf("%i", &sizeq);
        case 4:
            scanf("%i", &sizew);
        case 3:
            scanf("%i", &sizez);
        case 2:
            scanf("%i", &sizey);
        case 1:
            scanf("%i", &sizex);
    }

    switch (dimention) {
        case 1:
            array1d = Array1d(sizex);
            result = Kadane1d(array1d, sizex);
            break;
        case 2:
            array2d = Array2d(sizex, sizey);
            result = Kadane2d(array2d, sizex, sizey);
            break;
        case 3:
            array3d = Array3d(sizex, sizey, sizez);
            result = Kadane3d(array3d, sizex, sizey, sizez);
            break;
        case 4:
            array4d = Array4d(sizex, sizey, sizez, sizew);
            result = Kadane4d(array4d, sizex, sizey, sizez, sizew);
            break;
        case 5:
            array5d = Array5d(sizex, sizey, sizez, sizew, sizeq);
            result = Kadane5d(array5d, sizex, sizey, sizez, sizew, sizeq);
            break;
        case 6:
            array6d = Array6d(sizex, sizey, sizez, sizew, sizeq, sizeg);
            result = Kadane6d(array6d, sizex, sizey, sizez, sizew, sizeq, sizeq);
    }

    printf("%i", result);
    
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

// Multiple Dementions Kadane Algorithm.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <stdio.h>
#include <stdlib.h>
#include "subroutines.h"

int main() {
    int result = 0;
    int dimention = 0;
    int* size = NULL;
    int* array = NULL;
    int i = 0;

    scanf("%i", &dimention);

    size = (int*)malloc(sizeof(int) * dimention);

    i = dimention;
    while (i > 0) {
        i -= 1;

        scanf("%i", size + i);
    }

    array = Array(size, dimention);
    result = Kadane(array, size, dimention);

    printf("%i", result);

    free(size);
    free(array);

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

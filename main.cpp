/*
1. Zmienne, komunikacja z u¿ytkownikiem. Instrukcje warunkowe
Uwaga! Nale¿y pamiêtaæ o dodaniu odpowiednich nag³ówków do funkcji. Dla std::cin i std::cout jest to <iostream>, a dla printf i scanf jest
to <stdio.h> lub <cstdio.h>

1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.

1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d

1.3. Pobraæ od u¿ytkownika liczbê x. Wyœwietliæ kwadrat liczby x.

1.4. Zapoznaæ siê z instrukcjami warunkowymi (if, else if, else oraz switch). Pobraæ od u¿ywkownika liczbê i wyœwietliæ informacjê, czy jest
ona: mniejsza, wiêksza, czy równa 0.

1.5. Pobraæ od u¿ytkownika 3 liczby (x1, x2, x3). Wyœwietliæ informacjê, która z tych liczb jest najwiêksza.

1.6. Napisaæ prosty kalkulator. Nale¿y pobraæ od u¿ytkownika 2 liczby oraz operator (jeden z czterech: mno¿enie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu u¿ytkownika. Uwaga - nale¿y pamiêtaæ o u³amkach (1/3 powinno daæ 0.33, a nie 0) */


//zadanie1.1

/*#include <stdlib.h>
#include <stdio.h>
#include <ctime>

using namespace std;

int main()
{
    int x;
    char y;
    float z;
	x = 128548;
	y ='abcdefghijk';
	z = 3011.2018;
	printf("Zadanie 1.1 \n%d\n", x);
	printf("%c\n", y);
	printf("%0.2f\n", z);

	return 0;
	system("pause");
}


//zadanie 1.2

/*#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;
int main()
{
    int x = 5;
	printf("Zadanie 1.2 \n%d\n", x);

	return 0;
	system("pause");
}





//1.3

/*#include <stdlib.h>
#include <stdio.h>
#include <ctime>
int main()
{
	FILE*temp;
	int m, n;
    int i, l;

    printf("Podaj wymiary tablicy\n");
    scanf("%d %d", &m, &n);
    int random[m][n];
    srand(time(NULL));
    for(l = 0; l<m; l++)
        for(i = 0; i<n; i++)
            random[l][i] = rand() % 10;

    temp=fopen("temp.txt","w");
    fprintf(temp, "%d %d\n", m, n);
    int j, k;
    for(k=0; k<m; k++){
        for(j=0; j<n; j++){
            printf("%d ", random[k][j]);
            fprintf(temp,"%d ", random[k][j]);
        }
        printf("\n");
        fprintf(temp,"\n");
    }
    fclose(temp);

    return 0;
}





//1.4

/*#include <iostream>


using namespace std;

int liczba;

int main()

{
    cout << "Podaj liczbe:";
    cin >> liczba;

    if (liczba>0)
        {
        cout<< "\nTwoja liczba jest wieksza od zera.";
        }
    if (liczba<0)
        {
        cout<< "\nTwoja liczba jest mniejsza od zera.";
        }
    if (liczba==0)
        {
        cout<< "\nTwoja liczba jest rowna zero.";
        }

    cout << "\n\n\n";


    return(0);
}




//ad 1.5

/*#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int a, b, c;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Podaj trzecia liczbe: ";
    cin >> c;
    cout << "\n";

    cout << "Najwieksza liczba to: ";

    if(a > b && a > c) cout << a;
    if(b > a && b > c) cout << b;
    if(c > a && c > b) cout << c;

    cout << "\n\n";

    system("pause");

    return (0);
}





// Ad 1.6

/*#include <iostream>
#include <stdio.h>

using namespace std;

string dodaj, odejmij, pomnoz, podziel, c;
float a, b, wynik, koniec;

int main()
{
	cout << "Podaj 1 liczbe: ";
	cin >> a;

	cout << "Podaj 2 liczbe: ";
	cin >> b;

	cout << "Wybierz co chcesz zrobic z liczbami (dodaj=1, odejmij=2, pomnoz=3, podziel=4): ";
	cin >> c;

	if (c == "1")
	{
		wynik = a + b;
		cout << "Suma to: " << wynik;
	}

	if (c == "2")
	{
		wynik = a - b;
		cout << "Roznica to: " << wynik;
	}

	if (c == "3")
	{
		wynik = a * b;
		cout << "Mnozenie to: " << wynik;
	}

	if (c == "4")
	{
		wynik = a / b;
		cout << "Dzielenie to: " << wynik;
	}
	if ((c != "1") && (c != "2") && (c != "3") && (c != "4"))
	{
		cout << "Zle dzialanie!";
	}

	return (0) ;
}

*/

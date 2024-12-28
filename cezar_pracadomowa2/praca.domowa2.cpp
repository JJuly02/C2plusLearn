#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

//szyfrowanie pojedynczego znaku
char encryptCharacter(char c, int shift)
{
    if (isalpha(c))
    {
        if (islower(c))
        {
            c = ((c - 'a' + shift) % 26) + 'a';
        }
        else
        {
            c = ((c - 'A' + shift) % 26) + 'A';
        }
    }
    return c;
}

// szyfrowanie tekstu z wyłączeniem niektorych znakow
string encryptText(const string& text, int shift)
{
    // tworzenie pustego stringa przechuwujacego zaszyfrowany tekst
    string encryptedText;
    for (char c : text)
    {
        // ignorowanie znakow specjalnych, kropek, przecinkow, myslnikow i enterow
        if (c == '.' || c == ',' || c == ' ' || c == '\n' || c == '-')
        {
            encryptedText += c;
            continue;
        }
        // jesli sa to literki a-z i A-Z to wykonywana jest zamiana
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (isalpha(c) && !isalpha(encryptCharacter(c, shift)))
            {
                encryptedText += encryptCharacter(tolower(c), shift);
            }
            else
            {
                encryptedText += encryptCharacter(c, shift);
            }
        }
        else
        {
            encryptedText += c;
        }
    }
    return encryptedText;
}

int main()
{
    //otwieranie pliku
    ifstream plikWejsciowy("KSIAZKA1.TXT");
    if (!plikWejsciowy)
    {
        cerr << "Nie można otworzyć pliku" << endl;
        return 1;
    }

    //zapisywanie tekstu w zmiennej
    string oryginalnyTekst;
    string linia;
    while (getline(plikWejsciowy, linia))
    {
        oryginalnyTekst += linia + "\n";
    }

    plikWejsciowy.close();

    //podawanie przesuniecia
    int shift;
    cout << "Podaj przesuniecie: ";
    cin >> shift;

    //zmiana tekstu za pomoca funkcji
    string zaszyfrowanyTekst = encryptText(oryginalnyTekst, shift);

    //zapisywanie pliku
    ofstream plikWyjsciowy("KSIAZKA2.TXT");

    //jesli plik nie moze zostac zapisany wyswietla sie komunikat
    if (!plikWyjsciowy)
    {
        cerr << "Nie można utworzyc pliku KSIAZKA2.TXT." << endl;
        return 1;
    }

    // zapisywanie tekstu do pliku
    plikWyjsciowy << zaszyfrowanyTekst;

    //zamykanie pliku
    plikWyjsciowy.close();
    cout << "Zaszyfrowany tekst został zapisany do pliku KSIAZKA2.TXT." << endl;

    return 0;
}
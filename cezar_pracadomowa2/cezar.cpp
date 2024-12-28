#include <iostream>
#include <cctype>

using namespace std;

char encryptCharacter(char c, int shift)
{
    if (isalpha(c))
    {
        if (islower(c))
        {
            c = ((c - 'a' + shift) % 26) + 'a';
        } else
        {
            c = ((c - 'A' + shift) % 26) + 'A';
        }
    }
    return c;
}

string encryptText(const string& text, int shift)
{
    string encryptedText;
    for (char c : text)
    {
        if (c == '.' || c == ',' || c == ' ' || c == '\n')
        {
            encryptedText += c;
            continue;
        }
        if (isalpha(c) && !isalpha(encryptCharacter(c, shift)))
        {
            encryptedText += encryptCharacter(tolower(c), shift);
        } else
        {
            encryptedText += encryptCharacter(c, shift);
        }
    }
    return encryptedText;
}

int main() {
    string text;
    int shift;

    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, text);

    cout << "Podaj liczbę przesunięcia: ";
    cin >> shift;

    string encryptedText = encryptText(text, shift);
    cout << "Zaszyfrowany tekst: " << encryptedText << endl;

    return 0;
}


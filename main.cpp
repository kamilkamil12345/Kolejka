#include <iostream>
#include <queue>
using namespace std;

class QueueSimulation
{
private:
    queue<int> kolejka;

public:
    void dodajElement(int value)
    {
        kolejka.push(value);
        cout << "Dodano " << value << " do kolejki." << endl;
    }

    void usunElement()
    {
        if (!kolejka.empty()) {
            cout << "Usunieto " << kolejka.front() << " z kolejki." << endl;
            kolejka.pop();
        } else {
            cout << "Kolejka jest pusta. Nie mozna usunac elementu." << endl;
        }
    }

    void wyswietlKolejke()
    {
        if (!kolejka.empty())
            {
            cout << "Zawartosc kolejki: ";
            queue<int> temp = kolejka;
            while (!temp.empty())
            {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << std::endl;
        } else {
            cout << "Kolejka jest pusta." << std::endl;
        }
    }
};

int main()
{
    QueueSimulation kolejkaSymulacja;
    char choice;

    do {
         cout   << "Menu:" << endl;
         cout   << "1. Dodaj element do kolejki" << endl;
         cout   << "2. Usun element z kolejki" << endl;
         cout   << "3. Wyswietl kolejke" << endl;
         cout   << "0. Zakoncz program" << endl;
         cout   << "Wybierz opcje: "<< endl;
         cin >> choice;

        switch (choice)
        {
            case '1':
            {
                int value;
                cout << "Podaj wartosc do dodania do kolejki: ";
                cin >> value;
                kolejkaSymulacja.dodajElement(value);
                break;
            }
            case '2':
                kolejkaSymulacja.usunElement();
                break;
            case '3':
                kolejkaSymulacja.wyswietlKolejke();
                break;
            case '0':
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Niepoprawna opcja. Sprobuj jeszcze raz." << endl;
        }
    } while (choice != '0');

    return 0;
}

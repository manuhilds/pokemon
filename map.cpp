#include <iostream>
#include "getch.h"
#include <string>

using namespace std;

string Perso = ".";
class map
{
private:
    int hauteur = 0;
    int largeur = 0;
    char tab[50][50];

public:
    map(int h, int l);
    void afficher();
};

map::map(int h, int l)
{
    hauteur = h;
    largeur = l;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            tab[i][j] = '-';
        }
    }

    for (int i = 0; i < h; i++)
    {
        cout << endl;
        for (int j = 0; j < l; j++)
        {
            cout << tab[i][j] << ' ';   
        }
    }
    cout << endl;
}

void map::afficher()
{
}

class Personne
{
private:
    int Pos_X = 0;
    int Pos_Y = 0;
    const char Pers = 'X';
    friend map;

public:
    Personne(int x, int y) : Pos_X(x), Pos_Y(y) {}
    void move(map m, int x, int y);
};

void Personne::move(map m, int x, int y)
{
}
int main(int argc, char const *argv[])
{
    map you(50, 50);

    return 0;
}

#include <iostream>
#include "getch.h"
#include <string>

using namespace std;

class map
{
private:
    int hauteur = 0;
    int largeur = 0;
    string tab[50][50];
friend class Personne;
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
            tab[i][j] = "\u001b[48;5;46m-";
        }
    }

    for (int i = 0; i < h; i++)
    {
        cout <<"\u001b[0m"<< endl;
        for (int j = 0; j < l; j++)
        {
            cout <<tab[i][j] << ' ';
        }
    }
    cout <<"\u001b[0m"<<endl<<endl; 
}

void map::afficher()
{
}

class Personne
{
private:
    int Pos_X = 0;
    int Pos_Y = 0;
   // const char Pers = '\u001b[48;5;0m'+'X';


public:
    Personne(int x, int y) : Pos_X(x), Pos_Y(y) {}
    void move(map m, int x, int y);
};

void Personne::move(map m, int x, int y)
{
   // m.tab[x,y] = Pers;
}
int main(int argc, char const *argv[])
{

    map you(50, 50);
    if (argc)
    {
        cout << argv[1] << endl;
    }

    return 0;
}

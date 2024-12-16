

#include "carre.h"

void CCarre::Setsx(int sx1) 
{
    this->sx = sx1;
}

void CCarre::Setsy(int sy1) 
{
    this->sy = sy1;
}

void CCarre::Setcote(int cote1)
{
    this->cote = cote1;
}

void CCarre::Afficher()
{
    cout << "Les x c'est :" << sx <<endl;
    cout << "Les y c'est :" << sy << endl;
    cout << "Les cote c'est :" << cote << endl;
}
int CCarre::Getsx() 
{
    return sx;
}

int CCarre::Getsy()
{
    return sy;
}

int CCarre::GetCote()
{
    return cote;
}


// "Déplace" le carré sans le dessiner. Les attributs x et y  
    // sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entrées : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de déplacement du carré 
    // Sortie : Aucune 
void CCarre::Deplacer(char direction, int saut)
{
    ///double n, s, o, e;
    int direc;
    switch (direction)
    {
    case 'n':
        cout << "Avance au nord de :" << endl;
        sx += -saut;
        break;
    case 's':
        cout << "Avance au sud de :" << endl;
        sx += saut;
        break;
    case 'o':
        cout << "Avance a ouest de :" << endl;
        sy += saut;
        break;
    case 'e':
        cout << "Avance a est de :" << endl;
        sy += -saut;
        break;
    }

/*
    if (direction = 'n')
    {
        cout << "Avance au nord de :" << endl;
        sx += - saut;
    }
    if (direction = 's')
    {
        cout << "Avance au sud de :" << endl;
        sx += saut;
    }
    if (direction = 'o')
    {
        cout << "Avance a ouest de :" << endl;
        sy += saut;
    }
    if (direction = 'e')
    {
        cout << "Avance a est de :" << endl;
        sy += - saut;
    }

  */  
}
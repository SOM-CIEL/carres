

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
    cout << "Les x c'est :" << sx;
    cout << "Les y c'est :" << sy;
    cout << "Les cote c'est :" << cote;
}




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
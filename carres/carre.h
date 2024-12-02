#pragma once

#include <iostream>
using namespace std;
#include "carre.h"

class CCarre
{
public:
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(int cote1);
    void Afficher();
private:
    double sx, sy, cote;
};


#include <stdio.h>
#include <string.h>

class vehiculos
{
private:
    /* data */
public:
struct general
{
    int velocidad, capacidad_pasajeros;
    char color[15];
    char nombre[15];
    char frenos[15];
    char manejo[15];

};
};

vehiculos::vehiculos(/* args */)
{
}

vehiculos::~vehiculos()
{
}

class terrestre : public vehiculos
{
private:
    
public:
struct tierra
{
    int llantas, espejos, ventanas;
    char combustible[15];

};

};

terrestre::terrestre(/* args */)
{
}

terrestre::~terrestre()
{
}

class aereos : public vehiculos
{
private:
    /* data */
public:
    struct aire
    {
        int turbinas, elices, ventanas, pilotos;
    };
    
};

aereos::aereos(/* args */)
{
}

aereos::~aereos()
{
}

class maritimos : public vehiculos
{
private:
    /* data */
public:
    struct mar
    {
        int helices, anclas, chimenea, ventanas;
    };
    
};

maritimos::maritimos(/* args */)
{
}

maritimos::~maritimos()
{
}




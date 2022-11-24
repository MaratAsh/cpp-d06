//
// Created by Altagracia Cierra on 11/24/22.
//

#include <iostream>

typedef struct
{
    int x;
    float y;
    char z;
} Data;

uintptr_t serialize(Data * ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main ()
{
    Data * a = new Data();
    Data * b;
    uintptr_t raw;

    a->x = 0;
    a->y = 3.23;
    a->z = 'k';
    raw = serialize(a);

    std::cout << "address data A:\t\t" << a << std::endl;
    std::cout << "a: " << a->x << "\t" << a->y << "\t" << a->z << std::endl;
    std::cout << "raw: " << raw << std::endl;
    std::cout << "address serialize a:\t" << &raw  << std::endl;
    b = deserialize(raw);
    std::cout << "address deserialize raw:\t" << b  << std::endl;
    std::cout << "b: " << b->x  << "\t" << b->y << "\t" << b->z << std::endl;

    delete a;
    return 0;
}

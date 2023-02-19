#include <iostream>
#include "src/estudiante.cpp"

#define PI 3.1416

int main() {

    Estudiante obj1("Juan", "Perez", 100, 80, 100, 80, 100);
    Estudiante obj2("Jonathan", "Camposeco", 90, 90, 80, 80, 100);
    Estudiante obj3("Ian", "Castro", 100, 100, 90, 100, 100);
    Estudiante obj4("Ernesto", "Velez", 100, 80, 100, 90, 100);
    Estudiante obj5("Marco", "Casas", 100, 90, 100, 80, 100);
    obj1.get_informacion();
    obj2.get_informacion();
    obj3.get_informacion();
    obj4.get_informacion();
    obj5.get_informacion();

    float promedio_grupal = (obj1.get_promedio() + obj2.get_promedio() + obj3.get_promedio() + obj4.get_promedio() + obj5.get_promedio()) / 5;
    std::cout<<"\n\nPromedio del salón: ";
    printf("%.2f", promedio_grupal);

    return 0;
}
#include <iostream>
#include "estudiante.hpp"

Estudiante::Estudiante(std::string n, std::string a, int c1, int c2, int c3, int c4, int c5) {
    nombre = n;
    apellido = a;
    calificacion_matematicas = c1;
    calificacion_espanol = c2;
    calificacion_historia = c3;
    calificacion_biologia = c4;
    calificacion_geografia = c5;
    promedio = (calificacion_matematicas + calificacion_espanol + calificacion_historia + calificacion_biologia + calificacion_geografia) / 5;
};

std::string Estudiante::get_nombre() {
    return nombre;
};

std::string Estudiante::get_apellido() {
    return apellido;
};

float Estudiante::get_promedio() {
    return promedio;
}

void Estudiante::get_informacion() {
    
    std::string nombre_completo = nombre + " " + apellido;
    std::cout<<"\n\n" + nombre_completo;
    std::cout<<"\nMatemáticas: "; printf("%d", calificacion_matematicas);
    std::cout<<"\nEspañol: "; printf("%d", calificacion_espanol);
    std::cout<<"\nHistoria: "; printf("%d", calificacion_historia);
    std::cout<<"\nBiología: "; printf("%d", calificacion_biologia);
    std::cout<<"\nGeografía: "; printf("%d", calificacion_geografia);
    std::cout<<"\nPromedio: "; printf("%.2f", get_promedio());
};
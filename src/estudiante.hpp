#pragma once
#include<string>

class Estudiante {
    
    public:
        Estudiante(std::string n, std::string a, int c1, int c2, int c3, int c4, int c5);
        std::string get_nombre();
        std::string get_apellido();
        float get_promedio();
        void get_informacion();
    private: 
        std::string nombre;
        std::string apellido;
        int calificacion_matematicas;
        int calificacion_espanol;
        int calificacion_historia;
        int calificacion_biologia;
        int calificacion_geografia;
        float promedio;
};
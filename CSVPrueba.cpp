
#include "CSVPrueba.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    std::ifstream archivo("citas.csv");
    if (!archivo) {
        std::cout << "Error al abrir el archivo de citas." << std::endl;
    }
    std::string linea;
    while (std::getline(archivo, linea)) {
        std::cout << "Linea: " << linea << std::endl;
    }


    return 0;
}
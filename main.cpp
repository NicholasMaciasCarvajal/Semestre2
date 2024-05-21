#include <iostream>
#include <fstream>
#include <string>

std::string linea;
std::string texto;

int main() {
    std::ifstream archivo("documento.txt");

    while (getline(archivo,linea)){
        texto = texto + linea + "\n";
    }

    archivo.close();

    std::cout << texto << std::endl;

    std::ofstream archivo2("documento.txt");
    archivo2 << texto << "Nueva linea de texto";

    system("pause");

    return 0;

}

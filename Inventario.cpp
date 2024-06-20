#include "Inventario.h"
#include <algorithm>

Inventario::Inventario(){
}

Inventario::~Inventario() {
}

void Inventario::agregarItem(const std::string& item) {
    inventario.push_back(item);
    std::cout << "Se agrego el item " << item << std::endl;
}

void Inventario::eliminarItem(const std::string& item) {
    auto it = std::find(inventario.begin(), inventario.end(), item);
    if (it != inventario.end()){
        inventario.erase(it);
        std::cout << "Se elimino " << item << std::endl;
    } else {
        std::cout << "No esta " << item << std::endl;
    }
}

void Inventario::mostrarItems() {
    for (const std::string& item : inventario){
        std::cout << "-" << item << std::endl;
    }
}

void Inventario::usarItem(const std::string item) {
    std::cout << "Se uso el Item: " << item << std::endl;
}

std::string Inventario::getItt() const {
    return itt;
}
void Inventario::setItt(std::string itt) {
    this -> itt = itt;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void Inventario::anadirObjeto(std::unique_ptr<Item> item) {
    objetos.push_back(std::move(item));
}
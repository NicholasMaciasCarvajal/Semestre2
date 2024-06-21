#include "Inventario.h"
#include "Item.h"
#include <algorithm>

Inventario::Inventario() {
}

Inventario::~Inventario() {
}

void Inventario::agregarItem(const Item& item) {
    inventario.push_back(item);
    std::cout << "Se agregó el item: " << item << std::endl;
}

void Inventario::eliminarItem(const Item& item) {
    auto it = std::find(inventario.begin(), inventario.end(), item);
    if (it != inventario.end()) {
        inventario.erase(it);
        std::cout << "Se eliminó el item: " << item << std::endl;
    } else {
        std::cout << "No está el item: " << item << std::endl;
    }
}

void Inventario::mostrarItems() {
    for (const Item& item : inventario) {
        std::cout << "- " << item << std::endl;
    }
}

void Inventario::usarItem(const std::string item) {
    std::cout << "Se usó el Item: " << item << std::endl;
}

std::string Inventario::getItt() const {
    return itt;
}

void Inventario::setItt(std::string itt) {
    this->itt = itt;
}

void Inventario::anadirObjeto(std::unique_ptr<Item> item) {
    objetos.push_back(std::move(item));
}

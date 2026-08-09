#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    float precio;
};

int main()
{
    vector<Producto> inventario;

    Producto p1;
    p1.nombre = "Cuaderno";
    p1.precio = 45.5;
    inventario.push_back(p1);

    Producto p2;
    p2.nombre = "Lapiz";
    p2.precio = 10.3;
    inventario.push_back(p2);

    Producto p3;
    p3.nombre = "Borrador";
    p3.precio = 5.4;
    inventario.push_back(p3);

    Producto p4;
    p4.nombre = "Mochila";
    p4.precio = 450.64;
    inventario.push_back(p4);

    cout << "Inventario Original." << endl;
    for (Producto p : inventario) {
        cout << "Producto: " << p.nombre << " - Precio: " << p.precio << endl;
    }

    int indiceaModificar = 1;
    inventario[indiceaModificar].precio = 7.8;

    cout << "\nInventario luego de modificar un precio" << endl;
    for (Producto p : inventario) {
        cout << "Producto: " << p.nombre << " - Precio: " << p.precio << endl;
    }

    float suma = 0.0;
    for (Producto p : inventario) {
        suma += p.precio;
    }
    float promedio = suma / inventario.size();

    cout << "\nEl precio promedio del inventari es: " << promedio;

    int posicion = 2;
    cout << "\nAcceso seguro con at() a la posicion " << posicion << ":" << endl;
    cout << "Producto: " << inventario.at(posicion).nombre << " - Precio: " << inventario.at(posicion).precio << endl;
}

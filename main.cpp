// SECCION:B
// AARON PIÑA 31026016
// MARIA GIMENEZ 31272155
// SEBASTIAN ARIAS 31558607
#include <iostream>
#include <string>

using namespace std;

// Estructura para representar un cliente
struct Cliente {
    string razonSocial;
    string cedulaRif;
    int cantidadRefrescoDetal;
    int cantidadRefrescoMayor;
    int cantidadMaltaDetal;
    int cantidadMaltaMayor;
};

// Función para calcular el monto a pagar por cada cliente
float calcularMontoAPagar(Cliente cliente) {
    float montoRefrescoDetal = cliente.cantidadRefrescoDetal * 10.0;
    float montoRefrescoMayor = cliente.cantidadRefrescoMayor * 5.0;
    float montoMaltaDetal = cliente.cantidadMaltaDetal * 12.0;
    float montoMaltaMayor = cliente.cantidadMaltaMayor * 7.0;
    return montoRefrescoDetal + montoRefrescoMayor + montoMaltaDetal + montoMaltaMayor;
}

int main() {
    // Inicializar variables
    Cliente cliente;
    float montoAPagar;

    // Ingresar datos del cliente
    cout << "Ingrese la razón social del cliente: ";
    getline(cin, cliente.razonSocial);
    cout << "Ingrese la cédula o rif del cliente: ";
    getline(cin, cliente.cedulaRif);

    // Ingresar cantidad de compras al detal y al mayor
    cout << "Ingrese la cantidad de refrescos al detal: ";
    cin >> cliente.cantidadRefrescoDetal;
    cout << "Ingrese la cantidad de refrescos al mayor: ";
    cin >> cliente.cantidadRefrescoMayor;
    cout << "Ingrese la cantidad de malta al detal: ";
    cin >> cliente.cantidadMaltaDetal;
    cout << "Ingrese la cantidad de malta al mayor: ";
    cin >> cliente.cantidadMaltaMayor;

    // Calcular monto a pagar
    montoAPagar = calcularMontoAPagar(cliente);

    // Mostrar resultados
    cout << "Razón social: " << cliente.razonSocial << endl;
    cout << "Cédula o rif: " << cliente.cedulaRif << endl;
    cout << "Monto a pagar: $" << montoAPagar << endl;


}
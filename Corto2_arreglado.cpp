#include <iostream>
using namespace std;

int main() {
    int edad, cliente, pedidoEstudiante, pedidoAdulto, pedidoGlobal;
    float descuentoEstudiante, descuentoAdulto, descuentoTotal;
    float dineroFaltante, dineroSobrante;
    const float saldoFijo = 7;

    // Validacion de edad
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 12) {
        cout << "No tienes suficiente edad para hacer la compra" << endl;
    } else {
        // Menu principal: tipo de cliente
        cout << "------ QUE TIPO DE CLIENTE ERES ------" << endl;
        cout << "1. Estudiante" << endl;
        cout << "2. Adulto Mayor" << endl;
        cout << "3. Menu General" << endl;
        cin >> cliente;

        switch (cliente) {
            // Menu Estudiante
            case 1:
                cout << "----- MENU ESTUDIANTES -----" << endl;
                cout << "1. Combo Hamburguesa: $8" << endl;
                cout << "2. combo Pizza Personal: $7" << endl;
                cout << "3. Almuerzo Ejecutivo: $10" << endl;
                cin >> pedidoEstudiante;

                switch (pedidoEstudiante) {
                    case 1:
                        descuentoEstudiante = (8 * 25.0) / 100;
                        descuentoTotal = 8 - descuentoEstudiante;
                        cout << "Usted ha elegido el combo 1 del menu de estudiante" << endl;
                        break;
                    case 2:
                        descuentoEstudiante = (7 * 25.0) / 100;
                        descuentoTotal = 7 - descuentoEstudiante;
                        cout << "Usted ha elegido el combo 2 del menu de estudiante" << endl;
                        break;
                    case 3:
                        descuentoEstudiante = (10 * 25.0) / 100;
                        descuentoTotal = 10 - descuentoEstudiante;
                        cout << "Usted ha elegido el combo 3 del menu de estudiante" << endl;
                        break;
                    default:
                        cout << "No ha elegido un plato dentro del menu" << endl;
                        return 0;
                }

                if (saldoFijo < descuentoTotal) {
                    dineroFaltante = descuentoTotal - saldoFijo;
                    cout << "usted no tiene dinero suficiente para hacer la compra" << endl;
                    cout << "Le hizo falta un total de: $" << dineroFaltante << endl;
                } else {
                    dineroSobrante = saldoFijo - descuentoTotal;
                    cout << "Debido a su descuento por ser estudiante su precio final es de: $" << descuentoTotal << endl;
                    cout << "Le ha sobrado la cantidd de: $" << dineroSobrante << endl;
                }
                break;

            // Menu Adulto Mayor
            case 2:
                cout << "----- MENU ADULTO MAYOR -----" << endl;
                cout << "1. Sopa Nutritiva: $6" << endl;
                cout << "2. Plato casero: $9" << endl;
                cout << "3. Sopa + cafe: $5" << endl;
                cin >> pedidoAdulto;

                switch (pedidoAdulto) {
                    case 1:
                        descuentoAdulto = (6 * 30.0) / 100;
                        descuentoTotal = 6 - descuentoAdulto;
                        cout << "Usted ha elegido el combo 1 del menu de adulto mayor" << endl;
                        break;
                    case 2:
                        descuentoAdulto = (9 * 30.0) / 100;
                        descuentoTotal = 9 - descuentoAdulto;
                        cout << "Usted ha elegido el combo 2 del menu de adulto mayor" << endl;
                        break;
                    case 3:
                        descuentoAdulto = (5 * 30.0) / 100;
                        descuentoTotal = 5 - descuentoAdulto;
                        cout << "Usted ha elegido el combo 3 del menu de adulto mayor" << endl;
                        break;
                    default:
                        cout << "No ha elegido un plato dentro del menu" << endl;
                        return 0;
                }

                if (saldoFijo < descuentoTotal) {
                    dineroFaltante = descuentoTotal - saldoFijo;
                    cout << "Usted no tiene dinero suficiente para hacer la compra" << endl;
                    cout << "Le hizo falta un total de: $" << dineroFaltante << endl;
                } else {
                    dineroSobrante = saldoFijo - descuentoTotal;
                    cout << "Debido a su descuento por ser adulto mayor su precio final es de: $" << descuentoTotal << endl;
                    cout << "Le ha sobrado la cantidad de: $" << dineroSobrante << endl;
                }
                break;

            // Menu General
            case 3:
                cout << "----- MENU GENERAL -----" << endl;
                cout << "1. Sopa Nutritiva: $6" << endl;
                cout << "2. Plato casero: $9" << endl;
                cout << "3. Sopa + cafe: $5" << endl;
                cout << "4. combo Hamburguesa: $8" << endl;
                cout << "5. Combo Pizza: $7" << endl;
                cout << "6. Almuerzo Ejecutivo: $10" << endl;
                cin >> pedidoGlobal;

                switch (pedidoGlobal) {
                    case 1:
                        if (saldoFijo < 6) {
                            dineroFaltante = 6 - saldoFijo;
                            cout << "Usted no tiene dinero suficiente para hacer la compra" << endl;
                            cout << "Le hizo falta un total de: $" << dineroFaltante << endl;
                        } else {
                            dineroSobrante = saldoFijo - 6;
                            cout << "Su precio final es de: $6" << endl;
                            cout << "Le ha sobrado la cantidad de: $" << dineroSobrante << endl;
                        }
                        break;

                    case 2:
                        if (saldoFijo < 9) {
                            dineroFaltante = 9 - saldoFijo;
                            cout << "Usted no tiene dinero suficiente para hacer la compra" << endl;
                            cout << "Le hizo falta un total de: $" << dineroFaltante << endl;
                        } else {
                            dineroSobrante = saldoFijo - 9;
                            cout << "Su precio final es de: $9" << endl;
                            cout << "Le ha sobrado la cantidad de: $" << dineroSobrante << endl;
                        }
                        break;

                    case 3:
                        if (saldoFijo < 5) {
                            dineroFaltante = 5 - saldoFijo;
                            cout << "Usted no tiene dinero suficiente para hacer la compra" << endl;
                            cout << "le hizo falta un total de: $" << dineroFaltante << endl;
                        } else {
                            dineroSobrante = saldoFijo - 5;
                            cout << "Su precio final es de: $5" << endl;
                            cout << "Le ha sobrado la cantidad de: $" << dineroSobrante << endl;
                        }
                        break;

                    case 4:
                        if (saldoFijo < 8) {
                            dineroFaltante = 8 - saldoFijo;
                            cout << "Usted no tiene dinero suficiente para hacer la compra" << endl;
                            cout << "Le hizo falta un total de: $" << dineroFaltante << endl;
                        } else {
                            dineroSobrante = saldoFijo - 8;
                            cout << "Su precio final es de: $8" << endl;
                            cout << "Le ha sobrado la cantidad de: $" << dineroSobrante << endl;
                        }
                        break;

                    case 5:
                        if (saldoFijo < 7) {
                            dineroFaltante = 7 - saldoFijo;
                            cout << "Usted no tiene dinero suficiente para hacer la compra" << endl;
                            cout << "Le hizo falta un total de: $" << dineroFaltante << endl;
                        } else {
                            dineroSobrante = saldoFijo - 7;
                            cout << "Su precio final es de: $7" << endl;
                            cout << "Le ha sobrado la cantidad de: $" << dineroSobrante << endl;
                        }
                        break;

                    case 6:
                        if (saldoFijo < 10) {
                            dineroFaltante = 10 - saldoFijo;
                            cout << "Usted no tiene dinero suficiente para hacer la compra" << endl;
                            cout << "Le hizo falta un total de: $" << dineroFaltante << endl;
                        } else {
                            dineroSobrante = saldoFijo - 10;
                            cout << "Su precio final es de: $10" << endl;
                            cout << "Le ha sobrado la cantidad de: $" << dineroSobrante << endl;
                        }
                        break;

                    default:
                        cout << "No ha elegido un plato dentro del menu" << endl;
                }
                break;

            default:
                cout << "No hay mas opcione de menu" << endl;
                break;
        }
    }

    return 0;
}
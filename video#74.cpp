#include <iostream>
#include <conio.h>

using namespace std;

struct date {
    int day, month, year;
} d1, d2;

void pedirDatos();
date retornarDatos();
void mostrarFecha(date);

int main() {

    pedirDatos();
    date x = retornarDatos();
    cout << "La fecha mayor es: ";
    mostrarFecha(x);

    getch();
    return 0;
}

void pedirDatos() {
    cout << "Digite el dia: ";
    cin >> d1.day;
    cout << "Digite el mes: ";
    cin >> d1.month;
    cout << "Digite el anio: ";
    cin >> d1.year;
    cout << "\n";
    cout << "Digite el dia: ";
    cin >> d2.day;
    cout << "Digite el mes: ";
    cin >> d2.month;
    cout << "Digite el anio: ";
    cin >> d2.year;
}

date retornarDatos() {
    if (d1.year > d2.year || (d1.year == d2.year && d1.month > d2.month) ||
        (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day)) {
        return d1;
    } else {
        return d2;
    }
}

void mostrarFecha(date fecha) {
    cout << fecha.day << "/" << fecha.month << "/" << fecha.year << endl;
}

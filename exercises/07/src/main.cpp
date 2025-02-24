#include <iostream>
#include "vektor3d.h"
#include "teilchen.h"

int main() {
    // Erzeuge zwei Vektor3D-Objekte
    Vektor3D v1(1.0, 2.0, 3.0);
    Vektor3D v2(4.0, 5.0, 6.0);

    // Vektoroperationen
    Vektor3D v_add = v1 + v2;
    Vektor3D v_sub = v1 - v2;
    double v_dot = v1.dot(v2);
    Vektor3D v_cross = v1.cross(v2);

    std::cout << "Vektoraddition: (" << v_add.x << ", " << v_add.y << ", " << v_add.z << ")\n";
    std::cout << "Vektorsubtraktion: (" << v_sub.x << ", " << v_sub.y << ", " << v_sub.z << ")\n";
    std::cout << "Skalarprodukt: " << v_dot << "\n";
    std::cout << "Kreuzprodukt: (" << v_cross.x << ", " << v_cross.y << ", " << v_cross.z << ")\n\n";

    // Erzeuge ein Teilchen mit Masse 2.0, Startposition (0,0,0) und Geschwindigkeit (3,0,4)
    Teilchen teilchen(2.0, Vektor3D(0.0, 0.0, 0.0), Vektor3D(3.0, 0.0, 4.0));

    // Berechne kinetische Energie und Impuls
    double ke = teilchen.kinetischeEnergie();
    Vektor3D p = teilchen.impuls();

    std::cout << "Teilchen kinetische Energie: " << ke << "\n";
    std::cout << "Teilchen Impuls: (" << p.x << ", " << p.y << ", " << p.z << ")\n";

    return 0;
}

#ifndef TEILCHEN_H
#define TEILCHEN_H

#include "vektor3d.h"

class Teilchen {
private:
    double masse;
public:
    Vektor3D position;
    Vektor3D geschwindigkeit;

    // Konstruktor
    Teilchen(double masse, const Vektor3D &position, const Vektor3D &geschwindigkeit);

    // Destruktor
    ~Teilchen();

    // Getter für Masse
    double getMasse() const;

    // Setter für Masse
    void setMasse(double masse);

    // Berechnet die kinetische Energie: 1/2 * m * v²
    double kinetischeEnergie() const;

    // Berechnet den Impuls: p = m * v
    Vektor3D impuls() const;

    // Aktualisiert die Position: position = position + geschwindigkeit
    void updatePosition();
};

#endif // TEILCHEN_H

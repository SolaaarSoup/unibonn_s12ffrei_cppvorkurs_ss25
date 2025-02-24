#include "teilchen.h"

Teilchen::Teilchen(double masse, const Vektor3D &position, const Vektor3D &geschwindigkeit)
    : masse(masse), position(position), geschwindigkeit(geschwindigkeit) {}

Teilchen::~Teilchen() {
    // Leerer Destruktor, da keine dynamischen Ressourcen genutzt werden.
}

double Teilchen::getMasse() const {
    return masse;
}

void Teilchen::setMasse(double masse) {
    this->masse = masse;
}

double Teilchen::kinetischeEnergie() const {
    // v² = geschwindigkeit • geschwindigkeit
    double v_squared = geschwindigkeit.dot(geschwindigkeit);
    return 0.5 * masse * v_squared;
}

Vektor3D Teilchen::impuls() const {
    return Vektor3D(geschwindigkeit.x * masse,
                    geschwindigkeit.y * masse,
                    geschwindigkeit.z * masse);
}

void Teilchen::updatePosition() {
    // Aktualisiere die Position durch Addition der Geschwindigkeit
    position = position + geschwindigkeit;
}

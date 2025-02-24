#include "vektor3d.h"

Vektor3D::Vektor3D(double x, double y, double z) : x(x), y(y), z(z) {}

Vektor3D::~Vektor3D() {
    // Leerer Destruktor, da keine dynamischen Ressourcen freigegeben werden müssen.
}

Vektor3D Vektor3D::operator+(const Vektor3D &other) const {
    return Vektor3D(x + other.x, y + other.y, z + other.z);
}

Vektor3D Vektor3D::operator-(const Vektor3D &other) const {
    return Vektor3D(x - other.x, y - other.y, z - other.z);
}

double Vektor3D::dot(const Vektor3D &other) const {
    return x * other.x + y * other.y + z * other.z;
}

Vektor3D Vektor3D::cross(const Vektor3D &other) const {
    return Vektor3D(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

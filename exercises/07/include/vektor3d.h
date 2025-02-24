#ifndef VEKTOR3D_H
#define VEKTOR3D_H

class Vektor3D {
public:
    double x, y, z;

    // Konstruktor mit Default-Werten
    Vektor3D(double x = 0.0, double y = 0.0, double z = 0.0);

    // Destruktor
    ~Vektor3D();

    // Vektoraddition
    Vektor3D operator+(const Vektor3D &other) const;

    // Vektorsubtraktion
    Vektor3D operator-(const Vektor3D &other) const;

    // Skalarprodukt
    double dot(const Vektor3D &other) const;

    // Kreuzprodukt
    Vektor3D cross(const Vektor3D &other) const;
};

#endif // VEKTOR3D_H

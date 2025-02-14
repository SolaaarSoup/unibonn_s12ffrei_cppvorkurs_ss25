#include <print>    // Beachten: Diese Header-Datei gehört zu C++23 (oder ggf. einem experimentellen Feature)
#include <string>

//Weitere Informationene: https://en.cppreference.com/w/cpp/utility/format/spec

int main() {
    // Aufgabe:
    // Experimentieren Sie mit der Funktion std::print. Erzeugen Sie eine formatierte Ausgabe,
    // die folgende Informationen enthält:
    //   - Eine Ganzzahl (z. B. 10)
    //   - Einen Fließkommawert (z. B. 3.14)
    //   - Einen Text (z. B. "Hallo Welt")
    // Erwartete Ausgabe (Format): "Ganzzahl: 10, Fließkomma: 3.14, Text: Hallo Welt"

    // 1. Deklarieren und initialisieren Sie die benötigten Variablen:
    int ganzzahl = /* Lücke: z.B. 10 */;
    double fliesswert = /* Lücke: z.B. 3.14 */;
    std::string text = /* Lücke: z.B. "Hallo Welt" */;

    // 2. Ergänzen Sie den Aufruf von std::print, um die formatierte Ausgabe zu erzeugen.
    //    Nutzen Sie dafür einen Format-String mit Platzhaltern {} und übergeben Sie die Variablen.
    std::print(/* Lücke: z.B. "Ganzzahl: {}, Fließkomma: {}, Text: {}\n", ganzzahl, fliesswert, text */);

    return 0;
}

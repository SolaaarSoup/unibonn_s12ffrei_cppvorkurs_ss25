# include <iostream>
# include <print>

int main(){

    double summe {0.0};
    std::print("Berechnung der Summe. \n Geben Sie reelle Zahlen ein. \n \t Eingabe mit <CR>, <CTRL-D> beendet die Eingabe, <CTRL-C> beendet das Programm. \n");

    double x {0.0};
    while(std::cin) // Stream noch gültig?
    {
        std::cin >> x;
        summe += x;
    }

    std::print("Summe: {:20.15f} \n", summe);

}

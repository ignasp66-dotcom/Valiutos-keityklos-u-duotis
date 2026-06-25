#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Valiutų kursai
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;

    int pasirinkimas;
    string valiuta;
    double kursas = 0;
    double kiekis, rezultatas;

    cout << "=== VALIUTOS KEITYKLA ===" << endl;
    cout << "1 - Palyginti kursa" << endl;
    cout << "2 - Pirkti valiuta" << endl;
    cout << "3 - Parduoti valiuta" << endl;
    cout << "Pasirinkite veiksma: ";
    cin >> pasirinkimas;

    cout << "\nPasirinkite valiuta (GBP, USD, INR): ";
    cin >> valiuta;

    // Parenkamas kursas
    if (valiuta == "GBP") {
        if (pasirinkimas == 1) kursas = GBP_Bendras;
        else if (pasirinkimas == 2) kursas = GBP_Pirkti;
        else if (pasirinkimas == 3) kursas = GBP_Parduoti;
    }
    else if (valiuta == "USD") {
        if (pasirinkimas == 1) kursas = USD_Bendras;
        else if (pasirinkimas == 2) kursas = USD_Pirkti;
        else if (pasirinkimas == 3) kursas = USD_Parduoti;
    }
    else if (valiuta == "INR") {
        if (pasirinkimas == 1) kursas = INR_Bendras;
        else if (pasirinkimas == 2) kursas = INR_Pirkti;
        else if (pasirinkimas == 3) kursas = INR_Parduoti;
    }
    else {
        cout << "Neteisinga valiuta!" << endl;
        return 0;
    }

    cout << fixed << setprecision(2);

    switch (pasirinkimas) {
        case 1:
            cout << "\n1 EUR = " << kursas << " " << valiuta << endl;
            break;

        case 2:
            cout << "\nIveskite euru kieki: ";
            cin >> kiekis;

            rezultatas = kiekis * kursas;

            cout << "Uz " << kiekis << " EUR gausite "
                 << rezultatas << " " << valiuta << endl;
            break;

        case 3:
            cout << "\nIveskite " << valiuta << " kieki: ";
            cin >> kiekis;

            rezultatas = kiekis / kursas;

            cout << "Pardave " << kiekis << " " << valiuta
                 << " gausite " << rezultatas << " EUR" << endl;
            break;

        default:
            cout << "Neteisingas pasirinkimas!" << endl;
    }

    return 0;
}
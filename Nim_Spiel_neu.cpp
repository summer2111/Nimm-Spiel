#include <iostream>
using namespace std;
int main()
{
    int darstellung = 0;
    int spielsteine = 20;
    int durchgang = 1;
    int eingabespieler;
    int eingabe_computer;



    cout << "Nim Spiel!\n" << "\n" << "\n";
    cout << "Sie muessen abwechselnd mit dem Computer Spielsteine ziehen. Es sind insgesamt 20 Spielsteine,\n derjenige, der den letzten Stein nimmt hat verloren.\n" << "\n" << "Sie koennen waehlen ob Sie 1, 2 oder 3 Steine nehmen.\n" << "\n";
    cout << "Sie fangen an!\n" << "\n";

    while (spielsteine >= 0) {

        for (spielsteine; spielsteine > 0; spielsteine -= eingabespieler) {

            for (int i = darstellung; i < spielsteine; i++) {
                cout << "|";
            }
            cout << "\n\n";
            if (durchgang % 2 != 0) {
                cout << "Bitte geben Sie die Anzahl ein!\n" << "\n";
                cin >> eingabespieler;
                spielsteine -= eingabespieler;
                if (spielsteine > 0) {
                    cout << "Es sind noch " << spielsteine << " Spielsteine uebrig!\n" << "\n";
                }
                else {
                    cout << "Sie haben leider verloren!\n";
                }

                durchgang++;
                if (eingabespieler < 1 || eingabespieler > 3) {
                    cout << "Dies ist eine ungueltige Eingabe! Die Zahl muss zwischen 1 und 3 liegen!\n" << "\n";
                    cout << "Versuchen Sie es noch einmal:\n" << "\n";
                    cin >> eingabespieler;
                    spielsteine -= eingabespieler;
                    cout << "Es sind noch " << spielsteine << " Spielsteine uebrig!\n" << "\n";
                }

            }
            for (int i = darstellung; i < spielsteine; i++) {
                cout << "|";
            }
            cout << "\n\n";

           
            if (durchgang % 2 == 0) {
                eingabe_computer = (spielsteine % 4 == 0) ? 3 : eingabe_computer = (spielsteine % 2 == 0) ? 1 : eingabe_computer = (spielsteine % 4 == 3) ? 2 : eingabe_computer = (spielsteine % 4 == 1) ? 2 : eingabe_computer = 1;
                if (spielsteine == 1) {
                 
                    cout << "Herzlichen Glueckwunsch! Sie haben gewonnen! Der Computer muss den letzten Stein nehmen!\n";
                }
                spielsteine -= eingabe_computer;
                durchgang++;
                if (spielsteine > 0) {
                    cout << "Der Computer nimmt: " << eingabe_computer << " Spielsteine!\n" << "Es sind noch " << spielsteine << " Spielsteine uebrig!\n" << "\n";
                }

            }eingabespieler = 0;
        }


    }
    return 0;
}

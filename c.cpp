                                                                                                                                                                                                                                                                                                                         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
#include <iostream>
#include <string>

using namespace std;

enum VolemiaType {
    HYPO,
    EU,
    HYPER,
    UNKNOWN
};

int main() {

    int sodium;
    cout << "Write value of sodium concentration: " << endl;
    cin >> sodium;

    if (sodium < 135) {
        cout << "Patient can't be examined with this program" << endl;
        return 1;
    }

    int osmolality;
    cout << "Write value of osmolality: " << endl;
    cin >> osmolality;

    // HIPEROSMOLALNOŚĆ
    if (osmolality > 295) {
        cout << "Hyperosmolality detected." << endl;
        cout << "Diagnosis: Pseudohypernatremia due to paraproteinemia." << endl;
    }

    // HIPOOSMOLALNOŚĆ
    else if (osmolality < 235) {

        string volInput;
        cout << "Write value of volemia (hypovolemia / euvolemia / hypervolemia):" << endl;
        cin >> volInput;

        VolemiaType volemia;

        if (volInput == "hypovolemia") volemia = HYPO;
        else if (volInput == "euvolemia") volemia = EU;
        else if (volInput == "hypervolemia") volemia = HYPER;
        else volemia = UNKNOWN;

        switch (volemia) {

        case HYPO:
            cout << "Patient is hypovolemic." << endl;

            if (sodium >= 10 && sodium <= 15) {
                cout << "Diagnosis: Hypovolemic hyponatremia (mild to moderate)." << endl;
            }
            else if (sodium > 15 && sodium <= 20) {
                cout << "Diagnosis: Severe hypovolemic hyponatremia." << endl;
            }
            break;

        case EU:
            cout << "Patient is euvolemic." << endl;
            cout << "Diagnosis: Euvolemic hyponatremia (suspected SIADH)." << endl;
            break;

        case HYPER:
            cout << "Patient is hypervolemic." << endl;
            cout << "Diagnosis: Hypervolemic hyponatremia (e.g. heart failure, cirrhosis)." << endl;
            break;

        default:
            cout << "Unable to determine volemia." << endl;
            break;
        }
    }

    // IZOOSMOLALNOŚĆ
    else {
        float hyperglycemia;
        cout << "Write value of hyperglycemia: " << endl;
        cin >> hyperglycemia;

        cout << "Diagnosis: Translocational hyponatremia due to hyperglycemia." << endl;
    }

    return 0;
}

                                                                                                                           
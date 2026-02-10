#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class StezenieSodu {
public:
    int x;
        StezenieSodu() {
                cout << "Write value of sodium concentration: " << endl;
                        cin >> x;
                            }
                            };

                            class Osmolalnosc {
                            public:
                                int z;
                                    Osmolalnosc() {
                                            cout << "Write value of osmolality: " << endl;
                                                    cin >> z;
                                                        }
                                                        };

                                                        class likemia {
                                                        public:
                                                            int hipe;
                                                                likemia() {
                                                                        cout << "Patient is hyper " << endl;
                                                                                cin >> hipe;
                                                                                    }
                                                                                    };

                                                                                    class Hiperglikemia {
                                                                                    public:
                                                                                        float hip;
                                                                                            Hiperglikemia() {
                                                                                                    cout << "Write value of hyperglycemia: " << endl;
                                                                                                            cin >> hip;
                                                                                                                }
                                                                                                                };

                                                                                                                class Paraproteinemia : public likemia {
                                                                                                                public:
                                                                                                                    bool par;
                                                                                                                        Paraproteinemia() {
                                                                                                                                cout << "Does the patient have paraproteinemia? (1 = true, 0 = false): " << endl;
                                                                                                                                        cin >> par;
                                                                                                                                            }
                                                                                                                                            };

                                                                                                                                            class volemia: public StezenieSodu {
                                                                                                                                            public:
                                                                                                                                                string vol;
                                                                                                                                                    volemia() {
                                                                                                                                                            cout << "Write value of volemia (hypovolemia / euvolemia / hypervolemia):" << endl;
                                                                                                                                                                    cin >> vol;
                                                                                                                                                                        }
                                                                                                                                                                        };



                                                                                                                                                                        int main() {
                                                                                                                                                                            StezenieSodu s;

                                                                                                                                                                                if (s.x < 135) {
                                                                                                                                                                                        cout << "Patient can't be examined with this program" << endl;
                                                                                                                                                                                                exit(1);
                                                                                                                                                                                                    }

                                                                                                                                                                                                        Osmolalnosc o;

                                                                                                                                                                                                            if (o.z > 295) {
                                                                                                                                                                                                                    Paraproteinemia p;
                                                                                                                                                                                                                            cout << "dzialanie 1" << endl;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                    if (o.z < 235) {
                                                                                                                                                                                                                                            volemia v;
                                                                                                                                                                                                                                                    if (v.vol == "hypovolemia") {
                                                                                                                                                                                                                                                            cout << "Patient is hypovolemic" << endl;
                                                                                                                                                                                                                                                                    if (s.x <= 10 >= 15 ){
                                                                                                                                                                                                                                                                            cout << "dziaĹ‚anie2" << endl;
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                            if (s.x <= 15 >=20){
                                                                                                                                                                                                                                                                                                    cout << "działanie3" << endl;
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                        if (v.vol == "euvolemia" ){
                                                                                                                                                                                                                                                                                                                            cout << "Patient is euvolemic" << endl;
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                        if (v.vol == "hypervolemia") {
                                                                                                                                                                                                                                                                                                                                            cout << "Patient is hypervolemic" << endl;
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                         
                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                        

                                                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                                             
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

                                                                                                                           
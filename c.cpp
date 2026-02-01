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
                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                if (o.z <= 235 >= 295) {
                                                                                                                                                                                                                                                                                                                                                                        Hiperglikemia h;
                                                                                                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                           
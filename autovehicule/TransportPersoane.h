#include "Autovehicul.h"

class TransportPersoane : public Autovehicul {
    static int valoareImpozit;
    static double valoareRovinieta;
    int nrLocuri;
public:
    TransportPersoane();

    TransportPersoane(char *marca, int capacitate, double putere, double masa, int nrLocuri);

    void afisare() override;

    int getNrLocuri();

    void setNrLocuri(int val);

    double calculImpozit() override;

    double calculRovinieta() override;

};

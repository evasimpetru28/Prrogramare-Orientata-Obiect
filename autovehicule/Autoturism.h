#include "Autovehicul.h"

class Autoturism : public Autovehicul {
private:
    static int valoareImpozit;
    static double valoareRovinieta;
    int nrUsi;
public:
    Autoturism();

    Autoturism(char *marca, int capacitatea, double putere, double masa, int nrUsi);

    void afisare() override;

    int getNrUsi() const;

    void setNrUsi(int nrUsi);

    double calculImpozit() override;

    double calculRovinieta() override;
};



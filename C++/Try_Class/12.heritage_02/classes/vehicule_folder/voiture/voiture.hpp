#ifndef _VOITURE_
    #define _VOITURE_

    #include "../vehicule.hpp"

class Voiture : public Vehicule
{
    public:
        Voiture() = default;
        ~Voiture();
        double Drifter();
        void getCasseMoteur();

    private:
        double casse_moteur_;
};

#endif
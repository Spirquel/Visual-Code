#ifndef _VEHICULE_
    #define _VEHICULE_

class Vehicule
{
    public:
        Vehicule() = default;
        ~Vehicule();
        double Accelerer();
        void getVitesse();
        void getUsurePneus();

    private:
        double vitesse_ = 0.0;
        double usure_pneus_ = 0.0;
};

#endif
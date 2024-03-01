#ifndef _BAG_
    #define _BAG_

    #include <string>
    #include "Cahier.hpp"

    class Bag
    {
        public :
            Bag();
            void RangerCahier(Cahier c);
            void FindCahier(std::string find);
            ~Bag();

        private :

    };

#endif
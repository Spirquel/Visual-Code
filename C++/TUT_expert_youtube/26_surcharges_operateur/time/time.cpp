#include "time.hpp"

namespace t
{
    time(std::size_t _h, std::size_t _m, std::size_t _s) : hours_(_h), minutes_(_m), secondes_(_s) 
    {}

    std::ostream& operator<<(std::ostream& os, const time& t0)
    {
        os << t0.hours_ << ":" << t0.minutes_ << ":" << t0.secondes_; //en faisant ça, on affichera en sortie "hours:minutes:secondes" 
        return os;
    }
}
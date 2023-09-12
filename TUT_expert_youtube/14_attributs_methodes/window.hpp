#ifndef _WINDOW_
    #define _WINDOW_

    #include <string>

    class window
    {
        public: 
            window() = default; /*généré par defaut par le code*/ /*pour que cet variable existe, il faut de base lui créer un corps
                                    dans le "window.cpp", mais comme = default alors pas besoin et le code accepte.*/
            window(std::string t, int w, int h); /*on crée le corps dans "window.cpp"*/ /*methode*/
            void run() const; /*methode*/

        private :
            std::string title; /*attribut*/
            int width;
            int height;
    };

#endif

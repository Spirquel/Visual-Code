#ifndef _VECTOR3D_
    #define _VECTOR3D_

    #include <iostream>

    class Vector3d 
    {
        public:
            Vector3d(double x, double y, double z);
            void display();
            double static add(Vector3d va, Vector3d vb);
            double static dot(Vector3d va, Vector3d vb);
            double length();
            Vector3d static mul(Vector3d va, double t);
            double normalize();

            void print(int a);

        private:
            double _x;
            double _y;
            double _z;
    };

#endif
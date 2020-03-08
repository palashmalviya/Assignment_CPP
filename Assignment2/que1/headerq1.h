#ifndef headerq1_H_
#define headerq1_H_

class cylinder
{
private:
    double radius;
    double height;
    double volume;

public:
    cylinder();
    cylinder(double radius, double height);
    void getvolume();
    void printvolume();
};



#endif

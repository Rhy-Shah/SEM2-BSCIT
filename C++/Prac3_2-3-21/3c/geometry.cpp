/*
    Design a class Geometry containing 
    the methods areaO() and volumeO() and
    also overload the areaO() function
*/
#include<iostream>

using std::endl;
using std::string;
using std::cout;
using std::cin;
using std::getline;

class geometry
{
private:
    float length, breadth, height, areaO, volumeO;
public:
    geometry()
    {
        length=0, breadth=0, height=0, areaO = 0, volumeO = 0;
    }
    geometry(float x, float y, float z);
    void area();
    void area(string shape);
    void volume();
    float disp_area();
    float disp_vol();
    ~geometry();
};

int main()
{
    geometry square(2, 0, 0);
    geometry rectangle(2, 3, 0);
    geometry cuboid(2, 3, 3);

    square.area();
    rectangle.area("rect");
    cuboid.volume();

    cout << "Area of square : " << square.disp_area() << endl;
    cout << "Area of rectangle : " << rectangle.disp_area() << endl;
    cout << "Volume of cuboid : " << cuboid.disp_vol();
}

// constructor for cube
geometry::geometry(float x, float y, float z)
{
    length = x, breadth = y, height = z, areaO = 0, volumeO = 0;
}

void geometry::area()
{
    areaO = length*length;
}

void geometry::area(string shape)
{
    if(shape == "rect"){
        areaO = length * breadth;
    }
}

void geometry::volume()
{
    volumeO = length*breadth*height;
}

float geometry::disp_area()
{
    return areaO;
}

float geometry::disp_vol()
{
    return volumeO;
}

geometry::~geometry()
{
}

// Write a friend function for adding the two different distances and display its sum, using two classes.
#include<iostream>
class kiloMeters;

class meters
{
private:
    float values;
    friend kiloMeters addDist(meters, kiloMeters);
public:
    meters(int x);
    ~meters();
};

class kiloMeters
{
private:
    float value;
    friend kiloMeters addDist(meters, kiloMeters);
public:
    kiloMeters()
    { 
        value = 0;
    }
    void disp(kiloMeters X)
    {
        std::cout << "The result is "<<X.value<<"km.";
    }
    kiloMeters(int x);
    ~kiloMeters();
};

int main()
{
    float i;
    std::cout << "Enter the distance in meters >> ";
    std::cin >> i;
    meters var1(i);
    std::cout << "Enter the distance in kilometers >> ";
    std::cin >> i;
    kiloMeters var2(i);

    kiloMeters result;
    result.disp(addDist(var1, var2));
}

kiloMeters::kiloMeters(int x)
{
    value = x;
}

kiloMeters::~kiloMeters()
{
}


meters::meters(int x)
{
    values = x;
}

meters::~meters()
{
}

kiloMeters addDist(meters x, kiloMeters y)
{
    meters temp = x;
    float meterCon =  temp.values / 1000;
    kiloMeters sum;
    sum.value = y.value + meterCon;

    return sum;
}

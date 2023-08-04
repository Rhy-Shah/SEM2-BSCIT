// Write a friend function for adding the two matrixA from two different classes and display its sum
#include<iostream>

class matrixX32;

class matrixX3
{
private:
    int matrixA[3][3]; 
public:
    friend matrixX32 add32x3(matrixX3 X, matrixX32 Y);
    matrixX3();
    void buildmatrix();
    ~matrixX3(){}
};

class matrixX32
{
private:
    int matrix4[3][3];
public:
    friend matrixX32 add32x3(matrixX3 X, matrixX32 Y);
    matrixX32();
    void buildmatrix();
    void disp();
    ~matrixX32(){}
};

int main(void)
{
    std::cout << "For first matrix: \n";
    matrixX3 first;
    first.buildmatrix();
    std::cout << "For second matrix: \n";
    matrixX32 second;
    second.buildmatrix();
    matrixX32 sum;
    sum = add32x3(first, second);
    std::cout << "sum of the matrices is: \n";
    sum.disp();

}

matrixX3::matrixX3()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrixA[i][j] = 0;
        }
    }
}

matrixX32::matrixX32()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrix4[i][j] = 0;
        }
    }
}


void matrixX32::disp()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << matrix4[i][j] <<"\t";
        }
        std::cout << std::endl;
    }
}

void matrixX3::buildmatrix()
{
    int input = 0, count = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << "Enter the " << count + 1 << "th element>> ";
            std::cin >> input;
            matrixA[i][j] = input;
            count++;
        }
    }
}

void matrixX32::buildmatrix()
{
    int input = 0, count = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << "Enter the " << count + 1 << "th element>> ";
            std::cin >> input;
            matrix4[i][j] = input;
            count++;
        }
    }
}

matrixX32 add32x3(matrixX3 X, matrixX32 Y)
{
    matrixX32 result;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            result.matrix4[i][j] = X.matrixA[i][j] + Y.matrix4[i][j];
        }
    }

    return result;
}
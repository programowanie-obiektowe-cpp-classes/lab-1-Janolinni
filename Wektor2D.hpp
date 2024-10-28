#include <iostream>
#include <cmath>
#include "catch.hpp"
class Wektor2D
{
  private:
  double x;
  double y;
  static int numer_wektora;

public:
  void setX(double x)
    {
        this->x = x;
    };
    void setY(double y)
    {
        this->y = y;
    };
    double getX() const
  {
    return x;
  };
  double getY() const
    {
        return y;
    };

    Wektor2D()
    {
    this->setX(0);
    this->setY(0);
    };

    Wektor2D(double x, double y) 
    {
    this->setX(x);
    this->setY(y);
    };
    
    double norm()
    {
      return std::sqrt(x * x + y * y);
    }

    Wektor2D operator+(const Wektor2D& other)
    {
      return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other)
    {
      return x * other.x + y * other.y;   
    }
    // Tutaj napisz implementacje klasy Wektor2D
};
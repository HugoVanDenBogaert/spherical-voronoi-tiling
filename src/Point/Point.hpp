#pragma once
#include <sstream>

class Point
{
private:
    float x;
    float y;
    float z;

public:
    Point(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    float getX() {
        return x;
    }
    float getY() {
        return y;
    }
    float getZ() {
        return z;
    }

    std::string getPos() {
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
    }

    float dot(const Point &P)
    {
        return x * P.x + y * P.y + z * P.z;
    }

    Point cross(const Point &P)
    {
        return Point(y * P.z - z * P.y, z * P.x - x * P.z, x * P.y - y * P.x);
    }

    Point operator+(const Point &P)
    {
        return Point(x + P.x, y + P.y, z + P.z);
    }

    Point operator-(const Point &P)
    {
        return Point(x - P.x, y - P.y, z - P.z);
    }

    Point operator*(const float &c)
    {
        return Point(c * x, c * y, c * z);
    }
};

Point operator*(float c, Point P)
{
    return P * c;
};
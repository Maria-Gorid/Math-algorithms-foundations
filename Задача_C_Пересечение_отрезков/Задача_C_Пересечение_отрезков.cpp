#include <cmath>

const double EP = 1E-10;
const double PI = 3.14159265;
const double INF = 1E200;

struct Point
{
    double x;
    double y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    double GetDistance(Point p)
    {
        return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
    }
};

struct Line
{
    double a;
    double b;
    double c;
    Line(double a, double b, double c) : a(a), b(b), c(c) {}

};

struct LineSeg
{
    Point s;
    Point e;
    LineSeg(Point s, Point e) : s(s), e(e) {}
    LineSeg() = default;

    operator Line() const
    {
        int sign = 1;
        double a = e.y - s.y;
        if (a < 0)
        {
            sign = -1;
            a = sign * a;
        }
        double b = sign * (s.x - e.x);
        double c = sign * (s.y * e.x - s.x * e.y);
        return Line(a, b, c);
    }

    bool intersection(LineSeg line)
    {
        Line l1 = (Line)*this;
        Line l2 = (Line) line;

    }
};



int main(int argc, char* argv[])
{
    return 0;
}

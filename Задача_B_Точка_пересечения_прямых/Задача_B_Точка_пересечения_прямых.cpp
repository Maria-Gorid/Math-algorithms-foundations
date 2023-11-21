#include <iostream>
#include <iomanip>

struct Point {
    double x;
    double y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}
};

struct Line {
    Point p1;
    Point p2;

    Line(Point p1, Point p2) : p1(p1), p2(p2) {}
};

Point LineIntersect(Line line1, Line line2) {
    double x1 = line1.p1.x, y1 = line1.p1.y;
    double x2 = line1.p2.x, y2 = line1.p2.y;
    double x3 = line2.p1.x, y3 = line2.p1.y;
    double x4 = line2.p2.x, y4 = line2.p2.y;

    double denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);

    if (denominator == 0) {
        // Если знаменатель равен 0, прямые совпадают или параллельны
        if ((x1 - x3) * (y4 - y3) - (y1 - y3) * (x4 - x3) == 0)
            return Point(-1, -1); // Прямые совпадают
        return Point(0, 0); // Прямые параллельны, нет точки пересечения
    }

    double numerator1 = (x1 * y2 - y1 * x2);
    double numerator2 = (x3 * y4 - y3 * x4);

    double x = (numerator1 * (x3 - x4) - (x1 - x2) * numerator2) / denominator;
    double y = (numerator1 * (y3 - y4) - (y1 - y2) * numerator2) / denominator;

    return Point(x, y);
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    Line line1(Point(x1, y1), Point(x2, y2));
    Line line2(Point(x3, y3), Point(x4, y4));

    Point intersection = LineIntersect(line1, line2);

    if (intersection.x == -1 && intersection.y == -1) {
        std::cout << -1;
    } else if (intersection.x == 0 && intersection.y == 0) {
        std::cout << 0;
    } else {
        std::cout << intersection.x << " " << intersection.y;
    }

    return 0;
}
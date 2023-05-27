#include <iostream>
#include <cmath>


struct point {
    double x;
    double y;
};

struct circle {
    double x;
    double y;
    double radius;
};

bool isInside(point p, circle c) {
    double distance = sqrt(pow(p.x - c.x, 2) + pow(p.y - c.y, 2));
    if (distance > c.radius) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    point p;
    p.x = 0.0;
    p.y = 0.0;

    point p1;
    p.x = 9.5;
    p.y = 9.5;

    circle c;
    c.x = 2.5;
    c.y = 2.5;
    c.radius = 4.5;

    
    if (isInside(p, c)) {
        std::cout << "\nThe p point is inside the circle." << std::endl;
    } else {
        std::cout << "\nThe p point is outside the circle." << std::endl;
    }

    if (isInside(p1, c)) {
        std::cout << "\nThe p1 point is inside the circle." << std::endl;
    } else {
        std::cout << "\nThe p1 point is outside the circle." << std::endl;
    }

    return 0;
}

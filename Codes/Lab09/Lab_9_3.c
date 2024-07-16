#include <stdio.h>
#include <math.h>

struct Point {
    double x; // พิกัดแกน X
    double y; // พิกัดแกน Y
};

double distance(struct Point p1, struct Point p2) {
    double dX = p2.x - p1.x;
    double dY = p2.y - p1.y;
    double d = sqrt(dX * dX + dY * dY);
    return d;
}

int main() {
    struct Point points[100];
    int n;
    printf("Number of Points: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("P%d.X: ", i+1);
        scanf("%lf", &points[i].x);
        printf("P%d.Y: ", i+1);
        scanf("%lf", &points[i].y);
    }
    printf("Length:\n");
    for (int i = 0; i < n-1; i++) {
        double length = distance(points[i], points[i+1]);
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i+1, points[i].x, points[i].y, i+2, points[i+1].x, points[i+1].y, length);
    }
    return 0;
}

#include <math.h>
#include <numbers>
using std::numbers::pi;

//Расчет периметра n-угольника описанного около окружности r
float Perimeter(float r, float n) {
	return 2 * r * n * tan(pi / n);
}
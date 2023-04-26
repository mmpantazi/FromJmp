#include <cmath>

int solution(int X, int Y, int D) {
    double numJumps = ((double) Y - (double) X) / ((double) D);
    return (ceil(numJumps));
}

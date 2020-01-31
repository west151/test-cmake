#include "calculation.h"

int sum_of_elements(const QVector<int> &vector)
{
    int sum = 0;

    for(int i=0; i<vector.size(); ++i)
        sum += vector.at(i);

    return sum;
}

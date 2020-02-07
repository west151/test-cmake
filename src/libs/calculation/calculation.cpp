#include "calculation.h"

int sum_of_elements(const QVector<int> &vector)
{
    int sum = 0;

    for(int i=0; i<vector.size(); ++i)
        sum += vector.at(i);

    return sum;
}

float avg_of_elements(const QVector<int> &vector)
{
    float avg = 0;

    if(vector.size() > 0)
        avg = (float)sum_of_elements(vector)/vector.size();

    return avg;
}

int random_range(const int &begin, const int &end)
{
    return begin + std::rand() % ((end +1) - begin);
}

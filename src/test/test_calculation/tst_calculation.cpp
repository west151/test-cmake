#include <QtTest>
#include <QVector>

// add necessary includes here
#include "calculation.h"

class test_calculation : public QObject
{
    Q_OBJECT

public:
    test_calculation();
    ~test_calculation();

private slots:
    void test_case_sum_d1();
    void test_case_sum_d2();
    void test_case_random_range();
    void test_case_avg();
};

test_calculation::test_calculation()
{

}

test_calculation::~test_calculation()
{

}

void test_calculation::test_case_sum_d1()
{
    QVector<int> tst_data;
    tst_data << 0 << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9;

    QCOMPARE(sum_of_elements(tst_data), 45);

    QBENCHMARK {
        sum_of_elements(tst_data);
    }
}

void test_calculation::test_case_sum_d2()
{
    QVector<int> tst_data;
    tst_data << 0 << 1 << 2 << -3 << 4 << 5 << -6 << 7 << 8 << 9;

    QCOMPARE(sum_of_elements(tst_data), 27);
}

void test_calculation::test_case_random_range()
{
    int begin = 10;
    int end = 100;
    int test_count = 10;

    for(int i = 0; i < test_count; ++i)
        QVERIFY( begin >= random_range(begin, end) <= end  );

    QBENCHMARK {
        for(int i = 0; i < test_count; ++i)
            random_range(begin, end);
    }
}

void test_calculation::test_case_avg()
{
    QVector<int> tst_data;
    tst_data << 0 << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9;

    QCOMPARE(avg_of_elements(tst_data), 4.5);

    QBENCHMARK {
        avg_of_elements(tst_data);
    }
}

QTEST_APPLESS_MAIN(test_calculation)

#include "tst_calculation.moc"

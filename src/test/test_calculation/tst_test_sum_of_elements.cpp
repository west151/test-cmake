#include <QtTest>
#include <QVector>

// add necessary includes here
#include "calculation.h"

class test_sum_of_elements : public QObject
{
    Q_OBJECT

public:
    test_sum_of_elements();
    ~test_sum_of_elements();

private slots:
    void test_case_1();
    void test_case_2();
    void test_case_3();
};

test_sum_of_elements::test_sum_of_elements()
{

}

test_sum_of_elements::~test_sum_of_elements()
{

}

void test_sum_of_elements::test_case_1()
{
    QVector<int> tst_data;
    tst_data << 0 << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9;

    QCOMPARE(sum_of_elements(tst_data), 45);
}

void test_sum_of_elements::test_case_2()
{
    QVector<int> tst_data;
    tst_data << 0 << 1 << 2 << -3 << 4 << 5 << -6 << 7 << 8 << 9;

    QCOMPARE(sum_of_elements(tst_data), 27);
}

void test_sum_of_elements::test_case_3()
{
    int begin = 10;
    int end = 100;
    int test_count = 10;

    for(int i = 0; i < test_count; ++i)
        QVERIFY( begin >= random_range(begin, end) <= end  );
}

QTEST_APPLESS_MAIN(test_sum_of_elements)

#include "tst_test_sum_of_elements.moc"

#include <QFile>
#include <QtTest/QTest>
#include "Test.h"
#include "Customer.h"
#include "Order.h"
#include "Operator.h"
#include <ctype.h>

using namespace std;

Test::Test(QObject *parent) : QObject(parent)
{
}

void Test::IsMoneyUser()
{
    Customer A;
    A.setMoney(4);
    QCOMPARE(A.getMoney(), 4);
}

void Test::ID()
{
    Agreement A;
    A.setID(4);
    QCOMPARE(A.getID(), 4);
}
void Test::StringUsrName()
{
    Customer A;
    A.setName("Test");
    QVERIFY(A.getName() == "Test");
}

void Test::StringUsrSurname()
{
    Customer A;
    A.setSurame("Test");
    QVERIFY(A.getSurame() == "Test");
}

void Test::NameTvPrograms()
{
    Customer A;
    A.setNameTvProgram("4sdds");
    QVERIFY(A.getNameTvProgram() == "Test");
}

void Test::toUpper()
{
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}


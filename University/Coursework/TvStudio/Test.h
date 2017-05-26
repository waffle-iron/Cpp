#ifndef TEST_H
#define TEST_H
#include <QObject>
class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = 0);
private slots:
    void IsMoneyUser();
    void StringUsrName();
    void StringUsrSurname();
    void NameTvPrograms();
    void ID();
     void toUpper();
};
#endif // TEST_H


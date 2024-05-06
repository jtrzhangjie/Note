#include <QPointer>
#include <QSharedPointer>
#include <QDebug>

class Test : public QObject
{
    QString m_name;
public:
    Test(const char* name)
    {
        qDebug() << "Hello, " << name << ".";

        m_name = name;
    }

    void print()
    {
        qDebug() << "I'm " << m_name << ".";
    }

    ~Test()
    {
        qDebug() << "Goodbye, " << m_name << ".";
    }
};

int main()
{
    QPointer<Test> pt(new Test("D.T.Software"));
    QPointer<Test> pt1(pt);
    QPointer<Test> pt2(pt);

    pt->print();
    pt1->print();
    pt2->print();

    delete pt;

    qDebug() << "pt = " << pt;
    qDebug() << "pt1 = " << pt1;
    qDebug() << "pt2 = " << pt2;

    qDebug() << endl;

    QSharedPointer<Test> spt(new Test("Delphi Tang"));
    QSharedPointer<Test> spt1(spt);
    QSharedPointer<Test> spt2(spt);

    spt->print();
    spt1->print();
    spt2->print();

    return 0;
}

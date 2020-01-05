#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QListWidgetItem>

class Student : public QListWidgetItem
{
public :
    Student() { }

    Student(QString name);

    Student(QString name, QString tx, QString gk);
    ~Student() { }

    void SetName(QString name);
    void SetTX(QString tx);
    void SetGK(QString gk);

    QString GetName() const;
    QString GetTX() const;
    QString GetGK() const;

private :
   QString m_TX;
   QString m_GK;
};


inline void Student::SetName(QString name)
{
    QListWidgetItem::setText(name);
}

inline void Student::SetTX(QString tx)
{
    m_TX = tx;
}

inline void Student::SetGK(QString gk)
{
    m_GK = gk;
}
inline QString Student::GetName() const
{
    return QListWidgetItem::text();
}

inline QString Student::GetTX() const
{
    return m_TX;
}

inline QString Student::GetGK() const
{
    return m_GK;
}

#endif //STUDENT_H

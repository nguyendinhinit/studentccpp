#include "student.h"

Student::Student(QString name)
    :   QListWidgetItem(name)
{

}

Student::Student(QString name, QString tx, QString gk)
    :   QListWidgetItem(name),
        m_TX(tx),
        m_GK(gk)
{

}


#ifndef MYSTUDENTS_H
#define MYSTUDENTS_H

#include <QWidget>
#include "student.h"
#include <QString>
#include <QVector>

namespace Ui {
class MyStudents;
}

class QListWidgetItem;
class StudentDialog;

class MyStudents : public QWidget
{
    Q_OBJECT

public:
    explicit MyStudents(QWidget *parent = 0);
    ~MyStudents();

    void AddStudent(Student* student);
    void AddStudent(QString name);
    void AddStudent(QString name, QString tx, QString gk);

    void RemoveStudent(Student* student);

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MyStudents *ui;

    QVector<Student*> m_Students;

    StudentDialog* m_StudentDialog;
};

#endif // MYSTUDENTS_H

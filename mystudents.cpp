#include "mystudents.h"
#include "ui_mystudents.h"

#include "student.h"
#include <QListWidgetItem>
#include "studentdialog.h"

MyStudents::MyStudents(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyStudents)
{
    ui->setupUi(this);

    m_StudentDialog = new StudentDialog;




}

void MyStudents::AddStudent(Student *student)
{
    ui->listWidget->addItem((QListWidgetItem*) student);
    m_Students.push_back(student);
}

void MyStudents::AddStudent(QString name)
{
    Student* student = new Student(name);
    AddStudent(student);
}

void MyStudents::AddStudent(QString name, QString tx, QString gk)
{
    Student* student = new Student(name, tx, gk);
    AddStudent(student);
}

void MyStudents::RemoveStudent(Student *student)
{
    ui->listWidget->removeItemWidget((QListWidgetItem*) student);

    for(int i=0; i<m_Students.size(); i++)
    {
        if(m_Students[i] == student)
        {
            m_Students.remove(i);
            delete student;
        }
    }
}

void MyStudents::on_listWidget_itemDoubleClicked(QListWidgetItem* item)
{
    m_StudentDialog->Show((Student*) item);
}

MyStudents::~MyStudents()
{
    for(int i=0; i<m_Students.size(); i++)
    {
        RemoveStudent(m_Students[i]);
    }
    delete ui;

    delete m_StudentDialog;
}

void MyStudents::on_pushButton_2_clicked()
{
    RemoveStudent((Student*) ui->listWidget->currentItem());
}

void MyStudents::on_pushButton_clicked()
{
    AddStudent("Giang Hồ Hải Phòng", "15", "16");
}

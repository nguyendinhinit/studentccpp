#include "studentdialog.h"
#include "ui_studentdialog.h"
#include "student.h"

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);

    setWindowTitle(QString::fromUtf8("Bảng Điểm"));
}

void StudentDialog::Show(Student *student)
{
    ui->name->setText(student->GetName());
    ui->tx->setText(student->GetTX());
    ui->gk->setText(student->GetGK());

    m_Student = student;
    show();
}

StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::on_pushButton_released()
{
    m_Student->SetName(ui->name->text());
    m_Student->SetTX(ui->tx->text());
    m_Student->SetGK(ui->gk->text());

    hide();
}

void StudentDialog::on_pushButton_2_released()
{
    hide();
}

#include "mystudents.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyStudents w;
    w.AddStudent("Nguyễn Đình Nguyên", "7", "4");
	w.AddStudent("Nguyễn Văn Huy", "9", "6");
    w.AddStudent("Nguyễn Huy Quang", "7", "6");
    w.AddStudent("Chu Việt Long", "9", "10");
    w.AddStudent("Nguyễn Đức Mạnh", "8", "7");
    w.AddStudent("Nguyễn Văn Quang", "9", "6");

    w.show();

    return a.exec();
}

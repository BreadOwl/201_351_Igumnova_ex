#include "mainwindow.h"

#include <QApplication>
#include <QProcess>
#include <sys/ptrace.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Защита от отладчика
    if (ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 && errno == EPERM) {
        qDebug() << "Процесс находится под отладчиком!";
        return 1;
    }

    return a.exec();
}

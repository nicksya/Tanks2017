#include "widget.h"
#include <QApplication>
#include "battlefield.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BattleField* field = new BattleField();
    Widget w;
    w.show();

    delete field;
    return a.exec();
}

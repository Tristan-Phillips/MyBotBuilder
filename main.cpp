#include <QCoreApplication>
#include "terminalmenu.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<std::string> o = {"Option 1", "Option 2", "Option 3"};
    TerminalMenu menu(o);
    menu.display();
    return a.exec();
}

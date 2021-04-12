#ifndef SETUPTAB_H
#define SETUPTAB_H

#include <QWidget>

namespace Ui {
class SetupTab;
}

namespace MyNamespace
{

    class SetupTab : public QWidget
    {
        Q_OBJECT

    public:
        explicit SetupTab(QWidget *parent = nullptr);
        ~SetupTab();
    private:
        Ui::SetupTab *ui;
    };
}
#endif // SETUPTAB_H

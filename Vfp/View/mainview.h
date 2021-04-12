#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainView; }
QT_END_NAMESPACE

namespace MyNamespace
{
    class SetupTab;

    class MainView : public QMainWindow
    {
        Q_OBJECT

    public:
        MainView(QWidget *parent, SetupTab& setup);
        ~MainView();

    private:
        SetupTab &m_setupTab;
        Ui::MainView *ui;
    };

}
#endif // MAINVIEW_H

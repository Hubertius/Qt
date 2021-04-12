#include <QCoreApplication>
#include <QObject>
#include <QTextStream>
#include <QTranslator>

int main(int argc, char *argv[])
{
    /*
    int x = 20;
    qWarning().nospace() << "Hello console" << 20;
    QString msg("Console World");
    qWarning(qPrintable(msg));
    QTextStream out_stream(stdout);
    out_stream.setFieldWidth(10);// ustawienie szerokości strumienia wyjścia na 10
    out_stream.setPadChar('*');  // 'wypełniacz'
    out_stream << msg << x << "\n";
    out_stream << "\n";
    */

    QCoreApplication a(argc, argv);
    QTextStream out_stream(stdout);
    out_stream << "Tutaj!\n";
    QTranslator translator;
    out_stream << "Tutaj!\n";
    bool result = translator.load("trans_fr");
    if(!result)
    {
        out_stream << "ERROR: Failed to load translation file!";
    }
    else
    {
        a.installTranslator(&translator);
        out_stream << "Tutaj!\n";
    }

    QString msg1 = QObject::tr("Hello my friend");
    QString msg2 = QObject::tr("Goodbye");

    out_stream << msg1 <<  '\n' << msg2 << '\n';

    return a.exec();

}





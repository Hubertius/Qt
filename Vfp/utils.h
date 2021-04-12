#ifndef UTILS_H
#define UTILS_H
#include <QWidget>

namespace MyNamespace{
class Utils
{
public:
    Utils();

    static void DestructorMsg(QString value);
    static void DestructorMsg(QObject *object);
private:
    explicit Utils(const Utils& rhs) = delete;
    Utils& operator= (const Utils& rhs) = delete;
};
}
#endif // UTILS_H



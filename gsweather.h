#ifndef GSWEATHER_H
#define GSWEATHER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Gsweather;
}
QT_END_NAMESPACE

class Gsweather : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gsweather(QWidget *parent = nullptr);
    ~Gsweather() override;

private:
    Ui::Gsweather *ui;
};
#endif // GSWEATHER_H

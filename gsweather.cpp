#include "gsweather.h"
#include "ui_gsweather.h"

Gsweather::Gsweather(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gsweather)
{
    ui->setupUi(this);
}

Gsweather::~Gsweather()
{
    delete ui;
}

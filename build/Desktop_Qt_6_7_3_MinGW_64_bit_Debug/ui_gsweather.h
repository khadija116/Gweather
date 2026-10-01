/********************************************************************************
** Form generated from reading UI file 'gsweather.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSWEATHER_H
#define UI_GSWEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gsweather
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame_2;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gsweather)
    {
        if (Gsweather->objectName().isEmpty())
            Gsweather->setObjectName("Gsweather");
        Gsweather->resize(1291, 641);
        QFont font;
        font.setPointSize(10);
        Gsweather->setFont(font);
        centralwidget = new QWidget(Gsweather);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 321, 561));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 242, 254);\n"
"\n"
"border-radius: 16px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 201, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(15);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 63, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 63, 20));
        label_3->setFont(font2);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 160, 141, 20));
        label_4->setFont(font2);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 210, 101, 20));
        label_5->setFont(font2);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 270, 63, 20));
        label_6->setFont(font2);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 160, 131, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: none;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"padding: 6px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"border: 1px solid #2196F3;\n"
"\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 65, 131, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: none;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"padding: 6px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"border: 1px solid #2196F3;\n"
"\n"
"}"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(170, 210, 131, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: none;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"padding: 6px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"border: 1px solid #2196F3;\n"
"\n"
"}"));
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(170, 110, 131, 31));
        comboBox->setFont(font2);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: 1px solid transparent;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"padding: 6px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox:focus {\n"
"\n"
"border: 1px solid #2196F3;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: 1px solid #ccc;\n"
"\n"
"border-radius: 4px;\n"
"\n"
"outline: none;\n"
"\n"
"selection-background-color: #2196F3;\n"
"\n"
"selection-color: white;\n"
"\n"
"padding: 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"\n"
"padding: 4px 8px;\n"
"\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item:selected,\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
"\n"
"background-color: #2196F3;\n"
"\n"
"color: white;\n"
"\n"
"}"));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(170, 270, 131, 31));
        comboBox_2->setFont(font2);
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: 1px solid transparent;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"padding: 6px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox:focus {\n"
"\n"
"border: 1px solid #2196F3;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: 1px solid #ccc;\n"
"\n"
"border-radius: 4px;\n"
"\n"
"outline: none;\n"
"\n"
"selection-background-color: #2196F3;\n"
"\n"
"selection-color: white;\n"
"\n"
"padding: 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"\n"
"padding: 4px 8px;\n"
"\n"
"border: none;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item:selected,\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
"\n"
"background-color: #2196F3;\n"
"\n"
"color: white;\n"
"\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 410, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(10);
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 410, 111, 41));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(340, 10, 891, 561));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 242, 254);\n"
"\n"
"border-radius: 16px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget = new QTableWidget(frame_2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(60, 110, 731, 291));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        tableWidget->setFont(font4);
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"\n"
"background-color: #fafafa;\n"
"\n"
"color: black;\n"
"\n"
"font-family: \"Times New Roman\";\n"
"\n"
"font-size: 10pt;\n"
"\n"
"font-weight: normal;\n"
"\n"
"padding: 8px;\n"
"\n"
"border: none;\n"
"\n"
"border-right: 1px solid #e0e0e0;\n"
"\n"
"border-bottom: 2px solid #e0e0e0;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTableWidget::item {\n"
"\n"
"color: black;\n"
"\n"
"font-family: \"Times New Roman\";\n"
"\n"
"font-size: 10pt;\n"
"\n"
"padding: 8px;\n"
"\n"
"border-right: 1px solid #f0f0f0;\n"
"\n"
"border-bottom: 1px solid #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTableWidget {\n"
"\n"
"background-color: white;\n"
"\n"
"border: 1px solid #e0e0e0;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"gridline-color: transparent;\n"
"\n"
"}"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(130);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(20, 40, 221, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: none;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"padding: 6px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"border: 1px solid #2196F3;\n"
"\n"
"}"));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 40, 121, 31));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(600, 30, 251, 41));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(50, 430, 171, 41));
        pushButton_5->setFont(font3);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        pushButton_6 = new QPushButton(frame_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(50, 500, 171, 41));
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        lineEdit_5 = new QLineEdit(frame_2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(390, 440, 201, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"background-color: white;\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border: none;\n"
"\n"
"border-radius: 8px;\n"
"\n"
"padding: 6px 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"border: 1px solid #2196F3;\n"
"\n"
"}"));
        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(620, 440, 121, 31));
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        pushButton_8 = new QPushButton(frame_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(760, 440, 121, 31));
        pushButton_8->setFont(font3);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        pushButton_9 = new QPushButton(frame_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(690, 510, 121, 31));
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(58, 124, 255);\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 8px 16px;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(40, 100, 240);\n"
"}"));
        Gsweather->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gsweather);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1291, 28));
        Gsweather->setMenuBar(menubar);
        statusbar = new QStatusBar(Gsweather);
        statusbar->setObjectName("statusbar");
        Gsweather->setStatusBar(statusbar);

        retranslateUi(Gsweather);

        QMetaObject::connectSlotsByName(Gsweather);
    } // setupUi

    void retranslateUi(QMainWindow *Gsweather)
    {
        Gsweather->setWindowTitle(QCoreApplication::translate("Gsweather", "gestion des capteurs", nullptr));
        label->setText(QCoreApplication::translate("Gsweather", "Ajouter un capteur:", nullptr));
        label_2->setText(QCoreApplication::translate("Gsweather", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("Gsweather", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("Gsweather", "Date d'installation:", nullptr));
        label_5->setText(QCoreApplication::translate("Gsweather", "Localisation:", nullptr));
        label_6->setText(QCoreApplication::translate("Gsweather", "Etat:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Gsweather", "Temp\303\251rature", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Gsweather", "An\303\251mom\303\250tre", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Gsweather", "Pluviom\303\250tre", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Gsweather", "Fonctinnel", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Gsweather", "En panne", nullptr));

        pushButton->setText(QCoreApplication::translate("Gsweather", "+ Ajouter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Gsweather", "- Vider", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Gsweather", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Gsweather", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Gsweather", "Date_installation", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Gsweather", "Localisation", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Gsweather", "Etat", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("Gsweather", "Recherche par ID", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Gsweather", "Rechercher", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Gsweather", "Trier par date d'installation", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Gsweather", "Statistique", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Gsweather", "Exporter en PDF", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("Gsweather", "Donner ID du capteur", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Gsweather", "Afficher ", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Gsweather", "Modifier", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Gsweather", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gsweather: public Ui_Gsweather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSWEATHER_H

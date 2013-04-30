/********************************************************************************
** Form generated from reading UI file 'NMEA.ui'
**
** Created: Tue 30. Apr 09:56:10 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NMEA_H
#define UI_NMEA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_NMEA
{
public:
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *NMEA)
    {
        if (NMEA->objectName().isEmpty())
            NMEA->setObjectName(QString::fromUtf8("NMEA"));
        NMEA->resize(400, 300);
        label = new QLabel(NMEA);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 46, 13));
        lineEdit = new QLineEdit(NMEA);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 40, 113, 20));
        lineEdit->setReadOnly(true);

        retranslateUi(NMEA);

        QMetaObject::connectSlotsByName(NMEA);
    } // setupUi

    void retranslateUi(QDialog *NMEA)
    {
        NMEA->setWindowTitle(QApplication::translate("NMEA", "NMEA", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NMEA", "Latitude:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NMEA: public Ui_NMEA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NMEA_H

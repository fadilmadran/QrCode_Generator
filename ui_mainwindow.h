/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *qrcodepixmapLabel;
    QLineEdit *lineEdit;
    QPushButton *generateButton;
    QPushButton *saveFileButton;
    QComboBox *comboBox;
    QLabel *label_2;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(550, 420);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(550, 420));
        MainWindow->setMaximumSize(QSize(550, 420));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 550, 420));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(550, 420));
        centralWidget->setMaximumSize(QSize(550, 420));
        qrcodepixmapLabel = new QLabel(centralWidget);
        qrcodepixmapLabel->setObjectName(QStringLiteral("qrcodepixmapLabel"));
        qrcodepixmapLabel->setGeometry(QRect(40, 80, 300, 300));
        qrcodepixmapLabel->setFrameShape(QFrame::StyledPanel);
        qrcodepixmapLabel->setFrameShadow(QFrame::Sunken);
        qrcodepixmapLabel->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 381, 26));
        QFont font;
        font.setPointSize(10);
        lineEdit->setFont(font);
        generateButton = new QPushButton(centralWidget);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(410, 20, 111, 26));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        generateButton->setFont(font1);
        generateButton->setDefault(true);
        saveFileButton = new QPushButton(centralWidget);
        saveFileButton->setObjectName(QStringLiteral("saveFileButton"));
        saveFileButton->setGeometry(QRect(380, 300, 141, 51));
        saveFileButton->setFont(font1);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(470, 240, 61, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 240, 111, 21));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QRCode Generator", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "http://www.baidu.com/", 0));
        generateButton->setText(QApplication::translate("MainWindow", "Generate", 0));
        saveFileButton->setText(QApplication::translate("MainWindow", "Save imagefile to\n"
"QRCode.png", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "PNG", 0)
         << QApplication::translate("MainWindow", "JPG", 0)
         << QApplication::translate("MainWindow", "BMP", 0)
        );
        comboBox->setCurrentText(QApplication::translate("MainWindow", "PNG", 0));
        label_2->setText(QApplication::translate("MainWindow", "ImageFileType", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

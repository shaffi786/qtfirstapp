/********************************************************************************
** Form generated from reading UI file 'HelloForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOFORM_H
#define UI_HELLOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_HelloForm
{
public:
    QLineEdit *nameEdit;
    QLabel *label;
    QLineEdit *helloEdit;
    QRadioButton *radioButton;
    QTreeView *treeView;
    QListView *listView;
    QProgressBar *progressBar;

    void setupUi(QDialog *HelloForm)
    {
        if (HelloForm->objectName().isEmpty())
            HelloForm->setObjectName(QStringLiteral("HelloForm"));
        HelloForm->resize(603, 501);
        nameEdit = new QLineEdit(HelloForm);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(22, 47, 361, 31));
        label = new QLabel(HelloForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 361, 18));
        helloEdit = new QLineEdit(HelloForm);
        helloEdit->setObjectName(QStringLiteral("helloEdit"));
        helloEdit->setEnabled(true);
        helloEdit->setGeometry(QRect(22, 90, 361, 31));
        helloEdit->setFrame(false);
        helloEdit->setReadOnly(true);
        radioButton = new QRadioButton(HelloForm);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(240, 240, 95, 21));
        treeView = new QTreeView(HelloForm);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 180, 256, 192));
        listView = new QListView(HelloForm);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(310, 310, 256, 192));
        progressBar = new QProgressBar(HelloForm);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(440, 150, 118, 23));
        progressBar->setValue(24);

        retranslateUi(HelloForm);

        QMetaObject::connectSlotsByName(HelloForm);
    } // setupUi

    void retranslateUi(QDialog *HelloForm)
    {
        HelloForm->setWindowTitle(QApplication::translate("HelloForm", "Hello Qt World", nullptr));
        label->setText(QApplication::translate("HelloForm", "Enter your name below", nullptr));
        helloEdit->setText(QString());
        radioButton->setText(QApplication::translate("HelloForm", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloForm: public Ui_HelloForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOFORM_H

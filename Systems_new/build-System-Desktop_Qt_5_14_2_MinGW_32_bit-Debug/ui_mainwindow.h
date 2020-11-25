/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *ss;
    QLabel *esp;
    QLabel *eax;
    QLabel *eip;
    QLabel *cs;
    QLabel *eflags;
    QLabel *esi;
    QLabel *ebp;
    QLabel *ebx;
    QLabel *edx;
    QLabel *edi;
    QLabel *ecx;
    QLabel *ds;
    QLabel *fs;
    QLabel *es;
    QLabel *stack0;
    QLabel *stack1;
    QLabel *stack2;
    QLabel *stack3;
    QLabel *stack4;
    QLabel *stack9;
    QLabel *stack8;
    QLabel *stack5;
    QLabel *stack7;
    QLabel *stack6;
    QLabel *stack14;
    QLabel *stack13;
    QLabel *stack10;
    QLabel *stack12;
    QLabel *stack11;
    QLabel *stack15;
    QLabel *stack16;
    QLabel *label_33;
    QTextBrowser *code;
    QLabel *label_34;
    QLabel *buf;
    QLabel *return_val;
    QLabel *c;
    QLabel *b;
    QLabel *nr;
    QLabel *tty_q;
    QLabel *data;
    QLabel *head;
    QLabel *list;
    QLabel *q_buf;
    QLabel *tail;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1590, 881);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 760, 91, 31));
        ss = new QLabel(centralwidget);
        ss->setObjectName(QString::fromUtf8("ss"));
        ss->setGeometry(QRect(170, 30, 71, 31));
        ss->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        ss->setFrameShape(QFrame::Box);
        ss->setLineWidth(2);
        esp = new QLabel(centralwidget);
        esp->setObjectName(QString::fromUtf8("esp"));
        esp->setGeometry(QRect(250, 30, 71, 31));
        esp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        esp->setFrameShape(QFrame::Box);
        esp->setLineWidth(2);
        eax = new QLabel(centralwidget);
        eax->setObjectName(QString::fromUtf8("eax"));
        eax->setGeometry(QRect(570, 30, 71, 31));
        eax->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        eax->setFrameShape(QFrame::Box);
        eax->setLineWidth(2);
        eip = new QLabel(centralwidget);
        eip->setObjectName(QString::fromUtf8("eip"));
        eip->setGeometry(QRect(490, 30, 71, 31));
        eip->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        eip->setFrameShape(QFrame::Box);
        eip->setLineWidth(2);
        cs = new QLabel(centralwidget);
        cs->setObjectName(QString::fromUtf8("cs"));
        cs->setGeometry(QRect(410, 30, 71, 31));
        cs->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        cs->setFrameShape(QFrame::Box);
        cs->setLineWidth(2);
        eflags = new QLabel(centralwidget);
        eflags->setObjectName(QString::fromUtf8("eflags"));
        eflags->setGeometry(QRect(330, 30, 71, 31));
        eflags->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        eflags->setFrameShape(QFrame::Box);
        eflags->setLineWidth(2);
        esi = new QLabel(centralwidget);
        esi->setObjectName(QString::fromUtf8("esi"));
        esi->setGeometry(QRect(970, 30, 71, 31));
        esi->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        esi->setFrameShape(QFrame::Box);
        esi->setLineWidth(2);
        ebp = new QLabel(centralwidget);
        ebp->setObjectName(QString::fromUtf8("ebp"));
        ebp->setGeometry(QRect(1050, 30, 71, 31));
        ebp->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        ebp->setFrameShape(QFrame::Box);
        ebp->setLineWidth(2);
        ebx = new QLabel(centralwidget);
        ebx->setObjectName(QString::fromUtf8("ebx"));
        ebx->setGeometry(QRect(650, 30, 71, 31));
        ebx->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        ebx->setFrameShape(QFrame::Box);
        ebx->setLineWidth(2);
        edx = new QLabel(centralwidget);
        edx->setObjectName(QString::fromUtf8("edx"));
        edx->setGeometry(QRect(810, 30, 71, 31));
        edx->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        edx->setFrameShape(QFrame::Box);
        edx->setLineWidth(2);
        edi = new QLabel(centralwidget);
        edi->setObjectName(QString::fromUtf8("edi"));
        edi->setGeometry(QRect(890, 30, 71, 31));
        edi->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        edi->setFrameShape(QFrame::Box);
        edi->setLineWidth(2);
        ecx = new QLabel(centralwidget);
        ecx->setObjectName(QString::fromUtf8("ecx"));
        ecx->setGeometry(QRect(730, 30, 71, 31));
        ecx->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        ecx->setFrameShape(QFrame::Box);
        ecx->setLineWidth(2);
        ds = new QLabel(centralwidget);
        ds->setObjectName(QString::fromUtf8("ds"));
        ds->setGeometry(QRect(1130, 30, 71, 31));
        ds->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        ds->setFrameShape(QFrame::Box);
        ds->setLineWidth(2);
        fs = new QLabel(centralwidget);
        fs->setObjectName(QString::fromUtf8("fs"));
        fs->setGeometry(QRect(1290, 30, 71, 31));
        fs->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        fs->setFrameShape(QFrame::Box);
        fs->setLineWidth(2);
        es = new QLabel(centralwidget);
        es->setObjectName(QString::fromUtf8("es"));
        es->setGeometry(QRect(1210, 30, 71, 31));
        es->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        es->setFrameShape(QFrame::Box);
        es->setLineWidth(2);
        stack0 = new QLabel(centralwidget);
        stack0->setObjectName(QString::fromUtf8("stack0"));
        stack0->setGeometry(QRect(690, 150, 131, 31));
        stack0->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack0->setFrameShape(QFrame::Box);
        stack0->setLineWidth(2);
        stack1 = new QLabel(centralwidget);
        stack1->setObjectName(QString::fromUtf8("stack1"));
        stack1->setGeometry(QRect(690, 180, 131, 31));
        stack1->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack1->setFrameShape(QFrame::Box);
        stack1->setLineWidth(2);
        stack2 = new QLabel(centralwidget);
        stack2->setObjectName(QString::fromUtf8("stack2"));
        stack2->setGeometry(QRect(690, 210, 131, 31));
        stack2->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack2->setFrameShape(QFrame::Box);
        stack2->setLineWidth(2);
        stack3 = new QLabel(centralwidget);
        stack3->setObjectName(QString::fromUtf8("stack3"));
        stack3->setGeometry(QRect(690, 240, 131, 31));
        stack3->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack3->setFrameShape(QFrame::Box);
        stack3->setLineWidth(2);
        stack4 = new QLabel(centralwidget);
        stack4->setObjectName(QString::fromUtf8("stack4"));
        stack4->setGeometry(QRect(690, 270, 131, 31));
        stack4->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack4->setFrameShape(QFrame::Box);
        stack4->setLineWidth(2);
        stack9 = new QLabel(centralwidget);
        stack9->setObjectName(QString::fromUtf8("stack9"));
        stack9->setGeometry(QRect(690, 420, 131, 31));
        stack9->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack9->setFrameShape(QFrame::Box);
        stack9->setLineWidth(2);
        stack8 = new QLabel(centralwidget);
        stack8->setObjectName(QString::fromUtf8("stack8"));
        stack8->setGeometry(QRect(690, 390, 131, 31));
        stack8->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack8->setFrameShape(QFrame::Box);
        stack8->setLineWidth(2);
        stack5 = new QLabel(centralwidget);
        stack5->setObjectName(QString::fromUtf8("stack5"));
        stack5->setGeometry(QRect(690, 300, 131, 31));
        stack5->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack5->setFrameShape(QFrame::Box);
        stack5->setLineWidth(2);
        stack7 = new QLabel(centralwidget);
        stack7->setObjectName(QString::fromUtf8("stack7"));
        stack7->setGeometry(QRect(690, 360, 131, 31));
        stack7->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack7->setFrameShape(QFrame::Box);
        stack7->setLineWidth(2);
        stack6 = new QLabel(centralwidget);
        stack6->setObjectName(QString::fromUtf8("stack6"));
        stack6->setGeometry(QRect(690, 330, 131, 31));
        stack6->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack6->setFrameShape(QFrame::Box);
        stack6->setLineWidth(2);
        stack14 = new QLabel(centralwidget);
        stack14->setObjectName(QString::fromUtf8("stack14"));
        stack14->setGeometry(QRect(690, 570, 131, 31));
        stack14->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack14->setFrameShape(QFrame::Box);
        stack14->setLineWidth(2);
        stack13 = new QLabel(centralwidget);
        stack13->setObjectName(QString::fromUtf8("stack13"));
        stack13->setGeometry(QRect(690, 540, 131, 31));
        stack13->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack13->setFrameShape(QFrame::Box);
        stack13->setLineWidth(2);
        stack10 = new QLabel(centralwidget);
        stack10->setObjectName(QString::fromUtf8("stack10"));
        stack10->setGeometry(QRect(690, 450, 131, 31));
        stack10->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack10->setFrameShape(QFrame::Box);
        stack10->setLineWidth(2);
        stack12 = new QLabel(centralwidget);
        stack12->setObjectName(QString::fromUtf8("stack12"));
        stack12->setGeometry(QRect(690, 510, 131, 31));
        stack12->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack12->setFrameShape(QFrame::Box);
        stack12->setLineWidth(2);
        stack11 = new QLabel(centralwidget);
        stack11->setObjectName(QString::fromUtf8("stack11"));
        stack11->setGeometry(QRect(690, 480, 131, 31));
        stack11->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack11->setFrameShape(QFrame::Box);
        stack11->setLineWidth(2);
        stack15 = new QLabel(centralwidget);
        stack15->setObjectName(QString::fromUtf8("stack15"));
        stack15->setGeometry(QRect(690, 600, 131, 31));
        stack15->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack15->setFrameShape(QFrame::Box);
        stack15->setLineWidth(2);
        stack16 = new QLabel(centralwidget);
        stack16->setObjectName(QString::fromUtf8("stack16"));
        stack16->setGeometry(QRect(690, 630, 131, 31));
        stack16->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        stack16->setFrameShape(QFrame::Box);
        stack16->setLineWidth(2);
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(650, 100, 201, 31));
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        label_33->setFrameShape(QFrame::Box);
        label_33->setLineWidth(2);
        label_33->setAlignment(Qt::AlignCenter);
        code = new QTextBrowser(centralwidget);
        code->setObjectName(QString::fromUtf8("code"));
        code->setGeometry(QRect(890, 150, 671, 601));
        label_34 = new QLabel(centralwidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(1080, 100, 201, 31));
        label_34->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        label_34->setFrameShape(QFrame::Box);
        label_34->setLineWidth(2);
        label_34->setAlignment(Qt::AlignCenter);
        buf = new QLabel(centralwidget);
        buf->setObjectName(QString::fromUtf8("buf"));
        buf->setGeometry(QRect(40, 170, 471, 71));
        buf->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        buf->setFrameShape(QFrame::Box);
        buf->setLineWidth(2);
        buf->setAlignment(Qt::AlignCenter);
        return_val = new QLabel(centralwidget);
        return_val->setObjectName(QString::fromUtf8("return_val"));
        return_val->setGeometry(QRect(370, 250, 141, 51));
        return_val->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        return_val->setFrameShape(QFrame::Box);
        return_val->setLineWidth(2);
        c = new QLabel(centralwidget);
        c->setObjectName(QString::fromUtf8("c"));
        c->setGeometry(QRect(40, 320, 141, 51));
        c->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        c->setFrameShape(QFrame::Box);
        c->setLineWidth(2);
        b = new QLabel(centralwidget);
        b->setObjectName(QString::fromUtf8("b"));
        b->setGeometry(QRect(40, 250, 291, 51));
        b->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        b->setFrameShape(QFrame::Box);
        b->setLineWidth(2);
        nr = new QLabel(centralwidget);
        nr->setObjectName(QString::fromUtf8("nr"));
        nr->setGeometry(QRect(370, 320, 141, 51));
        nr->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 200);\n"
"font: 14pt \"Agency FB\";\n"
"font: 18pt \"Agency FB\";"));
        nr->setFrameShape(QFrame::Box);
        nr->setLineWidth(2);
        tty_q = new QLabel(centralwidget);
        tty_q->setObjectName(QString::fromUtf8("tty_q"));
        tty_q->setGeometry(QRect(40, 380, 471, 71));
        tty_q->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"font: 18pt \"Agency FB\";"));
        tty_q->setFrameShape(QFrame::Box);
        tty_q->setLineWidth(2);
        tty_q->setAlignment(Qt::AlignCenter);
        data = new QLabel(centralwidget);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(40, 460, 141, 51));
        data->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"font: 18pt \"Agency FB\";"));
        data->setFrameShape(QFrame::Box);
        data->setLineWidth(2);
        head = new QLabel(centralwidget);
        head->setObjectName(QString::fromUtf8("head"));
        head->setGeometry(QRect(370, 520, 141, 51));
        head->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"font: 18pt \"Agency FB\";"));
        head->setFrameShape(QFrame::Box);
        head->setLineWidth(2);
        list = new QLabel(centralwidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(40, 520, 141, 51));
        list->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"font: 18pt \"Agency FB\";"));
        list->setFrameShape(QFrame::Box);
        list->setLineWidth(2);
        q_buf = new QLabel(centralwidget);
        q_buf->setObjectName(QString::fromUtf8("q_buf"));
        q_buf->setGeometry(QRect(40, 580, 471, 61));
        q_buf->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"font: 18pt \"Agency FB\";"));
        q_buf->setFrameShape(QFrame::Box);
        q_buf->setLineWidth(2);
        tail = new QLabel(centralwidget);
        tail->setObjectName(QString::fromUtf8("tail"));
        tail->setGeometry(QRect(370, 460, 141, 51));
        tail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"font: 18pt \"Agency FB\";"));
        tail->setFrameShape(QFrame::Box);
        tail->setLineWidth(2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1590, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Next Step", nullptr));
        ss->setText(QCoreApplication::translate("MainWindow", "ss:0", nullptr));
        esp->setText(QCoreApplication::translate("MainWindow", "esp:0", nullptr));
        eax->setText(QCoreApplication::translate("MainWindow", "eax:0", nullptr));
        eip->setText(QCoreApplication::translate("MainWindow", "eip:0", nullptr));
        cs->setText(QCoreApplication::translate("MainWindow", "cs:0", nullptr));
        eflags->setText(QCoreApplication::translate("MainWindow", "eflags:0", nullptr));
        esi->setText(QCoreApplication::translate("MainWindow", "esi:0", nullptr));
        ebp->setText(QCoreApplication::translate("MainWindow", "ebp:0", nullptr));
        ebx->setText(QCoreApplication::translate("MainWindow", "ebx:0", nullptr));
        edx->setText(QCoreApplication::translate("MainWindow", "edx:0", nullptr));
        edi->setText(QCoreApplication::translate("MainWindow", "edi:0", nullptr));
        ecx->setText(QCoreApplication::translate("MainWindow", "ecx:0", nullptr));
        ds->setText(QCoreApplication::translate("MainWindow", "ds:0", nullptr));
        fs->setText(QCoreApplication::translate("MainWindow", "fs:0", nullptr));
        es->setText(QCoreApplication::translate("MainWindow", "es:0", nullptr));
        stack0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack4->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack9->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack8->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack7->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack14->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack13->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack12->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack11->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack15->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        stack16->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Stack", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\344\273\243\347\240\201", nullptr));
        buf->setText(QCoreApplication::translate("MainWindow", "buf\357\274\232", nullptr));
        return_val->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236\345\200\274\357\274\232", nullptr));
        c->setText(QCoreApplication::translate("MainWindow", "c:0", nullptr));
        b->setText(QCoreApplication::translate("MainWindow", "b:0", nullptr));
        nr->setText(QCoreApplication::translate("MainWindow", "nr:0", nullptr));
        tty_q->setText(QCoreApplication::translate("MainWindow", "tty_write_queue:", nullptr));
        data->setText(QCoreApplication::translate("MainWindow", "data:0", nullptr));
        head->setText(QCoreApplication::translate("MainWindow", "head:0", nullptr));
        list->setText(QCoreApplication::translate("MainWindow", "proc_list", nullptr));
        q_buf->setText(QCoreApplication::translate("MainWindow", "buf", nullptr));
        tail->setText(QCoreApplication::translate("MainWindow", "tail:0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

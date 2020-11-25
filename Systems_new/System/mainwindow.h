#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTextStream>
#include <QFile>
#include <vector>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    vector<QString> queue[500];
    int vector_top=0, now=0, line_now=0, asm_line=54, traps_line=0, printk_line=0, tty_io_line=0;
    QString file_now, asm_, traps_, tty_, printk_;

};
#endif // MAINWINDOW_H

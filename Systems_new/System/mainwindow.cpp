#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTimer>
#include <iostream>
#include <vector>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //int num, line;
    bool flag=false;
    //QFile fileR("gdb_output_p.txt");
    QFile fileR("D:/C++ files/Systems/build-System-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/debug/gdb_output_p.txt");
    fileR.open(QIODevice::ReadOnly);
    QTextStream in(&fileR);
    QString str;
    str=in.readLine();
    str=in.readLine();
    while(true){
        str=in.readLine();
        //qDebug()<<str<<endl;
        if(str=="" && flag)
            break;
        if(str==""){
            str=in.readLine();
            //qDebug()<<str<<endl;
            if(str=="244")
                flag=true;
            this->vector_top += 1;
            continue;
        }
        this->queue[this->vector_top].push_back(str);
    }
    fileR.close();
    QFile asmm("D:/C++ files/Systems/build-System-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/debug/asm.txt");
    asmm.open(QIODevice::ReadOnly);
    QTextStream asm_in(&asmm);
    asm_=asm_in.readAll();
    asmm.close();
    QFile trapss("D:/C++ files/Systems/build-System-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/debug/traps.txt");
    trapss.open(QIODevice::ReadOnly);
    QTextStream traps_in(&trapss);
    traps_=traps_in.readAll();
    trapss.close();
    QFile printkk("D:/C++ files/Systems/build-System-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/debug/printk.txt");
    printkk.open(QIODevice::ReadOnly);
    QTextStream printk_in(&printkk);
    printk_=printk_in.readAll();
    printkk.close();
    QFile ttyy("D:/C++ files/Systems/build-System-Desktop_Qt_5_14_2_MinGW_32_bit-Debug/debug/tty_io.txt");
    ttyy.open(QIODevice::ReadOnly);
    QTextStream tty_in(&ttyy);
    tty_=tty_in.readAll();
    ttyy.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(now>=vector_top){
        QMessageBox::warning(NULL, "Finish", "End of program!");
        return;
    }
    QString temp;
    temp=queue[now][0].section('\t',0,0);
    if(temp.startsWith("asm.s")){
        ui->pushButton->setEnabled(true);
        ui->File_neme->setText("File_name: asm.s");
        ui->code->setText(asm_);
        line_now=temp.section(' ',1,1).toInt();
        ui->line_num->setText("Line_num:" + temp.section(' ',1,1));
        int length=queue[now].size();
        for(int i=1;i<length;i++){
            temp=queue[now][i].section(' ',0,0);
            if(temp=="ss")
                ui->ss->setText("ss:"+queue[now][i].section(' ',1,1));
            if(temp=="esp")
                ui->esp->setText("esp:"+queue[now][i].section(' ',1,1));
            if(temp=="eflags")
                ui->eflags->setText("eflags:"+queue[now][i].section(' ',1,1));
            if(temp=="cs")
                ui->cs->setText("cs:"+queue[now][i].section(' ',1,1));
            if(temp=="eip")
                ui->eip->setText("eip:"+queue[now][i].section(' ',1,1));
            if(temp=="eax")
                ui->eax->setText("eax:"+queue[now][i].section(' ',1,1));
            if(temp=="ebx")
                ui->ebx->setText("ebx:"+queue[now][i].section(' ',1,1));
            if(temp=="ecx")
                ui->ecx->setText("ecx:"+queue[now][i].section(' ',1,1));
            if(temp=="edx")
                ui->edx->setText("edx:"+queue[now][i].section(' ',1,1));
            if(temp=="edi")
                ui->edi->setText("edi:"+queue[now][i].section(' ',1,1));
            if(temp=="esi")
                ui->esi->setText("esi:"+queue[now][i].section(' ',1,1));
            if(temp=="ebp")
                ui->ebp->setText("ebp:"+queue[now][i].section(' ',1,1));
            if(temp=="ds")
                ui->ds->setText("ds:"+queue[now][i].section(' ',1,1));
            if(temp=="es")
                ui->es->setText("es:"+queue[now][i].section(' ',1,1));
            if(temp=="fs")
                ui->fs->setText("fs:"+queue[now][i].section(' ',1,1));
        }
        if(line_now==22){
            ui->stack0->setText(ui->ss->text().section(':',1,1));
            ui->stack1->setText(ui->esp->text().section(':',1,1));
            ui->stack2->setText(ui->eflags->text().section(':',1,1));
            ui->stack3->setText(ui->cs->text().section(':',1,1));
            ui->stack4->setText(ui->eip->text().section(':',1,1));
        }
        if(line_now==24){
            ui->stack5->setText(ui->eax->text().section(':',1,1));
            ui->stack6->setText(ui->ebx->text().section(':',1,1));
        }
        if(line_now==26){
            ui->stack7->setText(ui->ecx->text().section(':',1,1));
            ui->stack8->setText(ui->edx->text().section(':',1,1));
        }
        if(line_now==28){
            ui->stack9->setText(ui->edi->text().section(':',1,1));
            ui->stack10->setText(ui->esi->text().section(':',1,1));
        }
        if(line_now==30){
            ui->stack11->setText(ui->ebp->text().section(':',1,1));
            ui->stack12->setText(ui->ds->text().section(':',1,1));
        }
        if(line_now==32){
            ui->stack13->setText(ui->es->text().section(':',1,1));
            ui->stack14->setText(ui->fs->text().section(':',1,1));
        }
        if(line_now==34)
            ui->stack15->setText("0");
        if(line_now==36)
            ui->stack16->setText(ui->edx->text().section(':',1,1));
        if(line_now==40){
            ui->stack16->setText("0");
            ui->stack15->setText("0");
        }
        if(line_now==42)
            ui->stack14->setText("0");
        if(line_now==44){
            ui->stack13->setText("0");
            ui->stack12->setText("0");
        }
        if(line_now==46){
            ui->stack11->setText("0");
            ui->stack10->setText("0");
        }
        if(line_now==48){
            ui->stack9->setText("0");
            ui->stack8->setText("0");
        }
        if(line_now==50){
            ui->stack7->setText("0");
            ui->stack6->setText("0");
            ui->stack5->setText("0");
        }
    }

    if(temp.startsWith("traps.c")){
        ui->pushButton->setEnabled(true);
        ui->File_neme->setText("File_name: traps.c");
        ui->code->setText(traps_);
        line_now=temp.section(' ',1,1).toInt();
        ui->line_num->setText("Line_num:" + temp.section(' ',1,1));
        int length=queue[now].size();
        for(int i=1;i<length;i++){
            temp=queue[now][i].section(' ',0,0);
            if(temp=="error_code")
                ui->ec->setText("error_code:"+queue[now][i].section("   ",1,1));
            if(temp=="esp")
                ui->esp_2->setText("esp:"+queue[now][i].section("(long *) ",1,1));
            if(temp=="eax")
                ui->eax_2->setText("eax:"+queue[now][i].section("   ",1,1));
            if(temp=="ebx")
                ui->ebx_2->setText("ebx:"+queue[now][i].section("   ",1,1));
            if(temp=="ecx")
                ui->ecx_2->setText("ecx:"+queue[now][i].section("   ",1,1));
            if(temp=="edx")
                ui->edx_2->setText("edx:"+queue[now][i].section("   ",1,1));
            if(temp=="edi")
                ui->edi_2->setText("edi:"+queue[now][i].section("   ",1,1));
            if(temp=="esi")
                ui->esi_2->setText("esi:"+queue[now][i].section("   ",1,1));
            if(temp=="ebp")
                ui->ebp_2->setText("ebp:"+queue[now][i].section("   ",1,1));
            if(temp=="ds")
                ui->ds_2->setText("ds:"+queue[now][i].section("   ",1,1));
            if(temp=="es")
                ui->es_2->setText("es:"+queue[now][i].section("   ",1,1));
            if(temp=="fs")
                ui->fs_2->setText("fs:"+queue[now][i].section("   ",1,1));
            if(temp=="tr")
                ui->tr->setText("tr:"+queue[now][i].section("  ",1,1));
        }
    }
    if(temp.startsWith("printk.c")){
        ui->pushButton->setEnabled(true);
        ui->File_neme->setText("File_name: printk.c");
        ui->code->setText(printk_);
        line_now=temp.section(' ',1,1).toInt();
        ui->line_num->setText("Line_num:" + temp.section(' ',1,1));
        int length=queue[now].size();
        for(int i=1;i<length;i++){
            temp=queue[now][i].section(' ',0,0);
            if(temp=="buf")
                ui->buf->setText("buf:"+queue[now][i].section("buf  ",1,1));
            if(temp=="i")
                ui->return_val->setText("返回值："+queue[now][i].section("  ",1,1));
        }
    }
    if(temp.startsWith("tty_io.c")){
        ui->File_neme->setText("File_name: tty_io.c");
        ui->code->setText(tty_);
        line_now=temp.section(' ',1,1).toInt();
        ui->line_num->setText("Line_num:" + temp.section(' ',1,1));
        int length=queue[now].size();
        for(int i=1;i<length;i++){
            temp=queue[now][i].section(' ',0,0);
            if(temp=="channel")
                ui->channel->setText("channel:"+queue[now][i].section("   ",1,1));
            if(temp=="nr")
                ui->nr->setText("nr:"+queue[now][i].section("   ",1,1));
            if(temp=="b")
                ui->b->setText("b:"+queue[now][i].section("   ",1,1));
            if(temp=="c")
                ui->c->setText("c:"+queue[now][i].section("   ",1,1));
            if(temp=="\tdata")
                ui->data->setText("data:"+queue[now][i].section(" = ",1,1));
            if(temp=="\thead")
                ui->head->setText("head:"+queue[now][i].section(" = ",1,1));
            if(temp=="\ttail")
                ui->tail->setText("tail:"+queue[now][i].section(" = ",1,1));
            if(temp=="\tproc_list")
                ui->list->setText("proc_list:"+queue[now][i].section(" = ",1,1));
            if(temp=="\tbuf")
                ui->q_buf->setText("buf:"+queue[now][i].section(" = ",1,1));
        }
        now=now+1;
        ui->pushButton->setEnabled(false);
        QTimer::singleShot(500, this, SLOT(on_pushButton_clicked()));
        return;
    }
    now=now+1;
}

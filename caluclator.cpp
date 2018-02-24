#include "caluclator.h"
#include "ui_caluclator.h"
#include "QMessageBox"
#include "QDebug"
unsigned long int a,b,c,d,r;
int m=1,n=1,o=1,p=1;
caluclator::caluclator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::caluclator)
{
    ui->setupUi(this);
}

caluclator::~caluclator()
{
    delete ui;
}

void caluclator::on_push1_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"1");

}

void caluclator::on_push2_clicked()
{
   ui->lineEdit->setText(ui->lineEdit->text() +"2");

}

void caluclator::on_push3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() +"3");
}

void caluclator::on_push4_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"4");
}

void caluclator::on_push5_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"5");
}

void caluclator::on_push6_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"6");
}

void caluclator::on_push7_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"7");
}

void caluclator::on_push8_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"8");
}

void caluclator::on_push9_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"9");

}

void caluclator::on_push0_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text() +"0");
}


void caluclator::on_pushadd_clicked()
{
    a=ui->lineEdit->text().toInt();
    ui->lineEdit->setText("");
    m=0;
    qDebug()<<a;

}

void caluclator::on_pushsub_clicked()
{

    a=ui->lineEdit->text().toInt();
    ui->lineEdit->setText("");
    n=0;
}

void caluclator::on_pushmul_clicked()
{
    a=ui->lineEdit->text().toInt();
     ui->lineEdit->setText("");
     o=0;
}

void caluclator::on_pushdiv_clicked()
{
    a=ui->lineEdit->text().toInt();
     ui->lineEdit->setText("");
     p=0;
}

void caluclator::on_pusheqe_clicked()
{
    r=ui->lineEdit->text().toInt();
     ui->lineEdit->setText("");
    if(a!=0&&r!=0)
    {
        if(m==0)
        {
           ui->lineEdit->setText(QString::number(a+r));
           a=0;
           m=1;
        }
        if(n==0)
        {
           ui->lineEdit->setText(QString::number(a-r));
           a=0;
           n=1;
        }
       if(o==0)
        {
           ui->lineEdit->setText(QString::number(a*r));
           a=0;
           o=1;
        }
        if(p==0)
        {
           ui->lineEdit->setText(QString::number(a/r));
           a=0;
           p=1;
        }
    }
    else
    {
           QMessageBox::warning(this,"warning","Unknown Number is Entered");
           ui->lineEdit->setText("");
           m=n=o=p=1;
    }
}

void caluclator::on_pushc_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"message","Sure To Clear",QMessageBox::Yes | QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
    ui->lineEdit->setText("");
    m=n=o=p=1;
    }
}

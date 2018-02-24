#ifndef CALUCLATOR_H
#define CALUCLATOR_H

#include <QMainWindow>

namespace Ui {
class caluclator;
}

class caluclator : public QMainWindow
{
    Q_OBJECT

public:
    explicit caluclator(QWidget *parent = 0);
    ~caluclator();

private slots:
    void on_push1_clicked();

    void on_push2_clicked();

    void on_push3_clicked();

    void on_push4_clicked();

    void on_push5_clicked();

    void on_push6_clicked();

    void on_push7_clicked();

    void on_push8_clicked();

    void on_push9_clicked();

    void on_push0_clicked();

    void on_pushadd_clicked();

    void on_pushsub_clicked();

    void on_pushmul_clicked();

    void on_pushdiv_clicked();

    void on_pusheqe_clicked();

    void on_pushc_clicked();

private:
    Ui::caluclator *ui;
};

#endif // CALUCLATOR_H

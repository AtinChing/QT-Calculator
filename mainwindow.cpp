#include "mainwindow.h"
#include "ui_mainwindow.h"

QLineEdit* inputField; // The text/input field where all the input is taken in from the user and is calculated.
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    inputField = ui->lineEdit;
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString solve(){
    QString input = inputField->text();
    QString nums = "1234567890";
    QString notNums = "()*/+-"; // Every single character that they can put in which is not a number.
    QString result = ""; // The final result that will be printed onto the calculator.
    bool convWorked; // Whether the conversion worked.
    qint64 convert = input.toInt(&convWorked);
    if(convWorked){
      result = QString::number(convert);
    }
    return result;
}

void MainWindow::on_button9_clicked()
{inputField->insert("9");}

void MainWindow::on_button8_clicked()
{inputField->insert("8");}

void MainWindow::on_button7_clicked()
{
    inputField->insert("7");
}
void MainWindow::on_button6_clicked()
{
    inputField->insert("6");
}
void MainWindow::on_button5_clicked()
{
    inputField->insert("5");
}
void MainWindow::on_button4_clicked()
{
    inputField->insert("4");
}
void MainWindow::on_button3_clicked()
{
    inputField->insert("3");
}
void MainWindow::on_button2_clicked()
{
    inputField->insert("2");
}
void MainWindow::on_button1_clicked()
{
    inputField->insert("1");
}
void MainWindow::on_button0_clicked()
{
    inputField->insert("0");
}

void MainWindow::on_cButton_clicked() // This is the C button that clears all the input.
{
    inputField->clear();
}

void MainWindow::on_backspaceButton_clicked()
{inputField->backspace();}

void MainWindow::on_leftBracketButton_clicked()
{inputField->insert("(");}

void MainWindow::on_rightBracketButton_clicked()
{inputField->insert(")");}

void MainWindow::on_dotButton_clicked()
{inputField->insert(".");}

void MainWindow::on_plusButton_clicked()
{inputField->insert("+");}

void MainWindow::on_minusButton_clicked()
{inputField->insert("-");}

void MainWindow::on_multiplyButton_clicked()
{inputField->insert("*");}

void MainWindow::on_divideButton_clicked()
{inputField->insert("/");}

void MainWindow::on_equalButton_clicked()
{
    inputField->setText(solve()); // Setting the text to the solved answer (to whatever is currently in the input text field).
}

void MainWindow::on_actionClear_triggered()
{inputField->clear();}

void MainWindow::on_actionSolve_triggered()
{inputField->setText(solve());}

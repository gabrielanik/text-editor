#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setAcceptRichText(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_boldButton_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);
    cursor.mergeCharFormat(format);
}



void MainWindow::on_italicButton_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format;
    format.setFontItalic(true);
    cursor.mergeCharFormat(format);
}


void MainWindow::on_underlineButton_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format;
    format.setFontUnderline(true);
    cursor.mergeCharFormat(format);
}


void MainWindow::on_actionNew_File_triggered()
{
    ui->textEdit->clear();
}


void MainWindow::on_actionOpen_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("open file name"), "","HTML Files (*.html);;Text Files (*.txt)");

    if(!fileName.isEmpty()){
        QFile file(fileName);
        if(file.open(QIODevice::ReadOnly|QIODevice::Text)){
            QTextStream in(&file);
            QString fileContent = in.readAll();
            file.close();
            ui->textEdit->setHtml(fileContent);

        }
    }
}


void MainWindow::on_actionSave_File_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("save file name"), "","HTML Files (*.html);;Text Files (*.txt)");

    if(!fileName.isEmpty()){
        QFile file(fileName);
        if(file.open(QIODevice::WriteOnly|QIODevice::Text)){
            QTextStream out(&file);
            QString fileContent = ui->textEdit->toHtml();
            out<<fileContent;
            file.close();

        }
    }
}


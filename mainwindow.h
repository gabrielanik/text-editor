#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QProcess>
#include <QTextEdit>
#include <QString>
#include <QIODevice>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:

    void on_boldButton_clicked();

    void on_italicButton_clicked();

    void on_underlineButton_clicked();

    void on_actionNew_File_triggered();

    void on_actionOpen_File_triggered();

    void on_actionSave_File_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

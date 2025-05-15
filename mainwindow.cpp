#include "mainwindow.h"
#include <QPushButton>
#include <QLabel>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMainWindow *menu = new QMainWindow;
    menu->resize(750, 750);

    QLabel *prompt = new QLabel("Pick a difficulty:", menu);
    prompt->setGeometry(300, 0, 150, 100);

    QPushButton *Easy = new QPushButton("Easy", menu);
    Easy->setGeometry(200, 200, 300, 150);
    QPushButton *Medium = new QPushButton("Medium", menu);
    Medium->setGeometry(200, 350, 300, 150);
    QPushButton *Hard = new QPushButton("Hard", menu);
    Hard->setGeometry(200, 500, 300, 150);

    QMainWindow *board = new QMainWindow;
    board->resize(750, 750);

    QPushButton *Restart = new QPushButton("Restart", board);
    Restart->setGeometry(500, 300, 200, 100);

    for (int row = 0; row < 10; ++row) {
        for (int col = 0; col < 10; ++col) {
            QPushButton *btn = new QPushButton(board);
            btn->setGeometry(225 + col * 25, 25 + row * 25, 25, 25);

            btn->setObjectName(QString('A' + row) + QString::number(col + 1));

            QObject::connect(btn, &QPushButton::clicked, [=]() {
                if (shotGrid[row][col]) {
                    btn->setText("X");
                    return;
                }

                shotGrid[row][col] = true;

                if (shipGrid[row][col]) {
                    btn->setStyleSheet("background-color: lightred;");
                    btn->setText("H");
                }
                else {
                    btn->setStyleSheet("background-color: lightblue;");
                    btn->setText("M");
                }

                btn->setEnabled(false);
            });
        }
    }

    QObject::connect(Easy, &QPushButton::clicked, [=]() {
        menu->close();
        board->show();
    });

    QObject::connect(Medium, &QPushButton::clicked, [=]() {
        menu->close();
        board->show();
    });

    QObject::connect(Hard, &QPushButton::clicked, [=]() {
        menu->close();
        board->show();
    });

    QObject::connect(Restart, &QPushButton::clicked, [=]() {
        board->close();
        menu->show();
    });

    menu->show();
}

MainWindow::~MainWindow() {}

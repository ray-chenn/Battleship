#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <thread>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow menu;
    menu.resize(750, 750);
    menu.show();
    return a.exec();
}

#include "mainwindow.h"
#include "board.h"
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <thread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow menu;
    menu.resize(750, 750);
    QMainWindow board;
    board.resize(750, 750);

    QLabel *prompt = new QLabel("Pick a difficulty:", &menu);
    prompt->setGeometry(300, 0, 100, 100);

    QPushButton *Easy = new QPushButton("Easy", &menu);
    Easy->setGeometry(200, 200, 300, 150);
    QPushButton *Medium = new QPushButton("Medium", &menu);
    Medium->setGeometry(200, 350, 300,150);
    QPushButton *Hard = new QPushButton("Hard", &menu);
    Hard->setGeometry(200, 500, 300, 150);
    QPushButton *Restart = new QPushButton("Restart", &board);
    Restart->setGeometry(500, 300, 200, 100);

    QObject::connect(Easy, &QPushButton::clicked, [&]() {
        menu.close();

        QPushButton *A1 = new QPushButton(&board), *A2 = new QPushButton(&board),
                *A3 = new QPushButton(&board), *A4 = new QPushButton(&board), *A5 = new QPushButton(&board),
                *A6 = new QPushButton(&board), *A7 = new QPushButton(&board), *A8 = new QPushButton(&board),
                *A9 = new QPushButton(&board), *A10 = new QPushButton(&board);
        A1->setGeometry(225, 25, 25, 25); A2->setGeometry(250, 25, 25, 25), A3->setGeometry(275, 25, 25, 25),
                A4->setGeometry(300, 25, 25, 25), A5->setGeometry(325, 25, 25, 25),
                A6->setGeometry(350, 25, 25, 25), A7->setGeometry(375, 25, 25, 25),
                A8->setGeometry(400, 25, 25, 25), A9->setGeometry(425, 25, 25, 25),
                A10->setGeometry(450, 25, 25, 25);
        QPushButton *B1 = new QPushButton(&board), *B2 = new QPushButton(&board),
                *B3 = new QPushButton(&board), *B4 = new QPushButton(&board), *B5 = new QPushButton(&board),
                *B6 = new QPushButton(&board), *B7 = new QPushButton(&board), *B8 = new QPushButton(&board),
                *B9 = new QPushButton(&board), *B10 = new QPushButton(&board);
        B1->setGeometry(225, 50, 25, 25); B2->setGeometry(250, 50, 25, 25), B3->setGeometry(275, 50, 25, 25),
                B4->setGeometry(300, 50, 25, 25), B5->setGeometry(325, 50, 25, 25),
                B6->setGeometry(350, 50, 25, 25), B7->setGeometry(375, 50, 25, 25),
                B8->setGeometry(400, 50, 25, 25), B9->setGeometry(425, 50, 25, 25),
                B10->setGeometry(450, 50, 25, 25);
        QPushButton *C1 = new QPushButton(&board), *C2 = new QPushButton(&board),
                *C3 = new QPushButton(&board), *C4 = new QPushButton(&board), *C5 = new QPushButton(&board),
                *C6 = new QPushButton(&board), *C7 = new QPushButton(&board), *C8 = new QPushButton(&board),
                *C9 = new QPushButton(&board), *C10 = new QPushButton(&board);
        C1->setGeometry(225, 75, 25, 25); C2->setGeometry(250, 75, 25, 25), C3->setGeometry(275, 75, 25, 25),
                C4->setGeometry(300, 75, 25, 25), C5->setGeometry(325, 75, 25, 25),
                C6->setGeometry(350, 75, 25, 25), C7->setGeometry(375, 75, 25, 25),
                C8->setGeometry(400, 75, 25, 25), C9->setGeometry(425, 75, 25, 25),
                C10->setGeometry(450, 75, 25, 25);
        QPushButton *D1 = new QPushButton(&board), *D2 = new QPushButton(&board),
                *D3 = new QPushButton(&board), *D4 = new QPushButton(&board), *D5 = new QPushButton(&board),
                *D6 = new QPushButton(&board), *D7 = new QPushButton(&board), *D8 = new QPushButton(&board),
                *D9 = new QPushButton(&board), *D10 = new QPushButton(&board);
        D1->setGeometry(225, 100, 25, 25); D2->setGeometry(250, 100, 25, 25), D3->setGeometry(275, 100, 25, 25), D4->setGeometry(300, 100, 25, 25),
                D5->setGeometry(325, 100, 25, 25), D6->setGeometry(350, 100, 25, 25),
                D7->setGeometry(375, 100, 25, 25), D8->setGeometry(400, 100, 25, 25),
                D9->setGeometry(425, 100, 25, 25), D10->setGeometry(450, 100, 25, 25);
        QPushButton *E1 = new QPushButton(&board), *E2 = new QPushButton(&board), *E3 = new QPushButton(&board),
                *E4 = new QPushButton(&board), *E5 = new QPushButton(&board), *E6 = new QPushButton(&board),
                *E7 = new QPushButton(&board), *E8 = new QPushButton(&board), *E9 = new QPushButton(&board),
                *E10 = new QPushButton(&board);
        E1->setGeometry(225, 125, 25, 25); E2->setGeometry(250, 125, 25, 25), E3->setGeometry(275, 125, 25, 25),
                E4->setGeometry(300, 125, 25, 25), E5->setGeometry(325, 125, 25, 25),
                E6->setGeometry(350, 125, 25, 25), E7->setGeometry(375, 125, 25, 25),
                E8->setGeometry(400, 125, 25, 25), E9->setGeometry(425, 125, 25, 25),
                E10->setGeometry(450, 125, 25, 25);
        QPushButton *F1 = new QPushButton(&board), *F2 = new QPushButton(&board), *F3 = new QPushButton(&board),
                *F4 = new QPushButton(&board), *F5 = new QPushButton(&board), *F6 = new QPushButton(&board),
                *F7 = new QPushButton(&board), *F8 = new QPushButton(&board), *F9 = new QPushButton(&board),
                *F10 = new QPushButton(&board);
        F1->setGeometry(225, 150, 25, 25); F2->setGeometry(250, 150, 25, 25), F3->setGeometry(275, 150, 25, 25),
                F4->setGeometry(300, 150, 25, 25), F5->setGeometry(325, 150, 25, 25),
                F6->setGeometry(350, 150, 25, 25), F7->setGeometry(375, 150, 25, 25),
                F8->setGeometry(400, 150, 25, 25), F9->setGeometry(425, 150, 25, 25),
                F10->setGeometry(450, 150, 25, 25);
        QPushButton *G1 = new QPushButton(&board), *G2 = new QPushButton(&board),
                *G3 = new QPushButton(&board), *G4 = new QPushButton(&board), *G5 = new QPushButton(&board),
                *G6 = new QPushButton(&board), *G7 = new QPushButton(&board), *G8 = new QPushButton(&board),
                *G9 = new QPushButton(&board), *G10 = new QPushButton(&board);
        G1->setGeometry(225, 175, 25, 25); G2->setGeometry(250, 175, 25, 25),
                G3->setGeometry(275, 175, 25, 25), G4->setGeometry(300, 175, 25, 25),
                G5->setGeometry(325, 175, 25, 25), G6->setGeometry(350, 175, 25, 25),
                G7->setGeometry(375, 175, 25, 25), G8->setGeometry(400, 175, 25, 25),
                G9->setGeometry(425, 175, 25, 25), G10->setGeometry(450, 175, 25, 25);
        QPushButton *H1 = new QPushButton(&board), *H2 = new QPushButton(&board),
                *H3 = new QPushButton(&board), *H4 = new QPushButton(&board), *H5 = new QPushButton(&board),
                *H6 = new QPushButton(&board), *H7 = new QPushButton(&board), *H8 = new QPushButton(&board),
                *H9 = new QPushButton(&board), *H10 = new QPushButton(&board);
        H1->setGeometry(225, 200, 25, 25); H2->setGeometry(250, 200, 25, 25),
                H3->setGeometry(275, 200, 25, 25), H4->setGeometry(300, 200, 25, 25),
                H5->setGeometry(325, 200, 25, 25), H6->setGeometry(350, 200, 25, 25),
                H7->setGeometry(375, 200, 25, 25), H8->setGeometry(400, 200, 25, 25),
                H9->setGeometry(425, 200, 25, 25), H10->setGeometry(450, 200, 25, 25);
        QPushButton *I1 = new QPushButton(&board), *I2 = new QPushButton(&board),
                *I3 = new QPushButton(&board), *I4 = new QPushButton(&board), *I5 = new QPushButton(&board),
                *I6 = new QPushButton(&board), *I7 = new QPushButton(&board), *I8 = new QPushButton(&board),
                *I9 = new QPushButton(&board), *I10 = new QPushButton(&board);
        I1->setGeometry(225, 225, 25, 25); I2->setGeometry(250, 225, 25, 25),
                I3->setGeometry(275, 225, 25, 25), I4->setGeometry(300, 225, 25, 25),
                I5->setGeometry(325, 225, 25, 25), I6->setGeometry(350, 225, 25, 25),
                I7->setGeometry(375, 225, 25, 25), I8->setGeometry(400, 225, 25, 25),
                I9->setGeometry(425, 225, 25, 25), I10->setGeometry(450, 225, 25, 25);
        QPushButton *J1 = new QPushButton(&board), *J2 = new QPushButton(&board),
                *J3 = new QPushButton(&board), *J4 = new QPushButton(&board), *J5 = new QPushButton(&board),
                *J6 = new QPushButton(&board), *J7 = new QPushButton(&board), *J8 = new QPushButton(&board),
                *J9 = new QPushButton(&board), *J10 = new QPushButton(&board);
        J1->setGeometry(225, 250, 25, 25); J2->setGeometry(250, 250, 25, 25),
                J3->setGeometry(275, 250, 25, 25), J4->setGeometry(300, 250, 25, 25),
                J5->setGeometry(325, 250, 25, 25), J6->setGeometry(350, 250, 25, 25),
                J7->setGeometry(375, 250, 25, 25), J8->setGeometry(400, 250, 25, 25),
                J9->setGeometry(425, 250, 25, 25), J10->setGeometry(450, 250, 25, 25);

        board.show();
    });

    QObject::connect(Medium, &QPushButton::clicked, [&]() {
        menu.close();

        QPushButton *A1 = new QPushButton(&board), *A2 = new QPushButton(&board),
                *A3 = new QPushButton(&board), *A4 = new QPushButton(&board), *A5 = new QPushButton(&board),
                *A6 = new QPushButton(&board), *A7 = new QPushButton(&board), *A8 = new QPushButton(&board),
                *A9 = new QPushButton(&board), *A10 = new QPushButton(&board);
        A1->setGeometry(225, 25, 25, 25); A2->setGeometry(250, 25, 25, 25), A3->setGeometry(275, 25, 25, 25),
                A4->setGeometry(300, 25, 25, 25), A5->setGeometry(325, 25, 25, 25),
                A6->setGeometry(350, 25, 25, 25), A7->setGeometry(375, 25, 25, 25),
                A8->setGeometry(400, 25, 25, 25), A9->setGeometry(425, 25, 25, 25),
                A10->setGeometry(450, 25, 25, 25);
        QPushButton *B1 = new QPushButton(&board), *B2 = new QPushButton(&board),
                *B3 = new QPushButton(&board), *B4 = new QPushButton(&board), *B5 = new QPushButton(&board),
                *B6 = new QPushButton(&board), *B7 = new QPushButton(&board), *B8 = new QPushButton(&board),
                *B9 = new QPushButton(&board), *B10 = new QPushButton(&board);
        B1->setGeometry(225, 50, 25, 25); B2->setGeometry(250, 50, 25, 25), B3->setGeometry(275, 50, 25, 25),
                B4->setGeometry(300, 50, 25, 25), B5->setGeometry(325, 50, 25, 25),
                B6->setGeometry(350, 50, 25, 25), B7->setGeometry(375, 50, 25, 25),
                B8->setGeometry(400, 50, 25, 25), B9->setGeometry(425, 50, 25, 25),
                B10->setGeometry(450, 50, 25, 25);
        QPushButton *C1 = new QPushButton(&board), *C2 = new QPushButton(&board),
                *C3 = new QPushButton(&board), *C4 = new QPushButton(&board), *C5 = new QPushButton(&board),
                *C6 = new QPushButton(&board), *C7 = new QPushButton(&board), *C8 = new QPushButton(&board),
                *C9 = new QPushButton(&board), *C10 = new QPushButton(&board);
        C1->setGeometry(225, 75, 25, 25); C2->setGeometry(250, 75, 25, 25), C3->setGeometry(275, 75, 25, 25),
                C4->setGeometry(300, 75, 25, 25), C5->setGeometry(325, 75, 25, 25),
                C6->setGeometry(350, 75, 25, 25), C7->setGeometry(375, 75, 25, 25),
                C8->setGeometry(400, 75, 25, 25), C9->setGeometry(425, 75, 25, 25),
                C10->setGeometry(450, 75, 25, 25);
        QPushButton *D1 = new QPushButton(&board), *D2 = new QPushButton(&board),
                *D3 = new QPushButton(&board), *D4 = new QPushButton(&board), *D5 = new QPushButton(&board),
                *D6 = new QPushButton(&board), *D7 = new QPushButton(&board), *D8 = new QPushButton(&board),
                *D9 = new QPushButton(&board), *D10 = new QPushButton(&board);
        D1->setGeometry(225, 100, 25, 25); D2->setGeometry(250, 100, 25, 25), D3->setGeometry(275, 100, 25, 25), D4->setGeometry(300, 100, 25, 25),
                D5->setGeometry(325, 100, 25, 25), D6->setGeometry(350, 100, 25, 25),
                D7->setGeometry(375, 100, 25, 25), D8->setGeometry(400, 100, 25, 25),
                D9->setGeometry(425, 100, 25, 25), D10->setGeometry(450, 100, 25, 25);
        QPushButton *E1 = new QPushButton(&board), *E2 = new QPushButton(&board), *E3 = new QPushButton(&board),
                *E4 = new QPushButton(&board), *E5 = new QPushButton(&board), *E6 = new QPushButton(&board),
                *E7 = new QPushButton(&board), *E8 = new QPushButton(&board), *E9 = new QPushButton(&board),
                *E10 = new QPushButton(&board);
        E1->setGeometry(225, 125, 25, 25); E2->setGeometry(250, 125, 25, 25), E3->setGeometry(275, 125, 25, 25),
                E4->setGeometry(300, 125, 25, 25), E5->setGeometry(325, 125, 25, 25),
                E6->setGeometry(350, 125, 25, 25), E7->setGeometry(375, 125, 25, 25),
                E8->setGeometry(400, 125, 25, 25), E9->setGeometry(425, 125, 25, 25),
                E10->setGeometry(450, 125, 25, 25);
        QPushButton *F1 = new QPushButton(&board), *F2 = new QPushButton(&board), *F3 = new QPushButton(&board),
                *F4 = new QPushButton(&board), *F5 = new QPushButton(&board), *F6 = new QPushButton(&board),
                *F7 = new QPushButton(&board), *F8 = new QPushButton(&board), *F9 = new QPushButton(&board),
                *F10 = new QPushButton(&board);
        F1->setGeometry(225, 150, 25, 25); F2->setGeometry(250, 150, 25, 25), F3->setGeometry(275, 150, 25, 25),
                F4->setGeometry(300, 150, 25, 25), F5->setGeometry(325, 150, 25, 25),
                F6->setGeometry(350, 150, 25, 25), F7->setGeometry(375, 150, 25, 25),
                F8->setGeometry(400, 150, 25, 25), F9->setGeometry(425, 150, 25, 25),
                F10->setGeometry(450, 150, 25, 25);
        QPushButton *G1 = new QPushButton(&board), *G2 = new QPushButton(&board),
                *G3 = new QPushButton(&board), *G4 = new QPushButton(&board), *G5 = new QPushButton(&board),
                *G6 = new QPushButton(&board), *G7 = new QPushButton(&board), *G8 = new QPushButton(&board),
                *G9 = new QPushButton(&board), *G10 = new QPushButton(&board);
        G1->setGeometry(225, 175, 25, 25); G2->setGeometry(250, 175, 25, 25),
                G3->setGeometry(275, 175, 25, 25), G4->setGeometry(300, 175, 25, 25),
                G5->setGeometry(325, 175, 25, 25), G6->setGeometry(350, 175, 25, 25),
                G7->setGeometry(375, 175, 25, 25), G8->setGeometry(400, 175, 25, 25),
                G9->setGeometry(425, 175, 25, 25), G10->setGeometry(450, 175, 25, 25);
        QPushButton *H1 = new QPushButton(&board), *H2 = new QPushButton(&board),
                *H3 = new QPushButton(&board), *H4 = new QPushButton(&board), *H5 = new QPushButton(&board),
                *H6 = new QPushButton(&board), *H7 = new QPushButton(&board), *H8 = new QPushButton(&board),
                *H9 = new QPushButton(&board), *H10 = new QPushButton(&board);
        H1->setGeometry(225, 200, 25, 25); H2->setGeometry(250, 200, 25, 25),
                H3->setGeometry(275, 200, 25, 25), H4->setGeometry(300, 200, 25, 25),
                H5->setGeometry(325, 200, 25, 25), H6->setGeometry(350, 200, 25, 25),
                H7->setGeometry(375, 200, 25, 25), H8->setGeometry(400, 200, 25, 25),
                H9->setGeometry(425, 200, 25, 25), H10->setGeometry(450, 200, 25, 25);
        QPushButton *I1 = new QPushButton(&board), *I2 = new QPushButton(&board),
                *I3 = new QPushButton(&board), *I4 = new QPushButton(&board), *I5 = new QPushButton(&board),
                *I6 = new QPushButton(&board), *I7 = new QPushButton(&board), *I8 = new QPushButton(&board),
                *I9 = new QPushButton(&board), *I10 = new QPushButton(&board);
        I1->setGeometry(225, 225, 25, 25); I2->setGeometry(250, 225, 25, 25),
                I3->setGeometry(275, 225, 25, 25), I4->setGeometry(300, 225, 25, 25),
                I5->setGeometry(325, 225, 25, 25), I6->setGeometry(350, 225, 25, 25),
                I7->setGeometry(375, 225, 25, 25), I8->setGeometry(400, 225, 25, 25),
                I9->setGeometry(425, 225, 25, 25), I10->setGeometry(450, 225, 25, 25);
        QPushButton *J1 = new QPushButton(&board), *J2 = new QPushButton(&board),
                *J3 = new QPushButton(&board), *J4 = new QPushButton(&board), *J5 = new QPushButton(&board),
                *J6 = new QPushButton(&board), *J7 = new QPushButton(&board), *J8 = new QPushButton(&board),
                *J9 = new QPushButton(&board), *J10 = new QPushButton(&board);
        J1->setGeometry(225, 250, 25, 25); J2->setGeometry(250, 250, 25, 25),
                J3->setGeometry(275, 250, 25, 25), J4->setGeometry(300, 250, 25, 25),
                J5->setGeometry(325, 250, 25, 25), J6->setGeometry(350, 250, 25, 25),
                J7->setGeometry(375, 250, 25, 25), J8->setGeometry(400, 250, 25, 25),
                J9->setGeometry(425, 250, 25, 25), J10->setGeometry(450, 250, 25, 25);

        board.show();
    });

    QObject::connect(Hard, &QPushButton::clicked, [&]() {
        menu.close();

        QPushButton *A1 = new QPushButton(&board), *A2 = new QPushButton(&board),
                *A3 = new QPushButton(&board), *A4 = new QPushButton(&board), *A5 = new QPushButton(&board),
                *A6 = new QPushButton(&board), *A7 = new QPushButton(&board), *A8 = new QPushButton(&board),
                *A9 = new QPushButton(&board), *A10 = new QPushButton(&board);
        A1->setGeometry(225, 25, 25, 25); A2->setGeometry(250, 25, 25, 25), A3->setGeometry(275, 25, 25, 25),
                A4->setGeometry(300, 25, 25, 25), A5->setGeometry(325, 25, 25, 25),
                A6->setGeometry(350, 25, 25, 25), A7->setGeometry(375, 25, 25, 25),
                A8->setGeometry(400, 25, 25, 25), A9->setGeometry(425, 25, 25, 25),
                A10->setGeometry(450, 25, 25, 25);
        QPushButton *B1 = new QPushButton(&board), *B2 = new QPushButton(&board),
                *B3 = new QPushButton(&board), *B4 = new QPushButton(&board), *B5 = new QPushButton(&board),
                *B6 = new QPushButton(&board), *B7 = new QPushButton(&board), *B8 = new QPushButton(&board),
                *B9 = new QPushButton(&board), *B10 = new QPushButton(&board);
        B1->setGeometry(225, 50, 25, 25); B2->setGeometry(250, 50, 25, 25), B3->setGeometry(275, 50, 25, 25),
                B4->setGeometry(300, 50, 25, 25), B5->setGeometry(325, 50, 25, 25),
                B6->setGeometry(350, 50, 25, 25), B7->setGeometry(375, 50, 25, 25),
                B8->setGeometry(400, 50, 25, 25), B9->setGeometry(425, 50, 25, 25),
                B10->setGeometry(450, 50, 25, 25);
        QPushButton *C1 = new QPushButton(&board), *C2 = new QPushButton(&board),
                *C3 = new QPushButton(&board), *C4 = new QPushButton(&board), *C5 = new QPushButton(&board),
                *C6 = new QPushButton(&board), *C7 = new QPushButton(&board), *C8 = new QPushButton(&board),
                *C9 = new QPushButton(&board), *C10 = new QPushButton(&board);
        C1->setGeometry(225, 75, 25, 25); C2->setGeometry(250, 75, 25, 25), C3->setGeometry(275, 75, 25, 25),
                C4->setGeometry(300, 75, 25, 25), C5->setGeometry(325, 75, 25, 25),
                C6->setGeometry(350, 75, 25, 25), C7->setGeometry(375, 75, 25, 25),
                C8->setGeometry(400, 75, 25, 25), C9->setGeometry(425, 75, 25, 25),
                C10->setGeometry(450, 75, 25, 25);
        QPushButton *D1 = new QPushButton(&board), *D2 = new QPushButton(&board),
                *D3 = new QPushButton(&board), *D4 = new QPushButton(&board), *D5 = new QPushButton(&board),
                *D6 = new QPushButton(&board), *D7 = new QPushButton(&board), *D8 = new QPushButton(&board),
                *D9 = new QPushButton(&board), *D10 = new QPushButton(&board);
        D1->setGeometry(225, 100, 25, 25); D2->setGeometry(250, 100, 25, 25), D3->setGeometry(275, 100, 25, 25), D4->setGeometry(300, 100, 25, 25),
                D5->setGeometry(325, 100, 25, 25), D6->setGeometry(350, 100, 25, 25),
                D7->setGeometry(375, 100, 25, 25), D8->setGeometry(400, 100, 25, 25),
                D9->setGeometry(425, 100, 25, 25), D10->setGeometry(450, 100, 25, 25);
        QPushButton *E1 = new QPushButton(&board), *E2 = new QPushButton(&board), *E3 = new QPushButton(&board),
                *E4 = new QPushButton(&board), *E5 = new QPushButton(&board), *E6 = new QPushButton(&board),
                *E7 = new QPushButton(&board), *E8 = new QPushButton(&board), *E9 = new QPushButton(&board),
                *E10 = new QPushButton(&board);
        E1->setGeometry(225, 125, 25, 25); E2->setGeometry(250, 125, 25, 25), E3->setGeometry(275, 125, 25, 25),
                E4->setGeometry(300, 125, 25, 25), E5->setGeometry(325, 125, 25, 25),
                E6->setGeometry(350, 125, 25, 25), E7->setGeometry(375, 125, 25, 25),
                E8->setGeometry(400, 125, 25, 25), E9->setGeometry(425, 125, 25, 25),
                E10->setGeometry(450, 125, 25, 25);
        QPushButton *F1 = new QPushButton(&board), *F2 = new QPushButton(&board), *F3 = new QPushButton(&board),
                *F4 = new QPushButton(&board), *F5 = new QPushButton(&board), *F6 = new QPushButton(&board),
                *F7 = new QPushButton(&board), *F8 = new QPushButton(&board), *F9 = new QPushButton(&board),
                *F10 = new QPushButton(&board);
        F1->setGeometry(225, 150, 25, 25); F2->setGeometry(250, 150, 25, 25), F3->setGeometry(275, 150, 25, 25),
                F4->setGeometry(300, 150, 25, 25), F5->setGeometry(325, 150, 25, 25),
                F6->setGeometry(350, 150, 25, 25), F7->setGeometry(375, 150, 25, 25),
                F8->setGeometry(400, 150, 25, 25), F9->setGeometry(425, 150, 25, 25),
                F10->setGeometry(450, 150, 25, 25);
        QPushButton *G1 = new QPushButton(&board), *G2 = new QPushButton(&board),
                *G3 = new QPushButton(&board), *G4 = new QPushButton(&board), *G5 = new QPushButton(&board),
                *G6 = new QPushButton(&board), *G7 = new QPushButton(&board), *G8 = new QPushButton(&board),
                *G9 = new QPushButton(&board), *G10 = new QPushButton(&board);
        G1->setGeometry(225, 175, 25, 25); G2->setGeometry(250, 175, 25, 25),
                G3->setGeometry(275, 175, 25, 25), G4->setGeometry(300, 175, 25, 25),
                G5->setGeometry(325, 175, 25, 25), G6->setGeometry(350, 175, 25, 25),
                G7->setGeometry(375, 175, 25, 25), G8->setGeometry(400, 175, 25, 25),
                G9->setGeometry(425, 175, 25, 25), G10->setGeometry(450, 175, 25, 25);
        QPushButton *H1 = new QPushButton(&board), *H2 = new QPushButton(&board),
                *H3 = new QPushButton(&board), *H4 = new QPushButton(&board), *H5 = new QPushButton(&board),
                *H6 = new QPushButton(&board), *H7 = new QPushButton(&board), *H8 = new QPushButton(&board),
                *H9 = new QPushButton(&board), *H10 = new QPushButton(&board);
        H1->setGeometry(225, 200, 25, 25); H2->setGeometry(250, 200, 25, 25),
                H3->setGeometry(275, 200, 25, 25), H4->setGeometry(300, 200, 25, 25),
                H5->setGeometry(325, 200, 25, 25), H6->setGeometry(350, 200, 25, 25),
                H7->setGeometry(375, 200, 25, 25), H8->setGeometry(400, 200, 25, 25),
                H9->setGeometry(425, 200, 25, 25), H10->setGeometry(450, 200, 25, 25);
        QPushButton *I1 = new QPushButton(&board), *I2 = new QPushButton(&board),
                *I3 = new QPushButton(&board), *I4 = new QPushButton(&board), *I5 = new QPushButton(&board),
                *I6 = new QPushButton(&board), *I7 = new QPushButton(&board), *I8 = new QPushButton(&board),
                *I9 = new QPushButton(&board), *I10 = new QPushButton(&board);
        I1->setGeometry(225, 225, 25, 25); I2->setGeometry(250, 225, 25, 25),
                I3->setGeometry(275, 225, 25, 25), I4->setGeometry(300, 225, 25, 25),
                I5->setGeometry(325, 225, 25, 25), I6->setGeometry(350, 225, 25, 25),
                I7->setGeometry(375, 225, 25, 25), I8->setGeometry(400, 225, 25, 25),
                I9->setGeometry(425, 225, 25, 25), I10->setGeometry(450, 225, 25, 25);
        QPushButton *J1 = new QPushButton(&board), *J2 = new QPushButton(&board),
                *J3 = new QPushButton(&board), *J4 = new QPushButton(&board), *J5 = new QPushButton(&board),
                *J6 = new QPushButton(&board), *J7 = new QPushButton(&board), *J8 = new QPushButton(&board),
                *J9 = new QPushButton(&board), *J10 = new QPushButton(&board);
        J1->setGeometry(225, 250, 25, 25); J2->setGeometry(250, 250, 25, 25),
                J3->setGeometry(275, 250, 25, 25), J4->setGeometry(300, 250, 25, 25),
                J5->setGeometry(325, 250, 25, 25), J6->setGeometry(350, 250, 25, 25),
                J7->setGeometry(375, 250, 25, 25), J8->setGeometry(400, 250, 25, 25),
                J9->setGeometry(425, 250, 25, 25), J10->setGeometry(450, 250, 25, 25);

        board.show();
    });

     QObject::connect(Restart, &QPushButton::clicked, [&]() {
        board.close();

        menu.show();
    });

    menu.show();
    return a.exec();
}

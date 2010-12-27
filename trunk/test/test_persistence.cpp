/* ===========================================================================
 * Copyright 2010: Valentin Heinitz, www.heinitz-it.de
 * Simple Persistence framework for Qt
 * Author: Valentin Heinitz, 2010-12-24
 * License: GPL, http://www.gnu.org/licenses/gpl.html
 *
 * D E S C R I P T I O N
 * Persistence test project.
 ========================================================================== */
#include "test_persistence.h"
#include "ui_test_persistence.h"
#include <QTimer>
#include <QProcess>
#include <persistence.h>

Test_Persistence::Test_Persistence(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Test_Persistence)
{
    ui->setupUi(this);
    PERSISTENT("MyGeometry", this, "geometry");
    PERSISTENT("MyText", ui->lineEdit, "text");
    PERSISTENT("MyCurrentIndex", ui->comboBox, "currentIndex");
    PERSISTENT("CB1", ui->checkBox1, "checked");
    PERSISTENT("CB2", ui->checkBox2, "checked");
    PERSISTENT("CB3", ui->checkBox3, "checked");
    PERSISTENT("RB1", ui->radioButton1, "checked");
    PERSISTENT("RB2", ui->radioButton2, "checked");
    PERSISTENT("RB3", ui->radioButton3, "checked");
    PERSISTENT("SliderValue", ui->horizontalSlider, "value");
    PERSISTENT("CalDate", ui->calendarWidget, "selectedDate");
}

Test_Persistence::~Test_Persistence()
{
    delete ui;
}

void Test_Persistence::on_actionExit_triggered()
{
    close();
}


void Test_Persistence::on_actionRestart_triggered()
{
    PERSISTENCE_SAVE                       //save persistent items

    QTimer *t = new QTimer(this);          //restart this program
    connect (t,SIGNAL(timeout()),this,SLOT(close()));
    t->start(300);
    QProcess::startDetached ( _cmdLine );
}

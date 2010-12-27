/* ===========================================================================
 * Copyright 2010: Valentin Heinitz, www.heinitz-it.de
 * Simple Persistence framework for Qt
 * Author: Valentin Heinitz, 2010-12-24
 * License: GPL, http://www.gnu.org/licenses/gpl.html
 *
 * D E S C R I P T I O N
 * Persistence test project.
 ========================================================================== */
#ifndef TEST_PERSISTENCE_H
#define TEST_PERSISTENCE_H

#include <QMainWindow>

namespace Ui {
    class Test_Persistence;
}

class Test_Persistence : public QMainWindow
{
    Q_OBJECT

public:
    explicit Test_Persistence(QWidget *parent = 0);
    ~Test_Persistence();
    const QString & cmdLine()const {return  _cmdLine;}
    void setCmdLine( const QString & cmdLine ){ _cmdLine = cmdLine; }

private:
    Ui::Test_Persistence *ui;
    QString _cmdLine;

private slots:
    void on_actionRestart_triggered();
    void on_actionExit_triggered();
};

#endif // TEST_PERSISTENCE_H

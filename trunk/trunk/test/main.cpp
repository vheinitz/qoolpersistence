/* ===========================================================================
 * Copyright 2010: Valentin Heinitz, www.heinitz-it.de
 * Simple Persistence framework for Qt
 * Author: Valentin Heinitz, 2010-12-24
 * License: GPL, http://www.gnu.org/licenses/gpl.html
 *
 * D E S C R I P T I O N
 * Persistence test project.
 ========================================================================== */
#include <QtGui/QApplication>
#include "test_persistence.h"
#include <persistence.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PERSISTENCE_INIT( "MyCompany", "MyAppName" )
    Test_Persistence w;
    w.setCmdLine(argv[0]);

    w.show();

    return a.exec();
}

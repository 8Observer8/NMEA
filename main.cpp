/*
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on April 30, 2013, 9:47 AM
 */

#include <QtGui/QApplication>
#include "NMEA.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    NMEA form;
    form.show();

    return app.exec();
}

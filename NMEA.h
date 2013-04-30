/* 
 * File:   NMEA.h
 * Author: Ivan
 *
 * Created on April 30, 2013, 9:50 AM
 */

#ifndef _NMEA_H
#define	_NMEA_H

#include "ui_NMEA.h"

class NMEA : public QDialog {
    Q_OBJECT
public:
    NMEA();
    virtual ~NMEA();
private:
    Ui::NMEA widget;
};

#endif	/* _NMEA_H */

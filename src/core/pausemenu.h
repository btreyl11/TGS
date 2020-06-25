#ifndef PAUSEMENU_H
#define PAUSEMENU_H

#include <QObject>
#include <QDialog>
#include "basewindow.h"
class basewindow;
class PauseBox : public QDialog
{
public:
    PauseBox(QWidget* parent, basewindow* base);


private:
    QPushButton *m_buttonResume;
    QPushButton *m_buttonSave;
    QPushButton *m_buttonExit;
    basewindow *m_base;
};

#endif // PAUSEMENU_H

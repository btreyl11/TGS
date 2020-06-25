#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QMainWindow>
#include "pausemenu.h"
#include "player.h"
class PauseBox;
namespace Ui { class basewindow; }
class basewindow : public QMainWindow
{
    Q_OBJECT

public:
    basewindow(QWidget *parent = nullptr);
    ~basewindow();

    void keyPressEvent(QKeyEvent *);

public slots:
    void exitSlot();
private:
    Ui::basewindow *ui;
    PauseBox* m_pause;
};
#endif // BASEWINDOW_H

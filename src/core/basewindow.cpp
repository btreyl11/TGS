#include "basewindow.h"
#include "ui_basewindow.h"
#include "pausemenu.h"
#include "player.h"
#include "charactersheet.h"
#include <QKeyEvent>
#include <QSpacerItem>
#include <QHBoxLayout>

basewindow::basewindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::basewindow)
    , m_pause(new PauseBox(this, this))
{
    ui->setupUi(this);

    Player* c = new Player("Brandon", new Health(10,10,10,10), new Stat(10,10,10,10,10,10,10,10,10));
    QWidget* csW = new QWidget(this);
    CharacterSheet *cs = new CharacterSheet(c, csW);
    QHBoxLayout* hl = new QHBoxLayout();
//   /1 hl->addSpacerItem(new QSpacerItem(2,2));
    hl->addWidget(cs);
//    hl->addSpacerItem(new QSpacerItem(2,2));

    csW->setLayout(hl);

    ui->tabWidget->addTab(cs,"Character Sheet");
}

basewindow::~basewindow()
{
    delete ui;
}
void basewindow::exitSlot()
{
   qApp->quit();
}
void basewindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Escape){
        m_pause->exec();
        m_pause->setFocus();
    }
}

#include "pausemenu.h"
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
PauseBox::PauseBox(QWidget *parent, basewindow *base) : QDialog(parent)
  , m_buttonResume(new QPushButton("Resume"))
  , m_buttonSave(new QPushButton("Save"))
  , m_buttonExit(new QPushButton("Exit"))
{
    setWindowTitle("Pause Menu");
    QVBoxLayout *vl = new QVBoxLayout();
    m_base = base;
    this->setLayout(vl);
    QLabel* name = new QLabel("Pause Menu");

    vl->addWidget(name);
    vl->addWidget(m_buttonResume);
    vl->addWidget(m_buttonSave);
    vl->addWidget(m_buttonExit);

    connect(m_buttonExit, SIGNAL(clicked()), base, SLOT(exitSlot()));
}

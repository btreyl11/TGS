#include "charactersheet.h"
#include "ui_charactersheet.h"
#include "player.h"

CharacterSheet::CharacterSheet(Player *ch, QWidget* parent) :
    QWidget(parent),
    ui(new Ui::CharacterSheet),
    m_char(ch)
{
    ui->setupUi(this);
    init();
}

CharacterSheet::~CharacterSheet()
{
    delete ui;
}
void CharacterSheet::init()
{
    if(m_char == nullptr){
        clearSheet();
    }
    else{
        loadCharacter();
    }
}

void CharacterSheet::loadCharacter(){
    ui->phName->setText(m_char->name());


   //Stats
    Stat *s = m_char->stats();
    Health *h = m_char->health();

    ui->phHp->setText(QString::number(h->hp));
    ui->phLp->setText(QString::number(h->lp));
    ui->phMp->setText(QString::number(h->mp));
    ui->phSanity->setText(QString::number(h->sanity));

    ui->phStr->setText(QString::number(s->str));
    ui->phDex->setText(QString::number(s->dex));
    ui->phPow->setText(QString::number(s->pow));
    ui->phCon->setText(QString::number(s->con));
    ui->phSiz->setText(QString::number(s->siz));
    ui->phApp->setText(QString::number(s->app));
    ui->phEdu->setText(QString::number(s->edu));
    ui->phIntel->setText(QString::number(s->intel));
    ui->phMvr->setText(QString::number(s->mvr));


}
void CharacterSheet::clearSheet(){
    ui->phAge->setText("");
    ui->phApp->setText("");
    ui->phCon->setText("");
    ui->phDex->setText("");
    ui->phEdu->setText("");
    ui->phMvr->setText("");
    ui->phPow->setText("");
    ui->phRes->setText("");
    ui->phSex->setText("");
    ui->phSiz->setText("");
    ui->phStr->setText("");
    ui->phName->setText("");
    ui->phBirth->setText("");
    ui->phIntel->setText("");
    ui->phOccup->setText("");
    ui->phPlayer->setText("");
    ui->phHp->setText("");
    ui->phLp->setText("");
    ui->phMp->setText("");
    ui->phSanity->setText("");
    ui->phSpLvl->setText("");
    ui->phCash->setText("");
    ui->phDmgBonus->setText("");
    ui->phBuild->setText("");
    ui->phDodge->setText("");

    ui->incAppButton->setVisible(false);
    ui->incPowButton->setVisible(false);
    ui->incConButton->setVisible(false);
    ui->incDexButton->setVisible(false);
    ui->incEduButton->setVisible(false);
    ui->incIntButton->setVisible(false);
    ui->incMvrButton->setVisible(false);
    ui->incSizButton->setVisible(false);
    ui->incStrButton->setVisible(false);

}

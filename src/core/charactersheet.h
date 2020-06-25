#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H

#include <QWidget>
#include <QTableView>
#include "player.h"
#include "charactersheetmodel.h"
#include "ui_charactersheet.h"

namespace Ui {
class CharacterSheet;
}
class CharacterSheet : public QWidget
{
    Q_OBJECT

public:
    CharacterSheet(Player *ch, QWidget *parent = nullptr);
    ~CharacterSheet();
    void clearSheet();
    void init();
    void loadCharacter();
private:
    Ui::CharacterSheet *ui;
    Character *m_char;
};

#endif // CHARACTERSHEET_H

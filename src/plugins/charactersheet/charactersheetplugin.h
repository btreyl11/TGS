#ifndef CHARACTERSHEETPLUGIN_H
#define CHARACTERSHEETPLUGIN_H
#include <QObject>
#include "charactersheet.h"
class charactersheetplugin : public QObject
{
    Q_OBJECT
    Q_PLUGIN_METADATA("priv.MTG.CharacterSheet")

public:
    charactersheetplugin();

private:
    charactersheetplugin *m_sheet;
};

#endif // CHARACTERSHEETPLUGIN_H

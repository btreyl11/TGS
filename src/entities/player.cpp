#include "player.h"
#include <QMap>
Player::Player()
    : Character()
{

}
int Player::m_count = 0;
Player::Player(QString name, Health *h, Stat *s)
    : Character(name, h, s)
{
    m_count++;
}
void Player::modifyLore(const QString mod, TG::lore_type lore)
{
    switch(lore){
        case TG::Occupation:
            m_lore.occupation = mod;
        break;
    case TG::Birthplace:
            m_lore.birthplace = mod;
        break;
    case TG::Description:
            m_lore.description = mod;
        break;
    case TG::Traits:
            m_lore.traits.push_back(mod);
        break;
    case TG::Ideology:

    default:
        return;
    }
}
void Player::addPossession(const Possession &pos)
{
    Possession *mod = new Possession(pos.name, pos.type, pos.value);
    m_inventory[pos.type] = mod;
}

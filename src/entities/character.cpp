#include "character.h"

Character::Character() : m_name("Bob")
  , m_stats(new Stat(10,10,10,10,10,10,10,10,10))
  , m_health(new Health(7,7,7,7))
{}

Character::Character(QString name, Health *h, Stat *s) :
    m_name(name)
  , m_stats(s)
  , m_health(h)
{}

void Character::modifyHealth(int mod, health_val val){
    switch(val){
    case HIT_POINTS:
        m_health->hp += mod;
        break;
    case  LUCK:
        m_health->lp += mod;
        break;
    case MAGIC:
        m_health->mp += mod;
        break;
    case SANITY:
        m_health->sanity +=mod;
        break;
    }
}

void Character::modifyStats(int mod, stat_val val){
    switch(val){
    case STRENGTH:
        m_stats->str += mod;
        break;
    case DEXT:
        m_stats->dex += mod;
        break;
    case POWER:
        m_stats->pow += mod;
        break;
    case CONS:
        m_stats->con += mod;
        break;
    case SIZE:
        m_stats->siz += mod;
        break;
    case APPEAR:
        m_stats->app += mod;
        break;
    case EDUC:
        m_stats->edu += mod;
        break;
    case INTEL:
        m_stats->intel += mod;
        break;
    case MOVRATE:

        break;
    }
}

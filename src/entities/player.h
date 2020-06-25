#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"
#include <QVector>
#include <QMap>
namespace TG {
    enum possession_type { Clothing, Communication, Entertainment, Lodging
                         , MedicalEquipment, TravelGear, Tools, Transport
                         , Weapons, Ammunition, Misc
                         };
    enum lore_type { Occupation, Birthplace, Description, Traits
                        , Ideology, SignificantPeople, MeaningfulLocation
                        , Treasures, Phobias, MagicalItems, Encounters
                      };
}
struct Lore {
    QString occupation;
    QString birthplace;
    QString description;
    QVector<QString> traits;
    QVector<QString> ideology;
    QVector<QString> sig_people;
    QVector<QString> mean_loc;
    QVector<QString> treasures;
    QVector<QString> phobias;
    QVector<QString> mag_items;
    QVector<QString> encounters;
    int age;
    char sex;
};

struct Possession{
    QString name;
    TG::possession_type type;
    float value;

    Possession(QString n, TG::possession_type t, float v)
        : name(n),
          type(t),
          value(v)
    {

    }
};
struct Skill {
    QString name;
    int points;
};

class Player : public Character
{
public:
    Player();
    Player(QString name, Health *h, Stat *s);
    ~Player();

    int id() const;
    Lore lore() const;
    QMap<TG::possession_type, Possession*> inventory() const;
    QVector<Skill> skills() const;

    void addSkill(const Skill sk);
    void addPossession(const Possession &pos);
    void modifyLore(const QString mod, const TG::lore_type type);

private:
    static int m_count;
    int m_id;
    Lore m_lore;
    QMap<TG::possession_type, Possession*> m_inventory;
    QVector<Skill> m_skills;
};
inline int Player::id() const
{
    return m_id;
}
inline Lore Player::lore() const
{
    return m_lore;
}
inline QMap<TG::possession_type, Possession*> Player::inventory() const
{
    return m_inventory;
}
#endif // PLAYER_H

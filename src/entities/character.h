#ifndef CHARACTER_H
#define CHARACTER_H
#include <QString>
enum health_val{HIT_POINTS, LUCK, MAGIC, SANITY};
enum stat_val{STRENGTH, DEXT, POWER, CONS, SIZE, APPEAR, EDUC, INTEL, MOVRATE};
struct Stat {
    int str;
    int dex;
    int pow;
    int con;
    int siz;
    int app;
    int edu;
    int intel;
    int mvr;
    Stat(const int s, const int d, const int p, const int c,
         const int si, const int a, const int e, const int i,
         const int m) :
        str(s), dex(d), pow(p), con(c), siz(si), app(a), edu(e), intel(i)
      , mvr(m) {}
};
struct Health{
    int hp;
    int lp;
    int mp;
    int sanity;
    Health(const int h, const int l, const int m, const int s) :
        hp(h), lp(l), mp(m), sanity(s){}
};

class Character
{
public:
    Character();
    Character(QString name, Health *h, Stat *s);


    void modifyHealth(int mod, health_val val);
    void modifyStats(int mod, stat_val val);

    Health *health() const;
    Stat *stats() const;
    QString name() const;

protected:
    QString m_name;
    Stat *m_stats;
    Health *m_health;
};
inline Health *Character::health() const
{
    return m_health;
}
inline Stat *Character::stats() const
{
    return m_stats;
}
inline QString Character::name() const
{
    return m_name;
}

#endif // CHARACTER_H

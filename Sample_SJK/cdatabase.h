#ifndef CDATABASE_H
#define CDATABASE_H

#include <QObject>
#include <QWidget>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>
class cDatabase
{
public:
    cDatabase();
    fncreateDb();
};

#endif // CDATABASE_H

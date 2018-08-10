#include "cdatabase.h"

cDatabase::cDatabase()
{
    fncreateDb();
}

cDatabase::fncreateDb()
{
    QString dbName( "SJK_db.db" );
    QSqlDatabase db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName( dbName );
    db.open();
    qDebug() << "DB open";
    QSqlQuery query = QSqlQuery( db );
    query.exec( "CREATE TABLE IF NOT EXISTS imgTable ( filename TEXT, imagedata BLOB )" );
    qDebug() << "Create table";
}


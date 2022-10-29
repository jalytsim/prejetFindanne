#ifndef ACCUEILLE_H
#define ACCUEILLE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QString>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class Accueille; }
QT_END_NAMESPACE

class Accueille : public QMainWindow
{
    Q_OBJECT

public:
    Accueille(QWidget *parent = nullptr);
    ~Accueille();
    QSqlDatabase m_data;
    bool ouverture_data();
    void fermeture_data();
    void afficherTableE();
    void afficheroffreDeFormation();
    void afficheroffreDeStage();
    void afficheroffreDeEtude();
    void afficherEtude();
    void afficherStage();
    void afficherFormation();

private slots:
    void on_valider_clicked();
    void on_offre_clicked();
    void on_employee_clicked();
    void on_apropos_clicked();
    void on_acceuilOffre_clicked();
    void on_acceuilEmployee_clicked();
    void on_acceuilOffre_2_clicked();

    void on_actionquiter_triggered();

private:
    Ui::Accueille *ui;
    QStandardItemModel *modele;
};
#endif // ACCUEILLE_H

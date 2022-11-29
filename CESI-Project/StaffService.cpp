#include "StaffService.h"

SQLServices::StaffService::StaffService(void)
{
    this->cad = gcnew SQLModel::BaseModel();
    this->etudiant = gcnew SQLModel::StaffMapping();
    this->ds = gcnew DataSet();
}

DataSet^ SQLServices::StaffService::staffList(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->etudiant->SELECT(), dataTableName);
    return this->ds;
}

int SQLServices::StaffService::addStaff(String^ nom, String^ prenom, int age, int salarieid)
{
    int etudiantid = 0;
    this->etudiant->setNom(nom);
    this->etudiant->setPrenom(prenom);
    this->etudiant->setAge(age);
    this->etudiant->setSalarieId(salarieid);
    etudiantid = this->cad->actionRowsID(this->etudiant->INSERT());
    return etudiantid;
}

void SQLServices::StaffService::editStaff(int etudiantid, String^ nom, String^ prenom, int age, int salarieid)
{
    String^ sql;
    this->etudiant->setEtudiantId(etudiantid);
    this->etudiant->setNom(nom);
    this->etudiant->setPrenom(prenom);
    this->etudiant->setAge(age);
    this->etudiant->setSalarieId(salarieid);
    sql = this->etudiant->UPDATE();
    this->cad->actionRows(sql);
}

void SQLServices::StaffService::delStaff(int etudiantid)
{
    String^ sql;
    this->etudiant->setEtudiantId(etudiantid);
    sql = this->etudiant->DELETE();
    this->cad->actionRows(sql);
}

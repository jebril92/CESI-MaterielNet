//#include "StaffMapping.h"
//
//SQLModel::StaffMapping::StaffMapping(void)
//{
//    this->etudiantid = -1;
//    this->nom = "Rien";
//    this->prenom = "Rien";
//    this->age = -1;
//    this->salarieid = -1;
//}
//
//String^ SQLModel::StaffMapping::SELECT(void)
//{
//    return "SELECT EtudiantID, Nom, Prenom, Age FROM [APPES].[dbo].[ETUDIANT];";
//}
//
//String^ SQLModel::StaffMapping::INSERT(void)
//{
//    return "INSERT INTO [APPES].[dbo].[ETUDIANT](Nom,Prenom,Age,SalarieID) VALUES ('" + this->getNom() + "','" + this->getPrenom() + "'," + this->getAge() + "," + this->getSalarieId() + ");SELECT @@IDENTITY;";
//}
//
//String^ SQLModel::StaffMapping::UPDATE(void)
//{
//    return "UPDATE [APPES].[dbo].[ETUDIANT] SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', Age = " + this->getAge() + ", SalarieID = " + this->getSalarieId() + " WHERE(EtudiantID = " + this->getEtudiantId() + ");";
//}
//
//String^ SQLModel::StaffMapping::DELETE(void)
//{
//    return "DELETE FROM [APPES].[dbo].[ETUDIANT] WHERE(EtudiantID = " + this->getEtudiantId() + ");";
//}
//
//void SQLModel::StaffMapping::setEtudiantId(int etudiantid)
//{
//    if (etudiantid > 0)
//    {
//        this->etudiantid = etudiantid;
//    }
//}
//
//void SQLModel::StaffMapping::setNom(String^ nom)
//{
//    if (nom != "")
//    {
//        this->nom = nom;
//    }
//}
//
//void SQLModel::StaffMapping::setPrenom(String^ prenom)
//{
//    if (prenom != "")
//    {
//        this->prenom = prenom;
//    }
//}
//
//void SQLModel::StaffMapping::setAge(int age)
//{
//    if (age > 0)
//    {
//        this->age = age;
//    }
//}
//
//void SQLModel::StaffMapping::setSalarieId(int salarieid)
//{
//    if (salarieid > 0)
//    {
//        this->salarieid = salarieid;
//    }
//}
//
//int SQLModel::StaffMapping::getEtudiantId(void)
//{
//    return this->etudiantid;
//}
//
//String^ SQLModel::StaffMapping::getNom(void)
//{
//    return this->nom;
//}
//
//String^ SQLModel::StaffMapping::getPrenom(void)
//{
//    return this->prenom;
//}
//
//int SQLModel::StaffMapping::getAge(void)
//{
//    return this->age;
//}
//
//int SQLModel::StaffMapping::getSalarieId(void)
//{
//    return this->salarieid;
//}

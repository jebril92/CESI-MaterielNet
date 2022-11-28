#include "StaffManagement.h"

NS_Composants::CL_map_TBSALARIE::CL_map_TBSALARIE(void)
{
    this->salarieId = -1;
    this->nentreprise = "Rien";
}

String^ NS_Composants::CL_map_TBSALARIE::SELECT(void)
{
    return "SELECT SalarieID FROM [APPES].[dbo].[Etudiant]";
}

String^ NS_Composants::CL_map_TBSALARIE::INSERT(void)
{
    return "INSERT [APPES].[dbo].[Etudiant](SalarieID, NEntreprise) VALUES ('" + this->getSalarieID() + "','" + this->getNEntreprise() + "'); SELECT @@IDENTITY;";
}

String^ NS_Composants::CL_map_TBSALARIE::UPDATE(void)
{
    return "UPDATE [APPES].[dbo].[Etudiant] SET SalarieID = '" + this->getSalarieID() + "', NEntreprise'" + this->getNEntreprise() + "' WHERE(SalarieID = '" + this->getSalarieID() + "');";
}

String^ NS_Composants::CL_map_TBSALARIE::DELETE(void)
{
    return "DELETE FROM [APPES].[dbo].[Etudiant] WHERE(SalarieID = " + this->getSalarieID() + ");";
}

void NS_Composants::CL_map_TBSALARIE::setSalarieID(int salarieid)
{
    if (salarieid > 0)
    {
        this->salarieId = salarieid;
    }
}

void NS_Composants::CL_map_TBSALARIE::setNEntreprise(String^ nentreprise)
{
    if (nentreprise != "")
    {
        this->nentreprise = nentreprise;
    }
}

int NS_Composants::CL_map_TBSALARIE::getSalarieID(void)
{
    return this->salarieId;
}

String^ NS_Composants::CL_map_TBSALARIE::getNEntreprise(void)
{
    return this->nentreprise;
}

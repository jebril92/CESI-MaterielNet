//#include "BaseModel.h"
//
//void SQLModel::BaseModel::setSQL(String^ rq_sql)
//{
//	if (rq_sql == "" || rq_sql == "Nothing")
//	{
//		this->rq_sql = "Nothing";
//	}
//	else
//	{
//		this->rq_sql = rq_sql;
//	}
//}
//
//SQLModel::BaseModel::BaseModel(void)
//{
//	this->rq_sql = "Nothing";
//	this->cnx = "Data Source=localhost\\SQLExpress;Initial Catalog=MaterielNet;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";
//	this->CNX = gcnew System::Data::SqlClient::SqlConnection(this->cnx);
//	this->CMD = gcnew System::Data::SqlClient::SqlCommand(this->rq_sql, this->CNX);
//	this->CMD->CommandType = System::Data::CommandType::Text;
//}
//
//int SQLModel::BaseModel::actionRowsID(String^ rq_sql)
//{
//	int id;
//	this->setSQL(rq_sql);
//	this->CMD->CommandText = this->rq_sql;
//	this->CNX->Open();
//	id = Convert::ToInt32(this->CMD->ExecuteScalar());
//	this->CNX->Close();
//	return id;
//}
//
//void SQLModel::BaseModel::actionRows(String^ rq_sql)
//{
//	this->setSQL(rq_sql);
//	this->CMD->CommandText = this->rq_sql;
//	this->CNX->Open();
//	this->CMD->ExecuteNonQuery();
//	this->CNX->Close();
//}
//
//DataSet^ SQLModel::BaseModel::getRows(String^ rq_sql, String^ dataTableName)
//{
//	this->setSQL(rq_sql);
//	this->DA = gcnew System::Data::SqlClient::SqlDataAdapter(this->CMD);
//	this->CMD->CommandText = this->rq_sql;
//	this->DS = gcnew System::Data::DataSet();
//	this->DA->Fill(this->DS, dataTableName);
//	return this->DS;
//}

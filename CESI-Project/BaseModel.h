//using namespace System::Data;
//using namespace System::Data::SqlClient;
//using namespace System::Xml;
//using namespace System;
//using namespace MySql::Data::MySqlClient;
//
//
//namespace SQLModel
//{
//	ref class BaseModel
//	{
//	private:
//		String^ cnx;
//		String^ rq_sql;
//		SqlConnection^ CNX;
//		SqlCommand^ CMD;
//		SqlDataAdapter^ DA;
//		DataSet^ DS;
//		void setSQL(String^);
//
//	public:
//		BaseModel(void);
//		int actionRowsID(String^);
//		void actionRows(String^);
//		DataSet^ getRows(String^, String^);
//	};
//}
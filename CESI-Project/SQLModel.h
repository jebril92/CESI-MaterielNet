//#pragma once
//
//using namespace System::Data;
//using namespace System::Data::SqlClient;
//using namespace System::Xml;
//using namespace System;
//
//namespace SQLQueries
//{
//	ref class SQLModel
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
//		SQLModel(void);
//		int actionRowsID(String^);
//		void actionRows(String^);
//		DataSet^ getRows(String^, String^);
//	};
//}
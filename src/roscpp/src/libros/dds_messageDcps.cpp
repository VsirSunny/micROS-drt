//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: dds_messageDcps.cpp
//  Source: dds_messageDcps.idl
//  Generated: Wed Aug  5 20:37:35 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "ros/dds_messageDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < ROSDDS::Msg, struct MsgSeq_uniq_>;
#endif

const char * ROSDDS::MsgTypeSupportInterface::_local_id = "IDL:ROSDDS/MsgTypeSupportInterface:1.0";

ROSDDS::MsgTypeSupportInterface_ptr ROSDDS::MsgTypeSupportInterface::_duplicate (ROSDDS::MsgTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ROSDDS::MsgTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, ROSDDS::MsgTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ROSDDS::MsgTypeSupportInterface_ptr ROSDDS::MsgTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (ROSDDS::MsgTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < ROSDDS::MsgTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ROSDDS::MsgTypeSupportInterface_ptr ROSDDS::MsgTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgTypeSupportInterface_ptr result;
   result = dynamic_cast < ROSDDS::MsgTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ROSDDS::MsgDataWriter::_local_id = "IDL:ROSDDS/MsgDataWriter:1.0";

ROSDDS::MsgDataWriter_ptr ROSDDS::MsgDataWriter::_duplicate (ROSDDS::MsgDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ROSDDS::MsgDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, ROSDDS::MsgDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ROSDDS::MsgDataWriter_ptr ROSDDS::MsgDataWriter::_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgDataWriter_ptr result = NULL;
   if (p && p->_is_a (ROSDDS::MsgDataWriter::_local_id))
   {
      result = dynamic_cast < ROSDDS::MsgDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ROSDDS::MsgDataWriter_ptr ROSDDS::MsgDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgDataWriter_ptr result;
   result = dynamic_cast < ROSDDS::MsgDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ROSDDS::MsgDataReader::_local_id = "IDL:ROSDDS/MsgDataReader:1.0";

ROSDDS::MsgDataReader_ptr ROSDDS::MsgDataReader::_duplicate (ROSDDS::MsgDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ROSDDS::MsgDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, ROSDDS::MsgDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ROSDDS::MsgDataReader_ptr ROSDDS::MsgDataReader::_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgDataReader_ptr result = NULL;
   if (p && p->_is_a (ROSDDS::MsgDataReader::_local_id))
   {
      result = dynamic_cast < ROSDDS::MsgDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ROSDDS::MsgDataReader_ptr ROSDDS::MsgDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgDataReader_ptr result;
   result = dynamic_cast < ROSDDS::MsgDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ROSDDS::MsgDataReaderView::_local_id = "IDL:ROSDDS/MsgDataReaderView:1.0";

ROSDDS::MsgDataReaderView_ptr ROSDDS::MsgDataReaderView::_duplicate (ROSDDS::MsgDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ROSDDS::MsgDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, ROSDDS::MsgDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

ROSDDS::MsgDataReaderView_ptr ROSDDS::MsgDataReaderView::_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgDataReaderView_ptr result = NULL;
   if (p && p->_is_a (ROSDDS::MsgDataReaderView::_local_id))
   {
      result = dynamic_cast < ROSDDS::MsgDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ROSDDS::MsgDataReaderView_ptr ROSDDS::MsgDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   ROSDDS::MsgDataReaderView_ptr result;
   result = dynamic_cast < ROSDDS::MsgDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}




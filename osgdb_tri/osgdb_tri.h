#pragma once

#include <iostream>
#include <osgDB/ReadFile>
#include <osgDB/FileNameUtils>
#include <osgDB/FileUtils>
#include <osgUtil/SmoothingVisitor>

#ifndef READER_WRITER_TRI_H
#define READER_WRITER_TRI_H

class ReaderWriterTRI : public osgDB::ReaderWriter
{
public:
	ReaderWriterTRI();

	virtual ReadResult readNode(
		const std::string&, const osgDB::ReaderWriter::Options*) const;
	virtual ReadResult readNode(
		std::istream&, const osgDB::ReaderWriter::Options*) const;
};

#endif // !READER_WRITER_TRI_H
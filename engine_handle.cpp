#include "engine_handle.h"

BaseHandle::BaseHandle(){}
BaseHandle::~BaseHandle(){}


EngineHandle::EngineHandle()
{
    this->HandleID = QUuid::createUuid();
}
EngineHandle::~EngineHandle(){}


ImageHandle::ImageHandle()
{
    this->HandleID = QUuid::createUuid();
}
ImageHandle::~ImageHandle(){}

#ifndef ENGINE_ENTITY_H
#define ENGINE_ENTITY_H

#include <quuid.h>
#include <QVector>

class BaseHandle
//For each entity
{
public:
    QUuid HandleID;
    BaseHandle();
    virtual ~BaseHandle();
private:
};


class EngineHandle : public BaseHandle
{
public:
    EngineHandle();
    ~EngineHandle();
private:
};


class ImageHandle : public BaseHandle
{

public:
    QVector<int> image_resolution;
    QString image_filename;
    QString image_label;

    ImageHandle();
    ~ImageHandle();
};


#endif // ENGINE_ENTITY_H

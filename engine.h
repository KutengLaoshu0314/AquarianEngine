#ifndef ENGINE_H
#define ENGINE_H

#include "engine_setting.h"
#include "engine_timeline.h"
#include "engine_controller.h"
#include "engine_handle.h"

class Engine
{
    EngineSetting Setting;
    EngineTimeline Timeline;
    EngineController Contriller;
    EngineHandle Handle;

public:

    QUuid handle();
    Engine();
    ~Engine();
};

#endif // ENGINE_H

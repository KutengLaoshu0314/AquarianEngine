#include "engine.h"

Engine::Engine()
{
    this->Handle = EngineHandle();

}
Engine::~Engine(){}


QUuid Engine::handle()
{
    return this->Handle.HandleID;
}

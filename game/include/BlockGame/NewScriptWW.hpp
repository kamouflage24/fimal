#pragma once

#include <Canis/Entity.hpp>

namespace Canis
{
    class App;
}

namespace BlockGame
{
    class NewScriptWW : public Canis::ScriptableEntity
    {
    public:
        static constexpr const char* ScriptName = "BlockGame::NewScriptWW";

        explicit NewScriptWW(Canis::Entity& _entity) : Canis::ScriptableEntity(_entity) {}

        void Create() override;
        void Ready() override;
        void Destroy() override;
        void Update(float _dt) override;
    };

    void RegisterNewScriptWWScript(Canis::App& _app);
    void UnRegisterNewScriptWWScript(Canis::App& _app);
}

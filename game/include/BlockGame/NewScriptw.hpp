#pragma once

#include <Canis/Entity.hpp>

namespace Canis
{
    class App;
}

namespace BlockGame
{
    class NewScriptw : public Canis::ScriptableEntity
    {
    public:
        static constexpr const char* ScriptName = "BlockGame::NewScriptw";

        explicit NewScriptw(Canis::Entity& _entity) : Canis::ScriptableEntity(_entity) {}

        void Create() override;
        void Ready() override;
        void Destroy() override;
        void Update(float _dt) override;
    };

    void RegisterNewScriptwScript(Canis::App& _app);
    void UnRegisterNewScriptwScript(Canis::App& _app);
}

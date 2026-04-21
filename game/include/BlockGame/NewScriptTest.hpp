#pragma once

#include <Canis/Entity.hpp>

namespace Canis
{
    class App;
}

namespace BlockGame
{
    class NewScriptTest : public Canis::ScriptableEntity
    {
    public:
        static constexpr const char* ScriptName = "BlockGame::NewScriptTest";

        explicit NewScriptTest(Canis::Entity& _entity) : Canis::ScriptableEntity(_entity) {}

        void Create() override;
        void Ready() override;
        void Destroy() override;
        void Update(float _dt) override;
    };

    void RegisterNewScriptTestScript(Canis::App& _app);
    void UnRegisterNewScriptTestScript(Canis::App& _app);
}

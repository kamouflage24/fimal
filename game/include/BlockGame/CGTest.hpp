#pragma once

#include <Canis/Entity.hpp>

namespace Canis
{
    class App;
}

namespace BlockGame
{
    class CGTest : public Canis::ScriptableEntity
    {
    public:
        static constexpr const char* ScriptName = "BlockGame::CGTest";

        explicit CGTest(Canis::Entity& _entity) : Canis::ScriptableEntity(_entity) {}

        void Create() override;
        void Ready() override;
        void Destroy() override;
        void Update(float _dt) override;
    };

    void RegisterCGTestScript(Canis::App& _app);
    void UnRegisterCGTestScript(Canis::App& _app);
}

#pragma once

#include <Canis/Entity.hpp>

namespace Canis
{
    class App;
}

namespace RollABall
{
    class Testhy : public Canis::ScriptableEntity
    {
    public:
        static constexpr const char* ScriptName = "RollABall::Testhy";

        explicit Testhy(Canis::Entity& _entity) : Canis::ScriptableEntity(_entity) {}

        void Create() override;
        void Ready() override;
        void Destroy() override;
        void Update(float _dt) override;
    };

    void RegisterTesthyScript(Canis::App& _app);
    void UnRegisterTesthyScript(Canis::App& _app);
}

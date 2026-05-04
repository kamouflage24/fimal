#pragma once

#include <Canis/Entity.hpp>

namespace Canis
{
    class App;
}

namespace BlockGame
{
    class FireTest : public Canis::ScriptableEntity
    {
    public:
        static constexpr const char* ScriptName = "BlockGame::FireTest";

        //Canis::Entity* hideObject = nullptr;

        explicit FireTest(Canis::Entity& _entity) : Canis::ScriptableEntity(_entity) {}

        void Create() override;
        void Ready() override;
        void Destroy() override;
        void Update(float _dt) override;
    private:
        static constexpr int FIRE_FRAME_COUNT = 4;
        static constexpr float FIRE_FRAME_DURATION = 0.5f;
        float elapsedTime = 0.0f;
        float frameTime = 0.0f;
        int currentFrame = 0;
        i32 fireFrameTextureIds[FIRE_FRAME_COUNT];
        
    };

    void RegisterFireTestScript(Canis::App& _app);
    void UnRegisterFireTestScript(Canis::App& _app);
}

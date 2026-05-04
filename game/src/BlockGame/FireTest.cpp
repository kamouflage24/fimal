#include <BlockGame/FireTest.hpp>

#include <Canis/App.hpp>
#include <Canis/ConfigHelper.hpp>
#include <Canis/AssetManager.hpp>
#include <Canis/Time.hpp>
namespace BlockGame
{
    namespace
    {
        Canis::ScriptConf scriptConf = {};
    }

    void RegisterFireTestScript(Canis::App& _app)
    {
       // REGISTER_PROPERTY(scriptConf, BlockGame::FireTest, hideObject);

        DEFAULT_CONFIG(scriptConf, BlockGame::FireTest);

        scriptConf.DEFAULT_DRAW_INSPECTOR(BlockGame::FireTest);

        _app.RegisterScript(scriptConf);
    }

    DEFAULT_UNREGISTER_SCRIPT(scriptConf, FireTest)

    void FireTest::Create() {}

    void FireTest::Ready() {
        
        fireFrameTextureIds[0] = AssetManager::LoadTexture("assets/textures/fire_textures/fire_1.png");
        fireFrameTextureIds[1] = AssetManager::LoadTexture("assets/textures/fire_textures/fire_2.png");
        fireFrameTextureIds[2] = AssetManager::LoadTexture("assets/textures/fire_textures/fire_3.png");
        fireFrameTextureIds[3] = AssetManager::LoadTexture("assets/textures/fire_textures/fire_4.png");
        entity.GetComponent<Material>().materialFields.SetTexture("albedoFireAnimMap", fireFrameTextureIds[currentFrame]);
    }

    void FireTest::Destroy() {}

    void FireTest::Update(float _dt) {
            elapsedTime += _dt;
            frameTime += _dt;

            if (frameTime >= FIRE_FRAME_DURATION)
            {
                frameTime = 0.0f;
                currentFrame = (currentFrame + 1) % FIRE_FRAME_COUNT;
                entity.GetComponent<Material>().materialFields.SetTexture("albedoFireAnimMap", fireFrameTextureIds[currentFrame]);
            }

            entity.GetComponent<Material>().materialFields.SetFloat("time", elapsedTime);
    }
}
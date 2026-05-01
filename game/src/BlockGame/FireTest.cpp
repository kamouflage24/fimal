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
        
        
        i32 textureId = AssetManager::LoadTexture("assets/textures/fire_textures/fire_1.png");
        i32 materialId = entity.GetComponent<Material>().materialId;
        //MaterialAsset* material = AssetManager::GetMaterial(materialId);
        //material->albedoId = textureId;
        entity.GetComponent<Material>().materialFields.SetTexture("albedoFireMap", textureId);
    }

    void FireTest::Destroy() {}

    void FireTest::Update(float _dt) {
            elapsedTime += _dt;
            entity.GetComponent<Material>().materialFields.SetFloat("time", elapsedTime);
    }
}
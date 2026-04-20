#include <BlockGame/CGTest.hpp>

#include <Canis/App.hpp>
#include <Canis/ConfigHelper.hpp>

namespace BlockGame
{
    namespace
    {
        Canis::ScriptConf scriptConf = {};
    }

    void RegisterCGTestScript(Canis::App& _app)
    {
        // REGISTER_PROPERTY(scriptConf, BlockGame::CGTest, exampleProperty);

        DEFAULT_CONFIG(scriptConf, BlockGame::CGTest);

        scriptConf.DEFAULT_DRAW_INSPECTOR(BlockGame::CGTest);

        _app.RegisterScript(scriptConf);
    }

    DEFAULT_UNREGISTER_SCRIPT(scriptConf, CGTest)

    void CGTest::Create() {}

    void CGTest::Ready() {}

    void CGTest::Destroy() {}

    void CGTest::Update(float) {}
}

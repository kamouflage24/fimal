#include <BlockGame/NewScriptTest.hpp>

#include <Canis/App.hpp>
#include <Canis/ConfigHelper.hpp>

namespace BlockGame
{
    namespace
    {
        Canis::ScriptConf scriptConf = {};
    }

    void RegisterNewScriptTestScript(Canis::App& _app)
    {
        // REGISTER_PROPERTY(scriptConf, BlockGame::NewScriptTest, exampleProperty);

        DEFAULT_CONFIG(scriptConf, BlockGame::NewScriptTest);

        scriptConf.DEFAULT_DRAW_INSPECTOR(BlockGame::NewScriptTest);

        _app.RegisterScript(scriptConf);
    }

    DEFAULT_UNREGISTER_SCRIPT(scriptConf, NewScriptTest)

    void NewScriptTest::Create() {}

    void NewScriptTest::Ready() {}

    void NewScriptTest::Destroy() {}

    void NewScriptTest::Update(float) {}
}

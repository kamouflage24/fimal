#include <BlockGame/NewScript.hpp>

#include <Canis/App.hpp>
#include <Canis/ConfigHelper.hpp>

namespace BlockGame
{
    namespace
    {
        Canis::ScriptConf scriptConf = {};
    }

    void RegisterNewScriptScript(Canis::App& _app)
    {
        // REGISTER_PROPERTY(scriptConf, BlockGame::NewScript, exampleProperty);

        DEFAULT_CONFIG(scriptConf, BlockGame::NewScript);

        scriptConf.DEFAULT_DRAW_INSPECTOR(BlockGame::NewScript);

        _app.RegisterScript(scriptConf);
    }

    DEFAULT_UNREGISTER_SCRIPT(scriptConf, NewScript)

    void NewScript::Create() {}

    void NewScript::Ready() {}

    void NewScript::Destroy() {}

    void NewScript::Update(float) {}
}

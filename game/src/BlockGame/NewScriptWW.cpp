#include <BlockGame/NewScriptWW.hpp>

#include <Canis/App.hpp>
#include <Canis/ConfigHelper.hpp>

namespace BlockGame
{
    namespace
    {
        Canis::ScriptConf scriptConf = {};
    }

    void RegisterNewScriptWWScript(Canis::App& _app)
    {
        // REGISTER_PROPERTY(scriptConf, BlockGame::NewScriptWW, exampleProperty);

        DEFAULT_CONFIG(scriptConf, BlockGame::NewScriptWW);

        scriptConf.DEFAULT_DRAW_INSPECTOR(BlockGame::NewScriptWW);

        _app.RegisterScript(scriptConf);
    }

    DEFAULT_UNREGISTER_SCRIPT(scriptConf, NewScriptWW)

    void NewScriptWW::Create() {}

    void NewScriptWW::Ready() {}

    void NewScriptWW::Destroy() {}

    void NewScriptWW::Update(float) {}
}

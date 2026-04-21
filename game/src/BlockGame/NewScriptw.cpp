#include <BlockGame/NewScriptw.hpp>

#include <Canis/App.hpp>
#include <Canis/ConfigHelper.hpp>

namespace BlockGame
{
    namespace
    {
        Canis::ScriptConf scriptConf = {};
    }

    void RegisterNewScriptwScript(Canis::App& _app)
    {
        // REGISTER_PROPERTY(scriptConf, BlockGame::NewScriptw, exampleProperty);

        DEFAULT_CONFIG(scriptConf, BlockGame::NewScriptw);

        scriptConf.DEFAULT_DRAW_INSPECTOR(BlockGame::NewScriptw);

        _app.RegisterScript(scriptConf);
    }

    DEFAULT_UNREGISTER_SCRIPT(scriptConf, NewScriptw)

    void NewScriptw::Create() {}

    void NewScriptw::Ready() {}

    void NewScriptw::Destroy() {}

    void NewScriptw::Update(float) {}
}

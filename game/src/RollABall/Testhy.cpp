#include <RollABall/Testhy.hpp>

#include <Canis/App.hpp>
#include <Canis/ConfigHelper.hpp>

namespace RollABall
{
    namespace
    {
        Canis::ScriptConf scriptConf = {};
    }

    void RegisterTesthyScript(Canis::App& _app)
    {
        // REGISTER_PROPERTY(scriptConf, RollABall::Testhy, exampleProperty);

        DEFAULT_CONFIG(scriptConf, RollABall::Testhy);

        scriptConf.DEFAULT_DRAW_INSPECTOR(RollABall::Testhy);

        _app.RegisterScript(scriptConf);
    }

    DEFAULT_UNREGISTER_SCRIPT(scriptConf, Testhy)

    void Testhy::Create() {}

    void Testhy::Ready() {}

    void Testhy::Destroy() {}

    void Testhy::Update(float) {}
}

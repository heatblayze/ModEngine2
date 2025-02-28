#pragma once

#include "modengine/mod_engine.h"
#include "modengine/extension.h"

namespace modengine {
namespace ext {

class ScyllaHideExtension : public ModEngineExtension {
public:
    ScyllaHideExtension(ModEngineExtensionConnector* instance)
        : ModEngineExtension(instance)
    {
    }
    bool inject_scyllahide_external();

private:
    void on_attach() override;
    void on_detach() override;

    const char* id() override
    {
        return "scylla_hide";
    }
};

}
}

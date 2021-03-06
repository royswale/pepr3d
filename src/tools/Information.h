#pragma once
#include "tools/Tool.h"
#include "ui/IconsMaterialDesign.h"
#include "ui/SidePane.h"

namespace pepr3d {

/// Tool used for getting details about the application
class Information : public Tool {
   public:
    virtual std::string getName() const override {
        return "Information";
    }

    virtual std::optional<Hotkey> getHotkey(const Hotkeys& hotkeys) const override {
        return hotkeys.findHotkey(HotkeyAction::SelectInformation);
    }

    virtual std::string getDescription() const override {
        return "Get details about the application.";
    }

    virtual std::string getIcon() const override {
        return ICON_MD_INFO_OUTLINE;
    }

    virtual void drawToSidePane(SidePane& sidePane) override;
};
}  // namespace pepr3d

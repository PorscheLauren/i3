static cmdp_token tokens_FORCE_DISPLAY_URGENCY_HINT_MS[2] = {
    { "'ms", "", FORCE_DISPLAY_URGENCY_HINT_MS, { 0 } }, 
    { "end", "", __CALL, { 0 } }, 
};
static cmdp_token tokens_FLOATING_MAXIMUM_SIZE_HEIGHT[1] = {
    { "number", "height", __CALL, { 1 } }, 
};
static cmdp_token tokens_FLOATING_MINIMUM_SIZE_HEIGHT[1] = {
    { "number", "height", __CALL, { 2 } }, 
};
static cmdp_token tokens_BAR_STRIP_WORKSPACE_NUMBERS[1] = {
    { "word", "value", __CALL, { 3 } }, 
};
static cmdp_token tokens_FLOATING_MAXIMUM_SIZE_WIDTH[1] = {
    { "number", "width", FLOATING_MAXIMUM_SIZE_X, { 0 } }, 
};
static cmdp_token tokens_FLOATING_MINIMUM_SIZE_WIDTH[1] = {
    { "number", "width", FLOATING_MINIMUM_SIZE_X, { 0 } }, 
};
static cmdp_token tokens_BAR_BINDING_MODE_INDICATOR[1] = {
    { "word", "value", __CALL, { 4 } }, 
};
static cmdp_token tokens_FOCUS_ON_WINDOW_ACTIVATION[1] = {
    { "word", "mode", __CALL, { 5 } }, 
};
static cmdp_token tokens_FORCE_DISPLAY_URGENCY_HINT[1] = {
    { "number", "duration_ms", FORCE_DISPLAY_URGENCY_HINT_MS, { 0 } }, 
};
static cmdp_token tokens_WORKSPACE_BACK_AND_FORTH[1] = {
    { "word", "value", __CALL, { 6 } }, 
};
static cmdp_token tokens_FLOATING_MAXIMUM_SIZE_X[1] = {
    { "'x", "", FLOATING_MAXIMUM_SIZE_HEIGHT, { 0 } }, 
};
static cmdp_token tokens_FLOATING_MINIMUM_SIZE_X[1] = {
    { "'x", "", FLOATING_MINIMUM_SIZE_HEIGHT, { 0 } }, 
};
static cmdp_token tokens_POPUP_DURING_FULLSCREEN[3] = {
    { "'ignore", "value", __CALL, { 7 } }, 
    { "'leave_fullscreen", "value", __CALL, { 8 } }, 
    { "'smart", "value", __CALL, { 9 } }, 
};
static cmdp_token tokens_BAR_COLORS_IGNORE_LINE[1] = {
    { "line", "", BAR_COLORS, { 0 } }, 
};
static cmdp_token tokens_BAR_COLORS_BACKGROUND[1] = {
    { "word", "background", BAR_COLORS_TEXT, { 0 } }, 
};
static cmdp_token tokens_BAR_WORKSPACE_BUTTONS[1] = {
    { "word", "value", __CALL, { 10 } }, 
};
static cmdp_token tokens_BAR_SEPARATOR_SYMBOL[1] = {
    { "string", "separator", __CALL, { 11 } }, 
};
static cmdp_token tokens_FORCE_FOCUS_WRAPPING[1] = {
    { "word", "value", __CALL, { 12 } }, 
};
static cmdp_token tokens_NEW_WINDOW_PIXELS_PX[2] = {
    { "'px", "", NEW_WINDOW_PIXELS_PX, { 0 } }, 
    { "end", "", __CALL, { 13 } }, 
};
static cmdp_token tokens_WORKSPACE_OUTPUT_STR[1] = {
    { "word", "output", __CALL, { 14 } }, 
};
static cmdp_token tokens_BAR_BINDSYM_COMMAND[1] = {
    { "string", "command", __CALL, { 15 } }, 
};
static cmdp_token tokens_BAR_TRAY_PADDING_PX[2] = {
    { "'px", "", BAR_TRAY_PADDING_PX, { 0 } }, 
    { "end", "", __CALL, { 16 } }, 
};
static cmdp_token tokens_DEFAULT_ORIENTATION[3] = {
    { "'horizontal", "orientation", __CALL, { 17 } }, 
    { "'vertical", "orientation", __CALL, { 18 } }, 
    { "'auto", "orientation", __CALL, { 19 } }, 
};
static cmdp_token tokens_FOCUS_FOLLOWS_MOUSE[1] = {
    { "word", "value", __CALL, { 20 } }, 
};
static cmdp_token tokens_BAR_STATUS_COMMAND[1] = {
    { "string", "command", __CALL, { 21 } }, 
};
static cmdp_token tokens_BAR_WHEEL_DOWN_CMD[1] = {
    { "string", "command", __CALL, { 22 } }, 
};
static cmdp_token tokens_COLOR_CHILD_BORDER[2] = {
    { "word", "child_border", __CALL, { 23 } }, 
    { "end", "", __CALL, { 24 } }, 
};
static cmdp_token tokens_FOR_WINDOW_COMMAND[1] = {
    { "string", "command", __CALL, { 25 } }, 
};
static cmdp_token tokens_BAR_COLORS_BORDER[1] = {
    { "word", "border", BAR_COLORS_BACKGROUND, { 0 } }, 
};
static cmdp_token tokens_BAR_COLORS_SINGLE[1] = {
    { "word", "color", __CALL, { 26 } }, 
};
static cmdp_token tokens_FLOATING_MODIFIER[10] = {
    { "'Mod1", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'Mod2", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'Mod3", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'Mod4", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'Mod5", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'Shift", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'Control", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'Ctrl", "modifiers", FLOATING_MODIFIER, { 0 } }, 
    { "'+", "", FLOATING_MODIFIER, { 0 } }, 
    { "end", "", __CALL, { 27 } }, 
};
static cmdp_token tokens_HIDE_EDGE_BORDERS[11] = {
    { "'none", "hide_borders", __CALL, { 28 } }, 
    { "'vertical", "hide_borders", __CALL, { 29 } }, 
    { "'horizontal", "hide_borders", __CALL, { 30 } }, 
    { "'both", "hide_borders", __CALL, { 31 } }, 
    { "'smart", "hide_borders", __CALL, { 32 } }, 
    { "'1", "hide_borders", __CALL, { 33 } }, 
    { "'yes", "hide_borders", __CALL, { 34 } }, 
    { "'true", "hide_borders", __CALL, { 35 } }, 
    { "'on", "hide_borders", __CALL, { 36 } }, 
    { "'enable", "hide_borders", __CALL, { 37 } }, 
    { "'active", "hide_borders", __CALL, { 38 } }, 
};
static cmdp_token tokens_NEW_WINDOW_PIXELS[2] = {
    { "end", "", __CALL, { 39 } }, 
    { "number", "width", NEW_WINDOW_PIXELS_PX, { 0 } }, 
};
static cmdp_token tokens_WORKSPACE_COMMAND[2] = {
    { "'output", "", WORKSPACE_OUTPUT_STR, { 0 } }, 
    { "'gaps", "", GAPS, { 0 } }, 
};
static cmdp_token tokens_ASSIGN_WORKSPACE[3] = {
    { "'→", "", ASSIGN_WORKSPACE, { 0 } }, 
    { "'workspace", "", ASSIGN_WORKSPACE, { 0 } }, 
    { "string", "workspace", __CALL, { 40 } }, 
};
static cmdp_token tokens_BAR_COLORS_BRACE[2] = {
    { "end", "", BAR_COLORS_BRACE, { 0 } }, 
    { "'{", "", BAR_COLORS, { 0 } }, 
};
static cmdp_token tokens_BAR_HIDDEN_STATE[2] = {
    { "'hide", "hidden_state", __CALL, { 41 } }, 
    { "'show", "hidden_state", __CALL, { 42 } }, 
};
static cmdp_token tokens_BAR_TRAY_PADDING[1] = {
    { "number", "padding_px", BAR_TRAY_PADDING_PX, { 0 } }, 
};
static cmdp_token tokens_BAR_WHEEL_UP_CMD[1] = {
    { "string", "command", __CALL, { 43 } }, 
};
static cmdp_token tokens_COLOR_BACKGROUND[1] = {
    { "word", "background", COLOR_TEXT, { 0 } }, 
};
static cmdp_token tokens_MODE_BINDCOMMAND[4] = {
    { "'--release", "release", MODE_BINDCOMMAND, { 0 } }, 
    { "'--border", "border", MODE_BINDCOMMAND, { 0 } }, 
    { "'--whole-window", "whole_window", MODE_BINDCOMMAND, { 0 } }, 
    { "string", "command", __CALL, { 44 } }, 
};
static cmdp_token tokens_MODE_IGNORE_LINE[1] = {
    { "line", "", MODE, { 0 } }, 
};
static cmdp_token tokens_WORKSPACE_LAYOUT[4] = {
    { "'default", "layout", __CALL, { 45 } }, 
    { "'stacking", "layout", __CALL, { 46 } }, 
    { "'stacked", "layout", __CALL, { 47 } }, 
    { "'tabbed", "layout", __CALL, { 48 } }, 
};
static cmdp_token tokens_BAR_BAR_COMMAND[1] = {
    { "string", "command", __CALL, { 49 } }, 
};
static cmdp_token tokens_BAR_COLORS_TEXT[2] = {
    { "end", "", __CALL, { 50 } }, 
    { "word", "text", __CALL, { 51 } }, 
};
static cmdp_token tokens_BAR_IGNORE_LINE[1] = {
    { "line", "", BAR, { 0 } }, 
};
static cmdp_token tokens_BAR_SOCKET_PATH[1] = {
    { "string", "path", __CALL, { 52 } }, 
};
static cmdp_token tokens_BAR_TRAY_OUTPUT[1] = {
    { "word", "output", __CALL, { 53 } }, 
};
static cmdp_token tokens_COLOR_INDICATOR[2] = {
    { "word", "indicator", COLOR_CHILD_BORDER, { 0 } }, 
    { "end", "", __CALL, { 54 } }, 
};
static cmdp_token tokens_GAPS_WITH_SCOPE[1] = {
    { "number", "value", __CALL, { 55 } }, 
};
static cmdp_token tokens_FORCE_XINERAMA[1] = {
    { "word", "value", __CALL, { 56 } }, 
};
static cmdp_token tokens_CRITERION_STR[1] = {
    { "word", "cvalue", __CALL, { 57 } }, 
};
static cmdp_token tokens_MOUSE_WARPING[2] = {
    { "'none", "value", __CALL, { 58 } }, 
    { "'output", "value", __CALL, { 59 } }, 
};
static cmdp_token tokens_RESTART_STATE[1] = {
    { "string", "path", __CALL, { 60 } }, 
};
static cmdp_token tokens_SMART_BORDERS[7] = {
    { "'1", "enabled", __CALL, { 61 } }, 
    { "'yes", "enabled", __CALL, { 62 } }, 
    { "'true", "enabled", __CALL, { 63 } }, 
    { "'on", "enabled", __CALL, { 64 } }, 
    { "'enable", "enabled", __CALL, { 65 } }, 
    { "'active", "enabled", __CALL, { 66 } }, 
    { "'no_gaps", "enabled", __CALL, { 67 } }, 
};
static cmdp_token tokens_BAR_MODIFIER[10] = {
    { "'Mod1", "modifier", __CALL, { 68 } }, 
    { "'Mod2", "modifier", __CALL, { 69 } }, 
    { "'Mod3", "modifier", __CALL, { 70 } }, 
    { "'Mod4", "modifier", __CALL, { 71 } }, 
    { "'Mod5", "modifier", __CALL, { 72 } }, 
    { "'Control", "modifier", __CALL, { 73 } }, 
    { "'Ctrl", "modifier", __CALL, { 74 } }, 
    { "'Shift", "modifier", __CALL, { 75 } }, 
    { "'none", "modifier", __CALL, { 76 } }, 
    { "'off", "modifier", __CALL, { 77 } }, 
};
static cmdp_token tokens_BAR_POSITION[2] = {
    { "'top", "position", __CALL, { 78 } }, 
    { "'bottom", "position", __CALL, { 79 } }, 
};
static cmdp_token tokens_COLOR_BORDER[1] = {
    { "word", "border", COLOR_BACKGROUND, { 0 } }, 
};
static cmdp_token tokens_COLOR_SINGLE[1] = {
    { "word", "color", __CALL, { 80 } }, 
};
static cmdp_token tokens_FAKE_OUTPUTS[1] = {
    { "string", "outputs", __CALL, { 81 } }, 
};
static cmdp_token tokens_MODE_BINDING[19] = {
    { "'--release", "release", MODE_BINDING, { 0 } }, 
    { "'--border", "border", MODE_BINDING, { 0 } }, 
    { "'--whole-window", "whole_window", MODE_BINDING, { 0 } }, 
    { "'Mod1", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Mod2", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Mod3", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Mod4", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Mod5", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Shift", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Control", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Ctrl", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Mode_switch", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Group1", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Group2", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Group3", "modifiers", MODE_BINDING, { 0 } }, 
    { "'Group4", "modifiers", MODE_BINDING, { 0 } }, 
    { "'$mod", "modifiers", MODE_BINDING, { 0 } }, 
    { "'+", "", MODE_BINDING, { 0 } }, 
    { "word", "key", MODE_BINDCOMMAND, { 0 } }, 
};
static cmdp_token tokens_NO_FOCUS_END[1] = {
    { "end", "", __CALL, { 82 } }, 
};
static cmdp_token tokens_BAR_BINDSYM[1] = {
    { "word", "button", BAR_BINDSYM_COMMAND, { 0 } }, 
};
static cmdp_token tokens_BAR_VERBOSE[1] = {
    { "word", "value", __CALL, { 83 } }, 
};
static cmdp_token tokens_BINDCOMMAND[4] = {
    { "'--release", "release", BINDCOMMAND, { 0 } }, 
    { "'--border", "border", BINDCOMMAND, { 0 } }, 
    { "'--whole-window", "whole_window", BINDCOMMAND, { 0 } }, 
    { "string", "command", __CALL, { 84 } }, 
};
static cmdp_token tokens_IGNORE_LINE[1] = {
    { "line", "", INITIAL, { 0 } }, 
};
static cmdp_token tokens_BAR_COLORS[15] = {
    { "end", "", BAR_COLORS, { 0 } }, 
    { "'#", "", BAR_COLORS_IGNORE_LINE, { 0 } }, 
    { "'set", "", BAR_COLORS_IGNORE_LINE, { 0 } }, 
    { "'background", "colorclass", BAR_COLORS_SINGLE, { 0 } }, 
    { "'statusline", "colorclass", BAR_COLORS_SINGLE, { 0 } }, 
    { "'separator", "colorclass", BAR_COLORS_SINGLE, { 0 } }, 
    { "'focused_background", "colorclass", BAR_COLORS_SINGLE, { 0 } }, 
    { "'focused_statusline", "colorclass", BAR_COLORS_SINGLE, { 0 } }, 
    { "'focused_separator", "colorclass", BAR_COLORS_SINGLE, { 0 } }, 
    { "'focused_workspace", "colorclass", BAR_COLORS_BORDER, { 0 } }, 
    { "'active_workspace", "colorclass", BAR_COLORS_BORDER, { 0 } }, 
    { "'inactive_workspace", "colorclass", BAR_COLORS_BORDER, { 0 } }, 
    { "'urgent_workspace", "colorclass", BAR_COLORS_BORDER, { 0 } }, 
    { "'binding_mode", "colorclass", BAR_COLORS_BORDER, { 0 } }, 
    { "'}", "", BAR, { 0 } }, 
};
static cmdp_token tokens_BAR_HEIGHT[1] = {
    { "number", "value", __CALL, { 85 } }, 
};
static cmdp_token tokens_BAR_OUTPUT[1] = {
    { "string", "output", __CALL, { 86 } }, 
};
static cmdp_token tokens_COLOR_TEXT[1] = {
    { "word", "text", COLOR_INDICATOR, { 0 } }, 
};
static cmdp_token tokens_FOR_WINDOW[1] = {
    { "'[", "", __CALL, { 87 } }, 
};
static cmdp_token tokens_IPC_SOCKET[1] = {
    { "string", "path", __CALL, { 88 } }, 
};
static cmdp_token tokens_NEW_WINDOW[4] = {
    { "'normal", "border", NEW_WINDOW_PIXELS, { 0 } }, 
    { "'pixel", "border", NEW_WINDOW_PIXELS, { 0 } }, 
    { "'1pixel", "border", __CALL, { 89 } }, 
    { "'none", "border", __CALL, { 90 } }, 
};
static cmdp_token tokens_SHOW_MARKS[1] = {
    { "word", "value", __CALL, { 91 } }, 
};
static cmdp_token tokens_SMART_GAPS[6] = {
    { "'1", "enabled", __CALL, { 92 } }, 
    { "'yes", "enabled", __CALL, { 93 } }, 
    { "'true", "enabled", __CALL, { 94 } }, 
    { "'on", "enabled", __CALL, { 95 } }, 
    { "'enable", "enabled", __CALL, { 96 } }, 
    { "'active", "enabled", __CALL, { 97 } }, 
};
static cmdp_token tokens_CRITERION[1] = {
    { "'=", "", CRITERION_STR, { 0 } }, 
};
static cmdp_token tokens_MODEBRACE[2] = {
    { "end", "", MODEBRACE, { 0 } }, 
    { "'{", "", MODE, { 0 } }, 
};
static cmdp_token tokens_WORKSPACE[1] = {
    { "word", "workspace", WORKSPACE_COMMAND, { 0 } }, 
};
static cmdp_token tokens_BARBRACE[2] = {
    { "end", "", BARBRACE, { 0 } }, 
    { "'{", "", __CALL, { 98 } }, 
};
static cmdp_token tokens_BAR_FONT[1] = {
    { "string", "font", __CALL, { 99 } }, 
};
static cmdp_token tokens_BAR_MODE[3] = {
    { "'dock", "mode", __CALL, { 100 } }, 
    { "'hide", "mode", __CALL, { 101 } }, 
    { "'invisible", "mode", __CALL, { 102 } }, 
};
static cmdp_token tokens_CRITERIA[13] = {
    { "'class", "ctype", CRITERION, { 0 } }, 
    { "'instance", "ctype", CRITERION, { 0 } }, 
    { "'window_role", "ctype", CRITERION, { 0 } }, 
    { "'con_id", "ctype", CRITERION, { 0 } }, 
    { "'id", "ctype", CRITERION, { 0 } }, 
    { "'window_type", "ctype", CRITERION, { 0 } }, 
    { "'con_mark", "ctype", CRITERION, { 0 } }, 
    { "'title", "ctype", CRITERION, { 0 } }, 
    { "'urgent", "ctype", CRITERION, { 0 } }, 
    { "'workspace", "ctype", CRITERION, { 0 } }, 
    { "'tiling", "ctype", __CALL, { 103 } }, 
    { "'floating", "ctype", __CALL, { 104 } }, 
    { "']", "", __CALL, { 105 } }, 
};
static cmdp_token tokens_MODENAME[2] = {
    { "'--pango_markup", "pango_markup", MODENAME, { 0 } }, 
    { "word", "modename", __CALL, { 106 } }, 
};
static cmdp_token tokens_NO_FOCUS[1] = {
    { "'[", "", __CALL, { 107 } }, 
};
static cmdp_token tokens_BINDING[19] = {
    { "'--release", "release", BINDING, { 0 } }, 
    { "'--border", "border", BINDING, { 0 } }, 
    { "'--whole-window", "whole_window", BINDING, { 0 } }, 
    { "'Mod1", "modifiers", BINDING, { 0 } }, 
    { "'Mod2", "modifiers", BINDING, { 0 } }, 
    { "'Mod3", "modifiers", BINDING, { 0 } }, 
    { "'Mod4", "modifiers", BINDING, { 0 } }, 
    { "'Mod5", "modifiers", BINDING, { 0 } }, 
    { "'Shift", "modifiers", BINDING, { 0 } }, 
    { "'Control", "modifiers", BINDING, { 0 } }, 
    { "'Ctrl", "modifiers", BINDING, { 0 } }, 
    { "'Mode_switch", "modifiers", BINDING, { 0 } }, 
    { "'Group1", "modifiers", BINDING, { 0 } }, 
    { "'Group2", "modifiers", BINDING, { 0 } }, 
    { "'Group3", "modifiers", BINDING, { 0 } }, 
    { "'Group4", "modifiers", BINDING, { 0 } }, 
    { "'$mod", "modifiers", BINDING, { 0 } }, 
    { "'+", "", BINDING, { 0 } }, 
    { "word", "key", BINDCOMMAND, { 0 } }, 
};
static cmdp_token tokens_INITIAL[49] = {
    { "end", "", INITIAL, { 0 } }, 
    { "error", "", INITIAL, { 0 } }, 
    { "'#", "", IGNORE_LINE, { 0 } }, 
    { "'set", "", IGNORE_LINE, { 0 } }, 
    { "'set_from_resource", "", IGNORE_LINE, { 0 } }, 
    { "'bindsym", "bindtype", BINDING, { 0 } }, 
    { "'bindcode", "bindtype", BINDING, { 0 } }, 
    { "'bind", "bindtype", BINDING, { 0 } }, 
    { "'bar", "", BARBRACE, { 0 } }, 
    { "'font", "", FONT, { 0 } }, 
    { "'mode", "", MODENAME, { 0 } }, 
    { "'gaps", "", GAPS, { 0 } }, 
    { "'smart_borders", "", SMART_BORDERS, { 0 } }, 
    { "'smart_gaps", "", SMART_GAPS, { 0 } }, 
    { "'floating_minimum_size", "", FLOATING_MINIMUM_SIZE_WIDTH, { 0 } }, 
    { "'floating_maximum_size", "", FLOATING_MAXIMUM_SIZE_WIDTH, { 0 } }, 
    { "'floating_modifier", "", FLOATING_MODIFIER, { 0 } }, 
    { "'default_orientation", "", DEFAULT_ORIENTATION, { 0 } }, 
    { "'workspace_layout", "", WORKSPACE_LAYOUT, { 0 } }, 
    { "'new_window", "windowtype", NEW_WINDOW, { 0 } }, 
    { "'new_float", "windowtype", NEW_WINDOW, { 0 } }, 
    { "'hide_edge_borders", "", HIDE_EDGE_BORDERS, { 0 } }, 
    { "'for_window", "", FOR_WINDOW, { 0 } }, 
    { "'assign", "", ASSIGN, { 0 } }, 
    { "'no_focus", "", NO_FOCUS, { 0 } }, 
    { "'focus_follows_mouse", "", FOCUS_FOLLOWS_MOUSE, { 0 } }, 
    { "'mouse_warping", "", MOUSE_WARPING, { 0 } }, 
    { "'force_focus_wrapping", "", FORCE_FOCUS_WRAPPING, { 0 } }, 
    { "'force_xinerama", "", FORCE_XINERAMA, { 0 } }, 
    { "'force-xinerama", "", FORCE_XINERAMA, { 0 } }, 
    { "'workspace_auto_back_and_forth", "", WORKSPACE_BACK_AND_FORTH, { 0 } }, 
    { "'fake_outputs", "", FAKE_OUTPUTS, { 0 } }, 
    { "'fake-outputs", "", FAKE_OUTPUTS, { 0 } }, 
    { "'force_display_urgency_hint", "", FORCE_DISPLAY_URGENCY_HINT, { 0 } }, 
    { "'focus_on_window_activation", "", FOCUS_ON_WINDOW_ACTIVATION, { 0 } }, 
    { "'show_marks", "", SHOW_MARKS, { 0 } }, 
    { "'workspace", "", WORKSPACE, { 0 } }, 
    { "'ipc_socket", "", IPC_SOCKET, { 0 } }, 
    { "'ipc-socket", "", IPC_SOCKET, { 0 } }, 
    { "'restart_state", "", RESTART_STATE, { 0 } }, 
    { "'popup_during_fullscreen", "", POPUP_DURING_FULLSCREEN, { 0 } }, 
    { "'exec_always", "exectype", EXEC, { 0 } }, 
    { "'exec", "exectype", EXEC, { 0 } }, 
    { "'client.background", "colorclass", COLOR_SINGLE, { 0 } }, 
    { "'client.focused_inactive", "colorclass", COLOR_BORDER, { 0 } }, 
    { "'client.focused", "colorclass", COLOR_BORDER, { 0 } }, 
    { "'client.unfocused", "colorclass", COLOR_BORDER, { 0 } }, 
    { "'client.urgent", "colorclass", COLOR_BORDER, { 0 } }, 
    { "'client.placeholder", "colorclass", COLOR_BORDER, { 0 } }, 
};
static cmdp_token tokens_ASSIGN[1] = {
    { "'[", "", __CALL, { 108 } }, 
};
static cmdp_token tokens_BAR_ID[1] = {
    { "word", "bar_id", __CALL, { 109 } }, 
};
static cmdp_token tokens_EXEC[2] = {
    { "'--no-startup-id", "no_startup_id", EXEC, { 0 } }, 
    { "string", "command", __CALL, { 110 } }, 
};
static cmdp_token tokens_FONT[1] = {
    { "string", "font", __CALL, { 111 } }, 
};
static cmdp_token tokens_GAPS[2] = {
    { "'inner", "scope", GAPS_WITH_SCOPE, { 0 } }, 
    { "'outer", "scope", GAPS_WITH_SCOPE, { 0 } }, 
};
static cmdp_token tokens_MODE[8] = {
    { "end", "", MODE, { 0 } }, 
    { "error", "", MODE, { 0 } }, 
    { "'#", "", MODE_IGNORE_LINE, { 0 } }, 
    { "'set", "", MODE_IGNORE_LINE, { 0 } }, 
    { "'bindsym", "bindtype", MODE_BINDING, { 0 } }, 
    { "'bindcode", "bindtype", MODE_BINDING, { 0 } }, 
    { "'bind", "bindtype", MODE_BINDING, { 0 } }, 
    { "'}", "", INITIAL, { 0 } }, 
};
static cmdp_token tokens_BAR[27] = {
    { "end", "", BAR, { 0 } }, 
    { "error", "", BAR, { 0 } }, 
    { "'#", "", BAR_IGNORE_LINE, { 0 } }, 
    { "'set", "", BAR_IGNORE_LINE, { 0 } }, 
    { "'i3bar_command", "", BAR_BAR_COMMAND, { 0 } }, 
    { "'status_command", "", BAR_STATUS_COMMAND, { 0 } }, 
    { "'socket_path", "", BAR_SOCKET_PATH, { 0 } }, 
    { "'mode", "", BAR_MODE, { 0 } }, 
    { "'hidden_state", "", BAR_HIDDEN_STATE, { 0 } }, 
    { "'id", "", BAR_ID, { 0 } }, 
    { "'modifier", "", BAR_MODIFIER, { 0 } }, 
    { "'wheel_up_cmd", "", BAR_WHEEL_UP_CMD, { 0 } }, 
    { "'wheel_down_cmd", "", BAR_WHEEL_DOWN_CMD, { 0 } }, 
    { "'bindsym", "", BAR_BINDSYM, { 0 } }, 
    { "'position", "", BAR_POSITION, { 0 } }, 
    { "'output", "", BAR_OUTPUT, { 0 } }, 
    { "'tray_output", "", BAR_TRAY_OUTPUT, { 0 } }, 
    { "'tray_padding", "", BAR_TRAY_PADDING, { 0 } }, 
    { "'font", "", BAR_FONT, { 0 } }, 
    { "'separator_symbol", "", BAR_SEPARATOR_SYMBOL, { 0 } }, 
    { "'binding_mode_indicator", "", BAR_BINDING_MODE_INDICATOR, { 0 } }, 
    { "'workspace_buttons", "", BAR_WORKSPACE_BUTTONS, { 0 } }, 
    { "'strip_workspace_numbers", "", BAR_STRIP_WORKSPACE_NUMBERS, { 0 } }, 
    { "'verbose", "", BAR_VERBOSE, { 0 } }, 
    { "'height", "", BAR_HEIGHT, { 0 } }, 
    { "'colors", "", BAR_COLORS_BRACE, { 0 } }, 
    { "'}", "", __CALL, { 112 } }, 
};
static cmdp_token_ptr tokens[93] = {
    { tokens_FORCE_DISPLAY_URGENCY_HINT_MS, 2 },
    { tokens_FLOATING_MAXIMUM_SIZE_HEIGHT, 1 },
    { tokens_FLOATING_MINIMUM_SIZE_HEIGHT, 1 },
    { tokens_BAR_STRIP_WORKSPACE_NUMBERS, 1 },
    { tokens_FLOATING_MAXIMUM_SIZE_WIDTH, 1 },
    { tokens_FLOATING_MINIMUM_SIZE_WIDTH, 1 },
    { tokens_BAR_BINDING_MODE_INDICATOR, 1 },
    { tokens_FOCUS_ON_WINDOW_ACTIVATION, 1 },
    { tokens_FORCE_DISPLAY_URGENCY_HINT, 1 },
    { tokens_WORKSPACE_BACK_AND_FORTH, 1 },
    { tokens_FLOATING_MAXIMUM_SIZE_X, 1 },
    { tokens_FLOATING_MINIMUM_SIZE_X, 1 },
    { tokens_POPUP_DURING_FULLSCREEN, 3 },
    { tokens_BAR_COLORS_IGNORE_LINE, 1 },
    { tokens_BAR_COLORS_BACKGROUND, 1 },
    { tokens_BAR_WORKSPACE_BUTTONS, 1 },
    { tokens_BAR_SEPARATOR_SYMBOL, 1 },
    { tokens_FORCE_FOCUS_WRAPPING, 1 },
    { tokens_NEW_WINDOW_PIXELS_PX, 2 },
    { tokens_WORKSPACE_OUTPUT_STR, 1 },
    { tokens_BAR_BINDSYM_COMMAND, 1 },
    { tokens_BAR_TRAY_PADDING_PX, 2 },
    { tokens_DEFAULT_ORIENTATION, 3 },
    { tokens_FOCUS_FOLLOWS_MOUSE, 1 },
    { tokens_BAR_STATUS_COMMAND, 1 },
    { tokens_BAR_WHEEL_DOWN_CMD, 1 },
    { tokens_COLOR_CHILD_BORDER, 2 },
    { tokens_FOR_WINDOW_COMMAND, 1 },
    { tokens_BAR_COLORS_BORDER, 1 },
    { tokens_BAR_COLORS_SINGLE, 1 },
    { tokens_FLOATING_MODIFIER, 10 },
    { tokens_HIDE_EDGE_BORDERS, 11 },
    { tokens_NEW_WINDOW_PIXELS, 2 },
    { tokens_WORKSPACE_COMMAND, 2 },
    { tokens_ASSIGN_WORKSPACE, 3 },
    { tokens_BAR_COLORS_BRACE, 2 },
    { tokens_BAR_HIDDEN_STATE, 2 },
    { tokens_BAR_TRAY_PADDING, 1 },
    { tokens_BAR_WHEEL_UP_CMD, 1 },
    { tokens_COLOR_BACKGROUND, 1 },
    { tokens_MODE_BINDCOMMAND, 4 },
    { tokens_MODE_IGNORE_LINE, 1 },
    { tokens_WORKSPACE_LAYOUT, 4 },
    { tokens_BAR_BAR_COMMAND, 1 },
    { tokens_BAR_COLORS_TEXT, 2 },
    { tokens_BAR_IGNORE_LINE, 1 },
    { tokens_BAR_SOCKET_PATH, 1 },
    { tokens_BAR_TRAY_OUTPUT, 1 },
    { tokens_COLOR_INDICATOR, 2 },
    { tokens_GAPS_WITH_SCOPE, 1 },
    { tokens_FORCE_XINERAMA, 1 },
    { tokens_CRITERION_STR, 1 },
    { tokens_MOUSE_WARPING, 2 },
    { tokens_RESTART_STATE, 1 },
    { tokens_SMART_BORDERS, 7 },
    { tokens_BAR_MODIFIER, 10 },
    { tokens_BAR_POSITION, 2 },
    { tokens_COLOR_BORDER, 1 },
    { tokens_COLOR_SINGLE, 1 },
    { tokens_FAKE_OUTPUTS, 1 },
    { tokens_MODE_BINDING, 19 },
    { tokens_NO_FOCUS_END, 1 },
    { tokens_BAR_BINDSYM, 1 },
    { tokens_BAR_VERBOSE, 1 },
    { tokens_BINDCOMMAND, 4 },
    { tokens_IGNORE_LINE, 1 },
    { tokens_BAR_COLORS, 15 },
    { tokens_BAR_HEIGHT, 1 },
    { tokens_BAR_OUTPUT, 1 },
    { tokens_COLOR_TEXT, 1 },
    { tokens_FOR_WINDOW, 1 },
    { tokens_IPC_SOCKET, 1 },
    { tokens_NEW_WINDOW, 4 },
    { tokens_SHOW_MARKS, 1 },
    { tokens_SMART_GAPS, 6 },
    { tokens_CRITERION, 1 },
    { tokens_MODEBRACE, 2 },
    { tokens_WORKSPACE, 1 },
    { tokens_BARBRACE, 2 },
    { tokens_BAR_FONT, 1 },
    { tokens_BAR_MODE, 3 },
    { tokens_CRITERIA, 13 },
    { tokens_MODENAME, 2 },
    { tokens_NO_FOCUS, 1 },
    { tokens_BINDING, 19 },
    { tokens_INITIAL, 49 },
    { tokens_ASSIGN, 1 },
    { tokens_BAR_ID, 1 },
    { tokens_EXEC, 2 },
    { tokens_FONT, 1 },
    { tokens_GAPS, 2 },
    { tokens_MODE, 8 },
    { tokens_BAR, 27 },
};

#include "Color.h"
#include "KeyValues.h"
#include "vgui/VGUI.h"
#include "vgui/IVGui.h"
#include "vgui_controls/Panel.h"
#include "vgui_controls/Frame.h"
#include "vgui_controls/EditablePanel.h"

// Auto reconstructed from vtable block @ 0x001D491C
// from "GameUI.dylib", by VTableRec.idc
class CGameConsoleDialog
{
public:													//  Index Offset
	virtual vgui::VPANEL GetVPanel() = 0;								// 0000  0000
	virtual void Think() = 0;								// 0001  0004
	virtual void PerformApplySchemeSettings() = 0;								// 0002  0008
	virtual void PaintTraverse(bool rePaint, bool allowForce = true) = 0;								// 0003  000C
	virtual void Repaint() = 0;								// 0004  0010
	virtual vgui::VPANEL IsWithinTraverse(int x, int y, bool traversePopups) = 0;								// 0005  0014
	virtual void GetInset(int &left, int &top, int &right, int &bottom) = 0;								// 0006  0018
	virtual void GetClipRect(int &x0, int &y0, int &x1, int &y1) = 0;								// 0007  001C
	virtual void OnChildAdded(vgui::VPANEL child) = 0;								// 0008  0020
	virtual void OnSizeChanged(int wide, int tall) = 0;								// 0009  0024
	virtual void InternalFocusChanged(bool lost) = 0;								// 0010  0028
	virtual bool RequestInfo(KeyValues *data) = 0;								// 0011  002C
	virtual void RequestFocus(int direction = 0) = 0;								// 0012  0030
	virtual bool RequestFocusPrev(vgui::VPANEL panel) = 0;								// 0013  0034
	virtual bool RequestFocusNext(vgui::VPANEL panel) = 0;								// 0014  0038
	virtual void OnMessage(const KeyValues *params, vgui::VPANEL fromPanel) = 0;								// 0015  003C
	virtual vgui::VPANEL GetCurrentKeyFocus() = 0;								// 0016  0040
	virtual int GetTabPosition() = 0;								// 0017  0044
	virtual const char *GetName() = 0;								// 0018  0048
	virtual const char *GetClassName() = 0;								// 0019  004C
	virtual vgui::HScheme GetScheme() = 0;								// 0020  0050
	virtual bool IsProportional() = 0;								// 0021  0054
	virtual bool IsAutoDeleteSet() = 0;								// 0022  0058
	virtual void DeletePanel() = 0;								// 0023  005C
	virtual void *QueryInterface(vgui::EInterfaceID) = 0;								// 0024  0060
	virtual vgui::Panel *GetPanel() = 0;								// 0025  0064
	virtual const char *GetModuleName() = 0;								// 0026  0068
	virtual void OnTick() = 0;								// 0027  006C
	virtual vgui::PanelMessageMap *GetMessageMap() = 0;								// 0028  0070 (Zerf: ????)
	virtual PanelAnimationMap *GetAnimMap() = 0;								// 0029  0074
	virtual vgui::PanelKeyBindingMap *GetKBMap() = 0;								// 0030  0078
	virtual ~CGameConsoleDialog() = 0;								// 0031  007C
	// ~CGameConsoleDialog() = 0;								// 0032  0080 (Zerf: GCC thing apparently)
	virtual void Init(int x, int y, int wide, int tall) = 0;								// 0033  0084
	virtual void SetVisible(bool state) = 0;								// 0034  0088
	virtual bool IsVisible() = 0;								// 0035  008C
	virtual void PostMessage(vgui::VPANEL target, KeyValues *message, float delaySeconds = 0.0f) = 0;								// 0036  0090
	virtual void OnMove() = 0;								// 0037  0094
	virtual vgui::Panel *GetParent() = 0;								// 0038  0098
	virtual vgui::VPANEL GetVParent() = 0;								// 0039  009C
	virtual void SetParent(vgui::Panel *newParent) = 0;								// 0040  00A0
	virtual void SetParent(vgui::VPANEL newParent) = 0;								// 0041  00A4
	virtual bool HasParent(vgui::VPANEL potentialParent) = 0;								// 0042  00A8 (Zerf: arg was unsigned int)
	virtual CUtlVector<VPANEL> &GetChildren() = 0;								// 0043  00AC
	virtual void SetAutoDelete(bool state) = 0;								// 0044  00B0
	virtual void AddActionSignalTarget(vgui::Panel *messageTarget) = 0;								// 0045  00B4
	virtual void AddActionSignalTarget(vgui::VPANEL messageTarget) = 0;								// 0046  00B8
	virtual void RemoveActionSignalTarget(vgui::Panel *oldTarget) = 0;								// 0047  00BC
	virtual void PostActionSignal(KeyValues *message) = 0;								// 0048  00C0
	virtual bool RequestInfoFromChild(const char *childName, KeyValues *outputData) = 0;								// 0049  00C4
	virtual void PostMessageToChild(const char *childName, KeyValues *messsage) = 0;								// 0050  00C8
	virtual void PostMessage(vgui::Panel *target, KeyValues *message, float delaySeconds = 0.0f) = 0;								// 0051  00CC
	virtual bool SetInfo(KeyValues *inputData) = 0;								// 0052  00D0
	virtual void SetSilentMode(bool bSilent) = 0;								// 0053  00D4
	virtual void InstallMouseHandler(vgui::Panel *pHandler) = 0;									// 0054  00D8
	virtual void SetEnabled(bool state) = 0;								// 0055  00DC
	virtual bool IsEnabled() = 0;								// 0056  00E0
	virtual bool IsPopup() = 0;								// 0057  00E4
	virtual void MoveToFront() = 0;								// 0058  00E8
	virtual void SetBgColor(Color color) = 0;								// 0059  00EC
	virtual void SetFgColor(Color color) = 0;								// 0060  00F0
	virtual Color GetBgColor() = 0;								// 0061  00F4
	virtual Color GetFgColor() = 0;								// 0062  00F8
	virtual void SetCursor(vgui::HCursor cursor) = 0;								// 0063  00FC (Zerf: arg was unsigned long)
	virtual vgui::HCursor GetCursor() = 0;								// 0064  0100
	virtual void SetCursorAlwaysVisible(bool visible) = 0;								// 0065  0104
	virtual bool HasFocus() = 0;								// 0066  0108
	virtual void InvalidateLayout(bool layoutNow = false, bool reloadScheme = false) = 0;								// 0067  010C
	virtual void SetTabPosition(int position) = 0;								// 0068  0110
	virtual void SetBorder(vgui::IBorder *border) = 0;								// 0069  0114
	virtual vgui::IBorder *GetBorder() = 0;								// 0070  0118
	virtual void SetPaintBorderEnabled(bool state) = 0;								// 0071  011C
	virtual void SetPaintBackgroundEnabled(bool state) = 0;								// 0072  0120
	virtual void SetPaintEnabled(bool state) = 0;								// 0073  0124
	virtual void SetPostChildPaintEnabled(bool state) = 0;								// 0074  0128
	virtual void SetPaintBackgroundType(int type) = 0;								// 0075  012C
	virtual void GetPaintSize(int &wide, int &tall) = 0;								// 0076  0130
	virtual void SetBuildGroup(vgui::BuildGroup *buildGroup) = 0;								// 0077  0134
	virtual bool IsBuildGroupEnabled() = 0;								// 0078  0138
	virtual bool IsCursorNone() = 0;								// 0079  013C
	virtual bool IsCursorOver() = 0;								// 0080  0140
	virtual void MarkForDeletion() = 0;								// 0081  0144
	virtual bool IsLayoutInvalid() = 0;								// 0082  0148
	virtual vgui::Panel *HasHotkey(wchar_t key) = 0;								// 0083  014C
	virtual bool IsOpaque() = 0;								// 0084  0150
	virtual void SetScheme(const char *tag) = 0;								// 0085  0154
	virtual void SetScheme(vgui::HScheme scheme) = 0;								// 0086  0158 (Zerf: arg was unsigned long)
	virtual Color GetSchemeColor(const char *keyName, vgui::IScheme *pScheme) = 0;								// 0087  015C
	virtual Color GetSchemeColor(const char *keyName, Color defaultColor, vgui::IScheme *pScheme) = 0;								// 0088  0160
	virtual void ApplySchemeSettings(vgui::IScheme *pScheme) = 0;								// 0089  0164
	virtual void ApplySettings(KeyValues *inResourceData) = 0;								// 0090  0168
	virtual void GetSettings(KeyValues *outResourceData) = 0;								// 0091  016C
	virtual const char *GetDescription() = 0;								// 0092  0170
	virtual void ApplyUserConfigSettings(KeyValues *userConfig) = 0;								// 0093  0174
	virtual void GetUserConfigSettings(KeyValues *userConfig) = 0;								// 0094  0178
	virtual bool HasUserConfigSettings() = 0;								// 0095  017C
	virtual void OnCommand(const char *command) = 0;								// 0096  0180
	virtual void OnMouseCaptureLost() = 0;								// 0097  0184
	virtual void OnSetFocus() = 0;								// 0098  0188
	virtual void OnKillFocus() = 0;								// 0099  018C
	virtual void OnDelete() = 0;								// 0100  0190
	virtual void OnThink() = 0;								// 0101  0194
	virtual void OnCursorMoved(int x, int y) = 0;								// 0102  0198
	virtual void OnCursorEntered() = 0;								// 0103  019C
	virtual void OnCursorExited() = 0;								// 0104  01A0
	virtual void OnMousePressed(vgui::MouseCode code) = 0;								// 0105  01A4
	virtual void OnMouseDoublePressed(vgui::MouseCode code) = 0;								// 0106  01A8
	virtual void OnMouseReleased(vgui::MouseCode code) = 0;								// 0107  01AC
	virtual void OnMouseWheeled(int delta) = 0;								// 0108  01B0
	virtual void SetTriplePressAllowed(bool state) = 0;								// 0109  01B4
	virtual bool IsTriplePressAllowed() const = 0;								// 0110  01B8
	virtual void OnMouseTriplePressed(vgui::MouseCode code) = 0;								// 0111  01BC
	virtual void SetKeyBindingsContext(vgui::KeyBindingContextHandle_t handle) = 0;								// 0112  01C0
	virtual vgui::KeyBindingContextHandle_t GetKeyBindingsContext() const = 0;								// 0113  01C4
	virtual bool IsValidKeyBindingsContext() const = 0;								// 0114  01C8
	virtual bool IsKeyRebound(KeyCode code, int modifiers) = 0;								// 0115  01CC
	virtual bool IsKeyOverridden(KeyCode code, int modifiers) = 0;								// 0116  01D0
	virtual void AddKeyBinding(char const *bindingName, int keycode, int modifiers) = 0;								// 0117  01D4
	virtual void EditKeyBindings() = 0;								// 0118  01D8
	virtual char const *GetKeyBindingsFile() const = 0;								// 0119  01DC
	virtual char const *GetKeyBindingsFilePathID() const = 0;								// 0120  01E0
	virtual void OnKeyCodePressed(vgui::KeyCode code) = 0;								// 0121  01E4
	virtual void OnKeyCodeTyped(vgui::KeyCode code) = 0;								// 0122  01E8
	virtual void OnKeyTyped(wchar_t unichar) = 0;								// 0123  01EC
	virtual void OnKeyCodeReleased(KeyCode code) = 0;								// 0124  01F0
	virtual void OnKeyFocusTicked() = 0;								// 0125  01F4
	virtual void OnMouseFocusTicked() = 0;								// 0126  01F8
	virtual void PaintBackground() = 0;								// 0127  01FC
	virtual void Paint() = 0;								// 0128  0200
	virtual void PaintBorder() = 0;								// 0129  0204
	virtual void PaintBuildOverlay() = 0;								// 0130  0208
	virtual void PostChildPaint() = 0;								// 0131  020C
	virtual void PerformLayout() = 0;								// 0132  0210
	virtual vgui::PanelMap_t GetPanelMap() = 0;								// 0133  0214
	virtual void SetProportional(bool state) = 0;								// 0134  0218
	virtual void SetMouseInputEnabled(bool state) = 0;								// 0135  021C
	virtual void SetKeyBoardInputEnabled(bool state) = 0;								// 0136  0220
	virtual bool IsMouseInputEnabled() = 0;								// 0137  0224
	virtual bool IsKeyBoardInputEnabled() = 0;								// 0138  0228
	virtual void DrawTexturedBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha) = 0;								// 0139  022C
	virtual void DrawBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha, bool hollow = false) = 0;								// 0140  0230
	virtual void DrawBoxFade(int x, int y, int wide, int tall, Color color, float normalizedAlpha, unsigned int alpha0, unsigned int alpha1, bool bHorizontal, bool hollow = false) = 0;								// 0141  0234
	virtual void DrawHollowBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha) = 0;								// 0142  0238
	virtual void DrawHollowBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha, int cornerWide, int cornerTall) = 0;								// 0143  023C
	virtual void SetDragEnabled(bool enabled) = 0;								// 0144  0240
	virtual bool IsDragEnabled() const = 0;								// 0145  0244
	virtual void SetShowDragHelper(bool enabled) = 0;								// 0146  0248
	virtual void OnDragFailed(CUtlVector< KeyValues * >& msglist) = 0;								// 0147  024C (Zerf: arg1 for these were CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &)
	virtual void SetBlockDragChaining(bool block) = 0;								// 0148  0250
	virtual bool IsBlockingDragChaining() const = 0;								// 0149  0254
	virtual int GetDragStartTolerance() const = 0;								// 0150  0258
	virtual void SetDragSTartTolerance(int nTolerance) = 0;								// 0151  025C
	virtual void SetDropEnabled(bool enabled, float m_flHoverContextTime = 0.0f) = 0;								// 0152  0260
	virtual bool IsDropEnabled() const = 0;								// 0153  0264
	virtual bool GetDropContextMenu(vgui::Menu *menu, CUtlVector< KeyValues * >& msglist) = 0;								// 0154  0268 (Zerf: arg2 was CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &)
	virtual void OnDropContextHoverShow(CUtlVector< KeyValues * >& msglist) = 0;								// 0155  026C
	virtual void OnDropContextHoverHide(CUtlVector< KeyValues * >& msglist) = 0;								// 0156  0270
	virtual vgui::DragDrop_t *GetDragDropInfo() = 0;								// 0157  0274
	virtual void OnGetAdditionalDragPanels(CUtlVector< vgui::Panel * >& dragabbles) = 0;								// 0158  0278
	virtual void OnCreateDragData(KeyValues *msg) = 0;								// 0159  027C
	virtual bool IsDroppable(CUtlVector< KeyValues * >& msglist) = 0;								// 0160  0280
	virtual void OnDraggablePanelPaint() = 0;								// 0161  0284
	virtual void OnDroppablePanelPaint(CUtlVector< KeyValues * >& msglist, CUtlVector< vgui::Panel * >& dragPanels) = 0;								// 0162  0288
	virtual void OnPanelDropped(CUtlVector< KeyValues * >& msglist) = 0;								// 0163  028C
	virtual void OnPanelEnteredDroppablePanel(CUtlVector< KeyValues * >& msglist) = 0;								// 0164  0290
	virtual void OnPanelExitedDroppablePanel(CUtlVector< KeyValues * >& msglist) = 0;								// 0165  0294
	virtual vgui::Panel *GetDropTarget(CUtlVector< KeyValues * >& msglist) = 0;								// 0166  0298
	virtual vgui::Panel *GetDragPanel() = 0;								// 0167  029C
	virtual bool IsBeingDragged() = 0;								// 0168  02A0
	virtual vgui::HCursor GetDropCursor(CUtlVector< KeyValues * >& msglist) = 0;								// 0169  02A4
	virtual bool CanStartDragging(int startx, int starty, int mx, int my) = 0;								// 0170  02A8
	virtual void FillRectSkippingPanel(const Color &clr, int x, int y, int w, int h, vgui::Panel *skipPanel) = 0;								// 0171  02AC
	virtual int GetPaintBackgroundType() = 0;								// 0172  02B0
	virtual void GetCornerTextureSize(int& w, int& h) = 0;								// 0173  02B4
	virtual void SetSkipChildDuringPainting(vgui::Panel *child) = 0;								// 0174  02B8
	virtual vgui::Panel *NavigateUp() = 0;								// 0175  02BC
	virtual vgui::Panel *NavigateDown() = 0;								// 0176  02C0
	virtual vgui::Panel *NavigateLeft() = 0;								// 0177  02C4
	virtual vgui::Panel *NavigateRight() = 0;								// 0178  02C8
	virtual vgui::Panel *NavigateActivate() = 0;								// 0179  02CC
	virtual vgui::Panel *NavigateBack() = 0;								// 0180  02D0
	virtual void NavigateTo() = 0;								// 0181  02D4
	virtual void NavigateFrom() = 0;								// 0182  02D8
	virtual void NavigateToChild(vgui::Panel *pNagivateTo) = 0;								// 0183  02DC
	virtual void OnNavigateTo(const char *panelName) = 0;								// 0184  02E0
	virtual void OnNavigateFrom(const char *panelName) = 0;								// 0185  02E4
	virtual void OnStartDragging() = 0;								// 0186  02E8
	virtual void OnContinueDragging() = 0;								// 0187  02EC
	virtual void OnFinishDragging(bool mousereleased, vgui::MouseCode code, bool aborted = false) = 0;								// 0188  02F0
	virtual void DragDropStartDragging() = 0;								// 0189  02F4
	virtual void GetDragData(CUtlVector< KeyValues * >& list) = 0;								// 0190  02F8
	virtual void CreateDragData() = 0;								// 0191  02FC
	virtual void OnRequestFocus(vgui::VPANEL subFocus, vgui::VPANEL defaultPanel) = 0;								// 0192  0300
	virtual void OnScreenSizeChanged(int iOldWide, int iOldTall) = 0;								// 0193  0304
	virtual void InternalCursorMoved(int xpos, int ypos) = 0;								// 0194  0308
	virtual void InternalCursorEntered() = 0;								// 0195  030C
	virtual void InternalCursorExited() = 0;								// 0196  0310
	virtual void InternalMousePressed(int code) = 0;								// 0197  0314
	virtual void InternalMouseDoublePressed(int code) = 0;								// 0198  0318
	virtual void InternalMouseTriplePressed(int code) = 0;								// 0199  031C
	virtual void InternalMouseReleased(int code) = 0;								// 0200  0320
	virtual void InternalMouseWheeled(int delta) = 0;								// 0201  0324
	virtual void InternalKeyCodePressed(int code) = 0;								// 0202  0328
	virtual void InternalKeyCodeTyped(int code) = 0;								// 0203  032C
	virtual void InternalKeyTyped(int unichar) = 0;								// 0204  0330
	virtual void InternalKeyCodeReleased(int code) = 0;								// 0205  0334
	virtual void InternalKeyFocusTicked() = 0;								// 0206  0338
	virtual void InternalMouseFocusTicked() = 0;								// 0207  033C
	virtual void InternalInvalidateLayout() = 0;								// 0208  0340
	virtual void InternalMove() = 0;								// 0209  0344
	virtual void LoadControlSettings(const char *dialogResourceName, const char *pathID = NULL, KeyValues *pPreloadedKeyValues = NULL, KeyValues *pConditions = NULL) = 0;								// 0210  0348
	virtual void LoadUserConfig(const char *configName, int dialogID = 0) = 0;								// 0211  034C
	virtual void SaveUserConfig() = 0;								// 0212  0350
	virtual void LoadControlSettingsAndUserConfig(const char *dialogResourceName, int dialogID = 0) = 0;								// 0213  0354
	virtual void ActivateBuildMode() = 0;								// 0214  0358
	virtual vgui::BuildGroup *GetBuildGroup() = 0;								// 0215  035C
	virtual vgui::Panel *CreateControlByName(const char *controlName) = 0;								// 0216  0360
	virtual void SetControlString(const char *controlName, const char *string) = 0;								// 0217  0364
	virtual void SetControlString(const char *controlName, const wchar_t *string) = 0;								// 0218  0368
	virtual void SetControlInt(const char *controlName, int state) = 0;								// 0219  036C
	virtual int GetControlInt(const char *controlName, int defaultState) = 0;								// 0220  0370
	virtual const char *GetControlString(const char *controlName, const char *defaultString = "") = 0;								// 0221  0374
	virtual void GetControlString(const char *controlName, char *buf, int bufSize, const char *defaultString = "") = 0;								// 0222  0378
	virtual void SetControlEnabled(const char *controlName, bool enabled) = 0;								// 0223  037C
	virtual void SetControlVisible(char  const*,bool) = 0;								// 0224  0380
	virtual void SetDialogVariable(const char *varName, const char *value) = 0;								// 0225  0384
	virtual void SetDialogVariable(const char *varName, const wchar_t *value) = 0;								// 0226  0388
	virtual void SetDialogVariable(const char *varName, int value) = 0;								// 0227  038C
	virtual void SetDialogVariable(const char *varName, float value) = 0;								// 0228  0390
	virtual void RegisterControlSettingsFile(const char *dialogResourceName, const char *pathID = NULL) = 0;								// 0229  0394
	virtual vgui::FocusNavGroup &GetFocusNavGroup() = 0;								// 0230  0398
	virtual void OnDefaultButtonSet(vgui::VPANEL button) = 0;								// 0231  039C
	virtual void OnCurrentDefaultButtonSet(vgui::VPANEL button) = 0;								// 0232  03A0
	virtual void OnFindDefaultButton() = 0;								// 0233  03A4
	virtual void OnClose() = 0;								// 0234  03A8
	virtual void SetTitle(const char *title, bool surfaceTitle) = 0;								// 0235  03AC
	virtual void SetTitle(const wchar_t *title, bool surfaceTitle) = 0;								// 0236  03B0
	virtual void Activate() = 0;								// 0237  03B4
	virtual void ActivateMinimized() = 0;								// 0238  03B8
	virtual void Close() = 0;								// 0239  03BC
	virtual void CloseModal() = 0;								// 0240  03C0
	virtual void SetDeleteSelfOnClose(bool state) = 0;								// 0241  03C4
	virtual void MoveToCenterOfScreen() = 0;								// 0242  03C8
	virtual void SetMoveable(bool state) = 0;								// 0243  03CC
	virtual bool IsMoveable() = 0;								// 0244  03D0
	virtual void SetSizeable(bool state) = 0;								// 0245  03D4
	virtual bool IsSizeable() = 0;								// 0246  03D8
	virtual void SetMenuButtonVisible(bool state) = 0;								// 0247  03DC
	virtual void SetMinimizeButtonVisible(bool state) = 0;								// 0248  03E0
	virtual void SetMaximizeButtonVisible(bool state) = 0;								// 0249  03E4
	virtual void SetMinimizeToSysTrayButtonVisible(bool state) = 0;								// 0250  03E8
	virtual void SetCloseButtonVisible(bool state) = 0;								// 0251  03EC
	virtual bool IsMinimized() = 0;								// 0252  03F0
	virtual void FlashWindow() = 0;								// 0253  03F4
	virtual void FlashWindowStop() = 0;								// 0254  03F8
	virtual vgui::Menu *GetSysMenu() = 0;								// 0255  03FC
	virtual void SetSysMenu(vgui::Menu *menu) = 0;								// 0256  0400
	virtual void SetTitleBarVisible(bool state) = 0;								// 0257  0404
	virtual void SetClipToParent(bool state) = 0;								// 0258  0408
	virtual bool GetClipToParent() const = 0;								// 0259  040C
	virtual void SetSmallCaption(bool state) = 0;								// 0260  0410
	virtual bool IsSmallCaption() const = 0;								// 0261  0414
	virtual int GetDraggerSize() = 0;								// 0262  0418
	virtual int GetCornerSize() = 0;								// 0263  041C
	virtual int GetBottomRightSize() = 0;								// 0264  0420
	virtual int GetCaptionHeight() = 0;								// 0265  0424
	virtual void DoModal() = 0;								// 0266  0428
	virtual void OnFinishedClose() = 0;								// 0267  042C
	virtual void OnMinimize() = 0;								// 0268  0430
	virtual void OnMinimizeToSysTray() = 0;								// 0269  0434
	virtual void OnCloseFrameButtonPressed() = 0;								// 0270  0438
	virtual bool GetDefaultScreenPosition(int &x, int &y, int &wide, int &tall) = 0;								// 0271  043C
	virtual void GetClientArea(int &x, int &y, int &wide, int &tall) = 0;								// 0272  0440
	virtual void InternalSetTitle(const char *text) = 0;								// 0273  0444
	virtual void InternalFlashWindow() = 0;								// 0274  0448
	virtual void OnDialogVariablesChanged(KeyValues *dialogVariables) = 0;								// 0275  044C
	virtual void OnCommandSubmitted(const char *pCommand) = 0;								// 0276  0450
	virtual void OnClosedByHittingTilde() = 0;								// 0277  0454
};


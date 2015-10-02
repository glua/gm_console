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
	vgui::VPANEL GetVPanel();								// 0000  0000
	void Think();								// 0001  0004
	void PerformApplySchemeSettings();								// 0002  0008
	void PaintTraverse(bool rePaint, bool allowForce = true);								// 0003  000C
	void Repaint();								// 0004  0010
	vgui::VPANEL IsWithinTraverse(int x, int y, bool traversePopups);								// 0005  0014
	void GetInset(int &left, int &top, int &right, int &bottom);								// 0006  0018
	void GetClipRect(int &x0, int &y0, int &x1, int &y1);								// 0007  001C
	void OnChildAdded(vgui::VPANEL child);								// 0008  0020 (Zerf: arg was unsigned int)
	void OnSizeChanged(int wide, int tall);								// 0009  0024
	void InternalFocusChanged(bool lost);								// 0010  0028
	bool RequestInfo(KeyValues *data);								// 0011  002C
	void RequestFocus(int directin = 0);								// 0012  0030
	bool RequestFocusPrev(vgui::VPANEL panel);								// 0013  0034
	bool RequestFocusNext(vgui::VPANEL panel);								// 0014  0038
	void OnMessage(const KeyValues *params, vgui::VPANEL fromPanel);								// 0015  003C (Zerf: arg2 was unsigned int)
	vgui::VPANEL GetCurrentKeyFocus();								// 0016  0040
	int GetTabPosition();								// 0017  0044
	const char *GetName();								// 0018  0048
	const char *GetClassName();								// 0019  004C
	vgui::HScheme GetScheme();								// 0020  0050
	bool IsProportional();								// 0021  0054
	bool IsAutoDeleteSet();								// 0022  0058
	void DeletePanel();								// 0023  005C
	void *QueryInterface(vgui::EInterfaceID);								// 0024  0060
	vgui::Panel *GetPanel();								// 0025  0064
	const char *GetModuleName();								// 0026  0068
	void OnTick();								// 0027  006C
	vgui::PanelMessageMap *GetMessageMap();								// 0028  0070 (Zerf: ????)
	vgui::PanelAnimationMap *GetAnimMap();								// 0029  0074
	vgui::PanelKeyBindingMap *GetKBMap();								// 0030  0078
	~CGameConsoleDialog();								// 0031  007C
	~CGameConsoleDialog();								// 0032  0080
	void Init(int x, int y, int wide, int tall);								// 0033  0084
	void SetVisible(bool state);								// 0034  0088
	bool IsVisible();								// 0035  008C
	void PostMessage(vgui::VPANEL target, KeyValues *message, float delaySeconds = 0.0f);								// 0036  0090
	void OnMove();								// 0037  0094
	vgui::Panel *GetParent();								// 0038  0098
	vgui::VPANEL GetVParent();								// 0039  009C
	void SetParent(vgui::Panel *newParent);								// 0040  00A0
	void SetParent(vgui::VPANEL newParent);								// 0041  00A4
	bool HasParent(VPANEL potentialParent);								// 0042  00A8 (Zerf: arg was unsigned int)
	void GetChildren();								// 0043  00AC (Zerf: ????)
	void SetAutoDelete(bool state);								// 0044  00B0
	void AddActionSignalTarget(vgui::Panel *messageTarget);								// 0045  00B4
	void AddActionSignalTarget(vgui::VPANEL messageTarget);								// 0046  00B8
	void RemoveActionSignalTarget(vgui::Panel *oldTarget);								// 0047  00BC
	void PostActionSignal(KeyValues *message);								// 0048  00C0
	bool RequestInfoFromChild(const char *childName, KeyValues *outputData);								// 0049  00C4
	void PostMessageToChild(const char *childName, KeyValues *messsage);								// 0050  00C8
	void PostMessage(vgui::Panel *target, KeyValues *message, float delaySeconds = 0.0f);								// 0051  00CC
	bool SetInfo(KeyValues *inputData);								// 0052  00D0
	void SetSilentMode(bool bSilent);								// 0053  00D4
	void InstallMouseHandler(vgui::Panel *pHandler);								// 0054  00D8
	void SetEnabled(bool state);								// 0055  00DC
	bool IsEnabled();								// 0056  00E0
	bool IsPopup();								// 0057  00E4
	void MoveToFront();								// 0058  00E8
	void SetBgColor(Color color);								// 0059  00EC
	void SetFgColor(Color color);								// 0060  00F0
	Color GetBgColor();								// 0061  00F4
	Color GetFgColor();								// 0062  00F8
	void SetCursor(vgui::HCursor cursor);								// 0063  00FC (Zerf: arg was unsigned long)
	vgui::HCursor GetCursor();								// 0064  0100
	void SetCursorAlwaysVisible(bool visible);								// 0065  0104
	bool HasFocus();								// 0066  0108
	void InvalidateLayout(bool layoutNow = false, bool reloadScheme = false);								// 0067  010C
	void SetTabPosition(int position);								// 0068  0110
	void SetBorder(vgui::IBorder *border);								// 0069  0114
	vgui::IBorder *GetBorder();								// 0070  0118
	void SetPaintBorderEnabled(bool state);								// 0071  011C
	void SetPaintBackgroundEnabled(bool state);								// 0072  0120
	void SetPaintEnabled(bool state);								// 0073  0124
	void SetPostChildPaintEnabled(bool state);								// 0074  0128
	void SetPaintBackgroundType(int type);								// 0075  012C
	void GetPaintSize(int &wide, int &tall));								// 0076  0130
	void SetBuildGroup(vgui::BuildGroup *buildGroup);								// 0077  0134
	bool IsBuildGroupEnabled();								// 0078  0138
	bool IsCursorNone();								// 0079  013C
	bool IsCursorOver();								// 0080  0140
	void MarkForDeletion();								// 0081  0144
	bool IsLayoutInvalid();								// 0082  0148
	vgui::Panel *HasHotkey(wchar_t key);								// 0083  014C
	bool IsOpaque();								// 0084  0150
	void SetScheme(const char *tag);								// 0085  0154
	void SetScheme(vgui::HScheme scheme);								// 0086  0158 (Zerf: arg was unsigned long)
	Color GetSchemeColor(const char *keyName, vgui::IScheme *pScheme);								// 0087  015C
	Color GetSchemeColor(const char *keyName, Color defaultColor, vgui::IScheme *pScheme);								// 0088  0160
	void ApplySchemeSettings(vgui::IScheme *pScheme);								// 0089  0164
	void ApplySettings(KeyValues *inResourceData);								// 0090  0168
	void GetSettings(KeyValues *outResourceData);								// 0091  016C
	const char *GetDescription();								// 0092  0170
	void ApplyUserConfigSettings(KeyValues *userConfig);								// 0093  0174
	void GetUserConfigSettings(KeyValues *userConfig);								// 0094  0178
	bool HasUserConfigSettings();								// 0095  017C
	void OnCommand(const char *command);								// 0096  0180
	void OnMouseCaptureLost();								// 0097  0184
	void OnSetFocus();								// 0098  0188
	void OnKillFocus();								// 0099  018C
	void OnDelete();								// 0100  0190
	void OnThink();								// 0101  0194
	void OnCursorMoved(int x, int y);								// 0102  0198
	void OnCursorEntered();								// 0103  019C
	void OnCursorExited();								// 0104  01A0
	void OnMousePressed(vgui::MouseCode code);								// 0105  01A4
	void OnMouseDoublePressed(vgui::MouseCode code);								// 0106  01A8
	void OnMouseReleased(vgui::MouseCode code);								// 0107  01AC
	void OnMouseWheeled(int delta);								// 0108  01B0
	void SetTriplePressAllowed(bool state);								// 0109  01B4
	bool IsTriplePressAllowed() const;								// 0110  01B8
	void OnMouseTriplePressed(vgui::MouseCode code);								// 0111  01BC
	void SetKeyBindingsContext(vgui::KeyBindingContextHandle_t handle);								// 0112  01C0
	vgui::KeyBindingContextHandle_t GetKeyBindingsContext() const;								// 0113  01C4
	bool IsValidKeyBindingsContext() const;								// 0114  01C8
	bool IsKeyRebound(KeyCode code, int modifiers);								// 0115  01CC
	bool IsKeyOverridden(KeyCode code, int modifiers);								// 0116  01D0
	void AddKeyBinding(char const *bindingName, int keycode, int modifiers);								// 0117  01D4
	void EditKeyBindings();								// 0118  01D8
	char const *GetKeyBindingsFile() const;								// 0119  01DC
	char const *GetKeyBindingsFilePathID() const;								// 0120  01E0
	void OnKeyCodePressed(vgui::KeyCode code);								// 0121  01E4
	void OnKeyCodeTyped(vgui::KeyCode code);								// 0122  01E8
	void OnKeyTyped(wchar_t unichar);								// 0123  01EC
	void OnKeyCodeReleased(KeyCode code);								// 0124  01F0
	void OnKeyFocusTicked();								// 0125  01F4
	void OnMouseFocusTicked();								// 0126  01F8
	void PaintBackground();								// 0127  01FC
	void Paint();								// 0128  0200
	void PaintBorder();								// 0129  0204
	void PaintBuildOverlay();								// 0130  0208
	void PostChildPaint();								// 0131  020C
	void PerformLayout();								// 0132  0210
	vgui::PanelMap_t GetPanelMap();								// 0133  0214
	void SetProportional(bool state);								// 0134  0218
	void SetMouseInputEnabled(bool state);								// 0135  021C
	void SetKeyBoardInputEnabled(bool state);								// 0136  0220
	bool IsMouseInputEnabled();								// 0137  0224
	bool IsKeyBoardInputEnabled();								// 0138  0228
	void DrawTexturedBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha);								// 0139  022C
	void DrawBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha, bool hollow = false);								// 0140  0230
	void DrawBoxFade(int x, int y, int wide, int tall, Color color, float normalizedAlpha, unsigned int alpha0, unsigned int alpha1, bool bHorizontal, bool hollow = false);								// 0141  0234
	void DrawHollowBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha);								// 0142  0238
	void DrawHollowBox(int x, int y, int wide, int tall, Color color, float normalizedAlpha, int cornerWide, int cornerTall);								// 0143  023C
	void SetDragEnabled(bool enabled);								// 0144  0240
	bool IsDragEnabled() const;								// 0145  0244
	void SetShowDragHelper(bool enabled);								// 0146  0248
	void OnDragFailed(CUtlVector< KeyValues * >& msglist);								// 0147  024C (Zerf: arg1 for these were CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &)
	void SetBlockDragChaining(bool block);								// 0148  0250
	bool IsBlockingDragChaining() const;								// 0149  0254
	int GetDragStartTolerance() const;								// 0150  0258
	void SetDragSTartTolerance(int nTolerance);								// 0151  025C
	void SetDropEnabled(bool enabled, float m_flHoverContextTime = 0.0f);								// 0152  0260
	bool IsDropEnabled() const;								// 0153  0264
	bool GetDropContextMenu(vgui::Menu *menu, CUtlVector< KeyValues * >& msglist);								// 0154  0268 (Zerf: arg2 was CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &)
	void OnDropContextHoverShow(CUtlVector< KeyValues * >& msglist);								// 0155  026C
	void OnDropContextHoverHide(CUtlVector< KeyValues * >& msglist);								// 0156  0270
	vgui::DragDrop_t *GetDragDropInfo();								// 0157  0274
	void OnGetAdditionalDragPanels(CUtlVector< vgui::Panel * >& dragabbles);								// 0158  0278
	void OnCreateDragData(KeyValues *msg);								// 0159  027C
	bool IsDroppable(CUtlVector< KeyValues * >& msglist);								// 0160  0280
	void OnDraggablePanelPaint();								// 0161  0284
	void OnDroppablePanelPaint(CUtlVector< KeyValues * >& msglist, CUtlVector< vgui::Panel * >& dragPanels);								// 0162  0288
	void OnPanelDropped(CUtlVector< KeyValues * >& msglist);								// 0163  028C
	void OnPanelEnteredDroppablePanel(CUtlVector< KeyValues * >& msglist);								// 0164  0290
	void OnPanelExitedDroppablePanel(CUtlVector< KeyValues * >& msglist);								// 0165  0294
	vgui::Panel *GetDropTarget(CUtlVector< KeyValues * >& msglist);								// 0166  0298
	vgui::Panel *GetDragPanel();								// 0167  029C
	bool IsBeingDragged();								// 0168  02A0
	vgui::HCursor GetDropCursor(CUtlVector< KeyValues * >& msglist);								// 0169  02A4
	bool CanStartDragging(int startx, int starty, int mx, int my);								// 0170  02A8
	void FillRectSkippingPanel(const Color &clr, int x, int y, int w, int h, vgui::Panel *skipPanel);								// 0171  02AC
	int GetPaintBackgroundType();								// 0172  02B0
	void GetCornerTextureSize(int& w, int& h);								// 0173  02B4
	void SetSkipChildDuringPainting(vgui::Panel *child);								// 0174  02B8
	vgui::Panel *NavigateUp();								// 0175  02BC
	vgui::Panel *NavigateDown();								// 0176  02C0
	vgui::Panel *NavigateLeft();								// 0177  02C4
	vgui::Panel *NavigateRight();								// 0178  02C8
	vgui::Panel *NavigateActivate();								// 0179  02CC
	vgui::Panel *NavigateBack();								// 0180  02D0
	void NavigateTo();								// 0181  02D4
	void NavigateFrom();								// 0182  02D8
	void NavigateToChild(vgui::Panel *pNagivateTo);								// 0183  02DC
	void OnNavigateTo(const char *panelName);								// 0184  02E0
	void OnNavigateFrom(const char *panelName);								// 0185  02E4
	void OnStartDragging();								// 0186  02E8
	void OnContinueDragging();								// 0187  02EC
	void OnFinishDragging(bool mousereleased, vgui::MouseCode code, bool aborted = false);								// 0188  02F0
	void DragDropStartDragging();								// 0189  02F4
	void GetDragData(CUtlVector< KeyValues * >& list);								// 0190  02F8
	void CreateDragData();								// 0191  02FC
	void OnRequestFocus(vgui::VPANEL subFocus, vgui::VPANEL defaultPanel);								// 0192  0300
	void OnScreenSizeChanged(int iOldWide, int iOldTall);								// 0193  0304
	void InternalCursorMoved(int xpos, int ypos);								// 0194  0308
	void InternalCursorEntered();								// 0195  030C
	void InternalCursorExited();								// 0196  0310
	void InternalMousePressed(int code);								// 0197  0314
	void InternalMouseDoublePressed(int code);								// 0198  0318
	void InternalMouseTriplePressed(int code);								// 0199  031C
	void InternalMouseReleased(int code);								// 0200  0320
	void InternalMouseWheeled(int delta);								// 0201  0324
	void InternalKeyCodePressed(int code);								// 0202  0328
	void InternalKeyCodeTyped(int code);								// 0203  032C
	void InternalKeyTyped(int unichar);								// 0204  0330
	void InternalKeyCodeReleased(int code);								// 0205  0334
	void InternalKeyFocusTicked();								// 0206  0338
	void InternalMouseFocusTicked();								// 0207  033C
	void InternalInvalidateLayout();								// 0208  0340
	void InternalMove();								// 0209  0344
	void LoadControlSettings(const char *dialogResourceName, const char *pathID = NULL, KeyValues *pPreloadedKeyValues = NULL, KeyValues *pConditions = NULL);								// 0210  0348
	void LoadUserConfig(const char *configName, int dialogID = 0);								// 0211  034C
	void SaveUserConfig();								// 0212  0350
	void LoadControlSettingsAndUserConfig(cconst char *dialogResourceName, int dialogID = 0);								// 0213  0354
	void ActivateBuildMode();								// 0214  0358
	vgui::BuildGroup *GetBuildGroup();								// 0215  035C
	vgui::Panel *CreateControlByName(const char *controlName);								// 0216  0360
	void SetControlString(const char *controlName, const char *string);								// 0217  0364
	void SetControlString(const char *controlName, const wchar_t *string);								// 0218  0368
	void SetControlInt(const char *controlName, int state);								// 0219  036C
	int GetControlInt(const char *controlName, int defaultState);								// 0220  0370
	const char *GetControlString(const char *controlName, const char *defaultString = "");								// 0221  0374
	void GetControlString(const char *controlName, char *buf, int bufSize, const char *defaultString = "");								// 0222  0378
	void SetControlEnabled(const char *controlName, bool enabled);								// 0223  037C
	void SetControlVisible(char  const*,bool);								// 0224  0380
	void SetDialogVariable(const char *varName, const char *value);								// 0225  0384
	void SetDialogVariable(const char *varName, const wchar_t *value);								// 0226  0388
	void SetDialogVariable(const char *varName, int value);								// 0227  038C
	void SetDialogVariable(const char *varName, float value);								// 0228  0390
	void RegisterControlSettingsFile(const char *dialogResourceName, const char *pathID = NULL);								// 0229  0394
	vgui::FocusNavGroup &GetFocusNavGroup();								// 0230  0398
	void OnDefaultButtonSet(vgui::VPANEL button);								// 0231  039C
	void OnCurrentDefaultButtonSet(vgui::VPANEL button);								// 0232  03A0
	void OnFindDefaultButton();								// 0233  03A4
	void OnClose();								// 0234  03A8
	void SetTitle(const char *title, bool surfaceTitle);								// 0235  03AC
	void SetTitle(const wchar_t *title, bool surfaceTitle);								// 0236  03B0
	void Activate();								// 0237  03B4
	void ActivateMinimized();								// 0238  03B8
	void Close();								// 0239  03BC
	void CloseModal();								// 0240  03C0
	void SetDeleteSelfOnClose(bool state);								// 0241  03C4
	void MoveToCenterOfScreen();								// 0242  03C8
	void SetMoveable(bool state);								// 0243  03CC
	bool IsMoveable();								// 0244  03D0
	void SetSizeable(bool state);								// 0245  03D4
	bool IsSizeable();								// 0246  03D8
	void SetMenuButtonVisible(bool state);								// 0247  03DC
	void SetMinimizeButtonVisible(bool state);								// 0248  03E0
	void SetMaximizeButtonVisible(bool state);								// 0249  03E4
	void SetMinimizeToSysTrayButtonVisible(bool state);								// 0250  03E8
	void SetCloseButtonVisible(bool state);								// 0251  03EC
	bool IsMinimized();								// 0252  03F0
	void FlashWindow();								// 0253  03F4
	void FlashWindowStop();								// 0254  03F8
	vgui::Menu *GetSysMenu();								// 0255  03FC
	void SetSysMenu(vgui::Menu *menu);								// 0256  0400
	void SetTitleBarVisible(bool state);								// 0257  0404
	void SetClipToParent(bool state);								// 0258  0408
	bool GetClipToParent() const;								// 0259  040C
	void SetSmallCaption(bool state);								// 0260  0410
	bool IsSmallCaption() const;								// 0261  0414
	int GetDraggerSize();								// 0262  0418
	int GetCornerSize();								// 0263  041C
	int GetBottomRightSize();								// 0264  0420
	int GetCaptionHeight();								// 0265  0424
	void DoModal();								// 0266  0428
	void OnFinishedClose();								// 0267  042C
	void OnMinimize();								// 0268  0430
	void OnMinimizeToSysTray();								// 0269  0434
	void OnCloseFrameButtonPressed();								// 0270  0438
	bool GetDefaultScreenPosition(int &x, int &y, int &wide, int &tall);								// 0271  043C
	void GetClientArea(int &x, int &y, int &wide, int &tall);								// 0272  0440
	void InternalSetTitle(const char *text);								// 0273  0444
	void InternalFlashWindow();								// 0274  0448
	void OnDialogVariablesChanged(KeyValues *dialogVariables);								// 0275  044C
	void OnCommandSubmitted(const char *pCommand);								// 0276  0450
	void OnClosedByHittingTilde();								// 0277  0454
};


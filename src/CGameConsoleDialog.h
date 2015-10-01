#include "Color.h"
#include "KeyValues.h"
#include "vgui/VGUI.h"
#include "vgui/IVGui.h"
#include "vgui_controls/Panel.h"
#include "vgui_controls/Frame.h"
#include "vgui_controls/EditablePanel.h"

// Auto reconstructed from vtable block @ 0x001D491C
// from "GameUI.dylib", by VTableRec.idc
class
{
public:													//  Index Offset
	vgui::Panel::GetVPanel(void);								// 0000  0000
	vgui::Panel::Think(void);								// 0001  0004
	vgui::Panel::PerformApplySchemeSettings(void);								// 0002  0008
	vgui::Panel::PaintTraverse(bool,bool);								// 0003  000C
	vgui::Panel::Repaint(void);								// 0004  0010
	vgui::Panel::IsWithinTraverse(int,int,bool);								// 0005  0014
	vgui::Panel::GetInset(int &,int &,int &,int &);								// 0006  0018
	vgui::Panel::GetClipRect(int &,int &,int &,int &);								// 0007  001C
	vgui::Frame::OnChildAdded(unsigned int);								// 0008  0020
	vgui::EditablePanel::OnSizeChanged(int,int);								// 0009  0024
	vgui::Panel::InternalFocusChanged(bool);								// 0010  0028
	vgui::EditablePanel::RequestInfo(KeyValues *);								// 0011  002C
	vgui::EditablePanel::RequestFocus(int);								// 0012  0030
	vgui::EditablePanel::RequestFocusPrev(unsigned int);								// 0013  0034
	vgui::EditablePanel::RequestFocusNext(unsigned int);								// 0014  0038
	vgui::Panel::OnMessage(KeyValues  const*,unsigned int);								// 0015  003C
	vgui::EditablePanel::GetCurrentKeyFocus(void);								// 0016  0040
	vgui::Panel::GetTabPosition(void);								// 0017  0044
	vgui::Panel::GetName(void);								// 0018  0048
	vgui::Panel::GetClassName(void);								// 0019  004C
	vgui::Panel::GetScheme(void);								// 0020  0050
	vgui::Panel::IsProportional(void);								// 0021  0054
	vgui::Panel::IsAutoDeleteSet(void);								// 0022  0058
	vgui::Panel::DeletePanel(void);								// 0023  005C
	vgui::Panel::QueryInterface(vgui::EInterfaceID);								// 0024  0060
	vgui::Panel::GetPanel(void);								// 0025  0064
	vgui::Panel::GetModuleName(void);								// 0026  0068
	vgui::Panel::OnTick(void);								// 0027  006C
	CGameConsoleDialog::GetMessageMap(void);								// 0028  0070
	CGameConsoleDialog::GetAnimMap(void);								// 0029  0074
	CGameConsoleDialog::GetKBMap(void);								// 0030  0078
	CGameConsoleDialog::~CGameConsoleDialog();								// 0031  007C
	CGameConsoleDialog::~CGameConsoleDialog();								// 0032  0080
	vgui::Panel::Init(int,int,int,int);								// 0033  0084
	vgui::Panel::SetVisible(bool);								// 0034  0088
	vgui::Panel::IsVisible(void);								// 0035  008C
	vgui::Panel::PostMessage(unsigned int,KeyValues *,float);								// 0036  0090
	vgui::Panel::OnMove(void);								// 0037  0094
	vgui::Panel::GetParent(void);								// 0038  0098
	vgui::Panel::GetVParent(void);								// 0039  009C
	vgui::Panel::SetParent(vgui::Panel*);								// 0040  00A0
	vgui::Panel::SetParent(unsigned int);								// 0041  00A4
	vgui::Panel::HasParent(unsigned int);								// 0042  00A8
	vgui::Panel::GetChildren(void);								// 0043  00AC
	vgui::Panel::SetAutoDelete(bool);								// 0044  00B0
	vgui::Panel::AddActionSignalTarget(vgui::Panel*);								// 0045  00B4
	vgui::Panel::AddActionSignalTarget(unsigned int);								// 0046  00B8
	vgui::Panel::RemoveActionSignalTarget(vgui::Panel*);								// 0047  00BC
	vgui::Panel::PostActionSignal(KeyValues *);								// 0048  00C0
	vgui::Panel::RequestInfoFromChild(char  const*,KeyValues *);								// 0049  00C4
	vgui::Panel::PostMessageToChild(char  const*,KeyValues *);								// 0050  00C8
	vgui::Panel::PostMessage(vgui::Panel*,KeyValues *,float);								// 0051  00CC
	vgui::Panel::SetInfo(KeyValues *);								// 0052  00D0
	vgui::Panel::SetSilentMode(bool);								// 0053  00D4
	vgui::Panel::InstallMouseHandler(vgui::Panel*);								// 0054  00D8
	vgui::Panel::SetEnabled(bool);								// 0055  00DC
	vgui::Panel::IsEnabled(void);								// 0056  00E0
	vgui::Panel::IsPopup(void);								// 0057  00E4
	vgui::Panel::MoveToFront(void);								// 0058  00E8
	vgui::Panel::SetBgColor(Color);								// 0059  00EC
	vgui::Panel::SetFgColor(Color);								// 0060  00F0
	vgui::Panel::GetBgColor(void);								// 0061  00F4
	vgui::Panel::GetFgColor(void);								// 0062  00F8
	vgui::Panel::SetCursor(unsigned long);								// 0063  00FC
	vgui::Panel::GetCursor(void);								// 0064  0100
	vgui::Panel::SetCursorAlwaysVisible(bool);								// 0065  0104
	vgui::Panel::HasFocus(void);								// 0066  0108
	vgui::Panel::InvalidateLayout(bool,bool);								// 0067  010C
	vgui::Panel::SetTabPosition(int);								// 0068  0110
	vgui::Panel::SetBorder(vgui::IBorder *);								// 0069  0114
	vgui::Panel::GetBorder(void);								// 0070  0118
	vgui::Panel::SetPaintBorderEnabled(bool);								// 0071  011C
	vgui::Panel::SetPaintBackgroundEnabled(bool);								// 0072  0120
	vgui::Panel::SetPaintEnabled(bool);								// 0073  0124
	vgui::Panel::SetPostChildPaintEnabled(bool);								// 0074  0128
	vgui::Panel::SetPaintBackgroundType(int);								// 0075  012C
	vgui::Panel::GetPaintSize(int &,int &);								// 0076  0130
	vgui::Panel::SetBuildGroup(vgui::BuildGroup *);								// 0077  0134
	vgui::Panel::IsBuildGroupEnabled(void);								// 0078  0138
	vgui::Panel::IsCursorNone(void);								// 0079  013C
	vgui::Panel::IsCursorOver(void);								// 0080  0140
	vgui::Panel::MarkForDeletion(void);								// 0081  0144
	vgui::Panel::IsLayoutInvalid(void);								// 0082  0148
	vgui::EditablePanel::HasHotkey(wchar_t);								// 0083  014C
	vgui::Panel::IsOpaque(void);								// 0084  0150
	vgui::Panel::SetScheme(char  const*);								// 0085  0154
	vgui::Panel::SetScheme(unsigned long);								// 0086  0158
	vgui::Panel::GetSchemeColor(char  const*,vgui::IScheme *);								// 0087  015C
	vgui::Panel::GetSchemeColor(char  const*,Color,vgui::IScheme *);								// 0088  0160
	vgui::Frame::ApplySchemeSettings(vgui::IScheme *);								// 0089  0164
	vgui::Frame::ApplySettings(KeyValues *);								// 0090  0168
	vgui::Frame::GetSettings(KeyValues *);								// 0091  016C
	vgui::Frame::GetDescription(void);								// 0092  0170
	vgui::Frame::ApplyUserConfigSettings(KeyValues *);								// 0093  0174
	vgui::Frame::GetUserConfigSettings(KeyValues *);								// 0094  0178
	vgui::Frame::HasUserConfigSettings(void);								// 0095  017C
	CGameConsoleDialog::OnCommand(char  const*);								// 0096  0180
	vgui::Panel::OnMouseCaptureLost(void);								// 0097  0184
	vgui::EditablePanel::OnSetFocus(void);								// 0098  0188
	vgui::Panel::OnKillFocus(void);								// 0099  018C
	vgui::Panel::OnDelete(void);								// 0100  0190
	vgui::Frame::OnThink(void);								// 0101  0194
	vgui::Panel::OnCursorMoved(int,int);								// 0102  0198
	vgui::Panel::OnCursorEntered(void);								// 0103  019C
	vgui::Panel::OnCursorExited(void);								// 0104  01A0
	vgui::Frame::OnMousePressed(ButtonCode_t);								// 0105  01A4
	vgui::Panel::OnMouseDoublePressed(ButtonCode_t);								// 0106  01A8
	vgui::Panel::OnMouseReleased(ButtonCode_t);								// 0107  01AC
	vgui::Panel::OnMouseWheeled(int);								// 0108  01B0
	vgui::Panel::SetTriplePressAllowed(bool);								// 0109  01B4
	vgui::Panel::IsTriplePressAllowed(void)const;								// 0110  01B8
	vgui::Panel::OnMouseTriplePressed(ButtonCode_t);								// 0111  01BC
	vgui::Panel::SetKeyBindingsContext(vgui::KeyBindingContextHandle_t);								// 0112  01C0
	vgui::Panel::GetKeyBindingsContext(void)const;								// 0113  01C4
	vgui::Panel::IsValidKeyBindingsContext(void)const;								// 0114  01C8
	vgui::Panel::IsKeyRebound(ButtonCode_t,int);								// 0115  01CC
	vgui::Panel::IsKeyOverridden(ButtonCode_t,int);								// 0116  01D0
	vgui::Panel::AddKeyBinding(char  const*,int,int);								// 0117  01D4
	vgui::Panel::EditKeyBindings(void);								// 0118  01D8
	vgui::Panel::GetKeyBindingsFile(void)const;								// 0119  01DC
	vgui::Panel::GetKeyBindingsFilePathID(void)const;								// 0120  01E0
	vgui::CConsoleDialog::OnKeyCodePressed(ButtonCode_t);								// 0121  01E4
	CGameConsoleDialog::OnKeyCodeTyped(ButtonCode_t);								// 0122  01E8
	vgui::Frame::OnKeyTyped(wchar_t);								// 0123  01EC
	vgui::Frame::OnKeyCodeReleased(ButtonCode_t);								// 0124  01F0
	vgui::Frame::OnKeyFocusTicked(void);								// 0125  01F4
	vgui::Panel::OnMouseFocusTicked(void);								// 0126  01F8
	vgui::Frame::PaintBackground(void);								// 0127  01FC
	vgui::Panel::Paint(void);								// 0128  0200
	vgui::Panel::PaintBorder(void);								// 0129  0204
	vgui::Panel::PaintBuildOverlay(void);								// 0130  0208
	vgui::Panel::PostChildPaint(void);								// 0131  020C
	vgui::CConsoleDialog::PerformLayout(void);								// 0132  0210
	vgui::Panel::GetPanelMap(void);								// 0133  0214
	vgui::Panel::SetProportional(bool);								// 0134  0218
	vgui::Panel::SetMouseInputEnabled(bool);								// 0135  021C
	vgui::Panel::SetKeyBoardInputEnabled(bool);								// 0136  0220
	vgui::Panel::IsMouseInputEnabled(void);								// 0137  0224
	vgui::Panel::IsKeyBoardInputEnabled(void);								// 0138  0228
	vgui::Panel::DrawTexturedBox(int,int,int,int,Color,float);								// 0139  022C
	vgui::Panel::DrawBox(int,int,int,int,Color,float,bool);								// 0140  0230
	vgui::Panel::DrawBoxFade(int,int,int,int,Color,float,unsigned int,unsigned int,bool,bool);								// 0141  0234
	vgui::Panel::DrawHollowBox(int,int,int,int,Color,float);								// 0142  0238
	vgui::Panel::DrawHollowBox(int,int,int,int,Color,float,int,int);								// 0143  023C
	vgui::Panel::SetDragEnabled(bool);								// 0144  0240
	vgui::Panel::IsDragEnabled(void)const;								// 0145  0244
	vgui::Panel::SetShowDragHelper(bool);								// 0146  0248
	vgui::Panel::OnDragFailed(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0147  024C
	vgui::Panel::SetBlockDragChaining(bool);								// 0148  0250
	vgui::Panel::IsBlockingDragChaining(void)const;								// 0149  0254
	vgui::Panel::GetDragStartTolerance(void)const;								// 0150  0258
	vgui::Panel::SetDragSTartTolerance(int);								// 0151  025C
	vgui::Panel::SetDropEnabled(bool,float);								// 0152  0260
	vgui::Panel::IsDropEnabled(void)const;								// 0153  0264
	vgui::Panel::GetDropContextMenu(vgui::Menu *,CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0154  0268
	vgui::Panel::OnDropContextHoverShow(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0155  026C
	vgui::Panel::OnDropContextHoverHide(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0156  0270
	vgui::Panel::GetDragDropInfo(void);								// 0157  0274
	vgui::Panel::OnGetAdditionalDragPanels(CUtlVector<vgui::Panel*,CUtlMemory<vgui::Panel*,int>> &);								// 0158  0278
	vgui::Panel::OnCreateDragData(KeyValues *);								// 0159  027C
	vgui::Panel::IsDroppable(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0160  0280
	vgui::Panel::OnDraggablePanelPaint(void);								// 0161  0284
	vgui::Panel::OnDroppablePanelPaint(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &,CUtlVector&<vgui::Panel*,CUtlMemory<CUtlVector&,int>>);								// 0162  0288
	vgui::Panel::OnPanelDropped(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0163  028C
	vgui::Panel::OnPanelEnteredDroppablePanel(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0164  0290
	vgui::Panel::OnPanelExitedDroppablePanel(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0165  0294
	vgui::Panel::GetDropTarget(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0166  0298
	vgui::Panel::GetDragPanel(void);								// 0167  029C
	vgui::Panel::IsBeingDragged(void);								// 0168  02A0
	vgui::Panel::GetDropCursor(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0169  02A4
	vgui::Panel::CanStartDragging(int,int,int,int);								// 0170  02A8
	vgui::Panel::FillRectSkippingPanel(Color  const&,int,int,int,int,vgui::Panel*);								// 0171  02AC
	vgui::Panel::GetPaintBackgroundType(void);								// 0172  02B0
	vgui::Panel::GetCornerTextureSize(int &,int &);								// 0173  02B4
	vgui::Panel::SetSkipChildDuringPainting(vgui::Panel*);								// 0174  02B8
	vgui::Panel::NavigateUp(void);								// 0175  02BC
	vgui::Panel::NavigateDown(void);								// 0176  02C0
	vgui::Panel::NavigateLeft(void);								// 0177  02C4
	vgui::Panel::NavigateRight(void);								// 0178  02C8
	vgui::Panel::NavigateActivate(void);								// 0179  02CC
	vgui::Panel::NavigateBack(void);								// 0180  02D0
	vgui::Panel::NavigateTo(void);								// 0181  02D4
	vgui::Panel::NavigateFrom(void);								// 0182  02D8
	vgui::Panel::NavigateToChild(vgui::Panel*);								// 0183  02DC
	vgui::Panel::OnNavigateTo(char  const*);								// 0184  02E0
	vgui::Panel::OnNavigateFrom(char  const*);								// 0185  02E4
	vgui::Panel::OnStartDragging(void);								// 0186  02E8
	vgui::Panel::OnContinueDragging(void);								// 0187  02EC
	vgui::Panel::OnFinishDragging(bool,ButtonCode_t,bool);								// 0188  02F0
	vgui::Panel::DragDropStartDragging(void);								// 0189  02F4
	vgui::Panel::GetDragData(CUtlVector<KeyValues *,CUtlMemory<KeyValues *,int>> &);								// 0190  02F8
	vgui::Panel::CreateDragData(void);								// 0191  02FC
	vgui::EditablePanel::OnRequestFocus(unsigned int,unsigned int);								// 0192  0300
	vgui::CConsoleDialog::OnScreenSizeChanged(int,int);								// 0193  0304
	vgui::Panel::InternalCursorMoved(int,int);								// 0194  0308
	vgui::Panel::InternalCursorEntered(void);								// 0195  030C
	vgui::Panel::InternalCursorExited(void);								// 0196  0310
	vgui::Panel::InternalMousePressed(int);								// 0197  0314
	vgui::Panel::InternalMouseDoublePressed(int);								// 0198  0318
	vgui::Panel::InternalMouseTriplePressed(int);								// 0199  031C
	vgui::Panel::InternalMouseReleased(int);								// 0200  0320
	vgui::Panel::InternalMouseWheeled(int);								// 0201  0324
	vgui::Panel::InternalKeyCodePressed(int);								// 0202  0328
	vgui::Panel::InternalKeyCodeTyped(int);								// 0203  032C
	vgui::Panel::InternalKeyTyped(int);								// 0204  0330
	vgui::Panel::InternalKeyCodeReleased(int);								// 0205  0334
	vgui::Panel::InternalKeyFocusTicked(void);								// 0206  0338
	vgui::Panel::InternalMouseFocusTicked(void);								// 0207  033C
	vgui::Panel::InternalInvalidateLayout(void);								// 0208  0340
	vgui::Panel::InternalMove(void);								// 0209  0344
	vgui::Frame::LoadControlSettings(char  const*,char  const*,KeyValues *,KeyValues *);								// 0210  0348
	vgui::EditablePanel::LoadUserConfig(char  const*,int);								// 0211  034C
	vgui::EditablePanel::SaveUserConfig(void);								// 0212  0350
	vgui::EditablePanel::LoadControlSettingsAndUserConfig(char  const*,int);								// 0213  0354
	vgui::EditablePanel::ActivateBuildMode(void);								// 0214  0358
	vgui::EditablePanel::GetBuildGroup(void);								// 0215  035C
	vgui::EditablePanel::CreateControlByName(char  const*);								// 0216  0360
	vgui::EditablePanel::SetControlString(char  const*,char  const*);								// 0217  0364
	vgui::EditablePanel::SetControlString(char  const*,wchar_t  const*);								// 0218  0368
	vgui::EditablePanel::SetControlInt(char  const*,int);								// 0219  036C
	vgui::EditablePanel::GetControlInt(char  const*,int);								// 0220  0370
	vgui::EditablePanel::GetControlString(char  const*,char  const*);								// 0221  0374
	vgui::EditablePanel::GetControlString(char  const*,char *,int,char  const*);								// 0222  0378
	vgui::EditablePanel::SetControlEnabled(char  const*,bool);								// 0223  037C
	vgui::EditablePanel::SetControlVisible(char  const*,bool);								// 0224  0380
	vgui::EditablePanel::SetDialogVariable(char  const*,char  const*);								// 0225  0384
	vgui::EditablePanel::SetDialogVariable(char  const*,wchar_t  const*);								// 0226  0388
	vgui::EditablePanel::SetDialogVariable(char  const*,int);								// 0227  038C
	vgui::EditablePanel::SetDialogVariable(char  const*,float);								// 0228  0390
	vgui::EditablePanel::RegisterControlSettingsFile(char  const*,char  const*);								// 0229  0394
	vgui::EditablePanel::GetFocusNavGroup(void);								// 0230  0398
	vgui::EditablePanel::OnDefaultButtonSet(unsigned int);								// 0231  039C
	vgui::EditablePanel::OnCurrentDefaultButtonSet(unsigned int);								// 0232  03A0
	vgui::EditablePanel::OnFindDefaultButton(void);								// 0233  03A4
	vgui::Frame::OnClose(void);								// 0234  03A8
	vgui::Frame::SetTitle(char  const*,bool);								// 0235  03AC
	vgui::Frame::SetTitle(wchar_t  const*,bool);								// 0236  03B0
	vgui::CConsoleDialog::Activate(void);								// 0237  03B4
	vgui::Frame::ActivateMinimized(void);								// 0238  03B8
	vgui::CConsoleDialog::Close(void);								// 0239  03BC
	vgui::Frame::CloseModal(void);								// 0240  03C0
	vgui::Frame::SetDeleteSelfOnClose(bool);								// 0241  03C4
	vgui::Frame::MoveToCenterOfScreen(void);								// 0242  03C8
	vgui::Frame::SetMoveable(bool);								// 0243  03CC
	vgui::Frame::IsMoveable(void);								// 0244  03D0
	vgui::Frame::SetSizeable(bool);								// 0245  03D4
	vgui::Frame::IsSizeable(void);								// 0246  03D8
	vgui::Frame::SetMenuButtonVisible(bool);								// 0247  03DC
	vgui::Frame::SetMinimizeButtonVisible(bool);								// 0248  03E0
	vgui::Frame::SetMaximizeButtonVisible(bool);								// 0249  03E4
	vgui::Frame::SetMinimizeToSysTrayButtonVisible(bool);								// 0250  03E8
	vgui::Frame::SetCloseButtonVisible(bool);								// 0251  03EC
	vgui::Frame::IsMinimized(void);								// 0252  03F0
	vgui::Frame::FlashWindow(void);								// 0253  03F4
	vgui::Frame::FlashWindowStop(void);								// 0254  03F8
	vgui::Frame::GetSysMenu(void);								// 0255  03FC
	vgui::Frame::SetSysMenu(vgui::Menu *);								// 0256  0400
	vgui::Frame::SetTitleBarVisible(bool);								// 0257  0404
	vgui::Frame::SetClipToParent(bool);								// 0258  0408
	vgui::Frame::GetClipToParent(void)const;								// 0259  040C
	vgui::Frame::SetSmallCaption(bool);								// 0260  0410
	vgui::Frame::IsSmallCaption(void)const;								// 0261  0414
	vgui::Frame::GetDraggerSize(void);								// 0262  0418
	vgui::Frame::GetCornerSize(void);								// 0263  041C
	vgui::Frame::GetBottomRightSize(void);								// 0264  0420
	vgui::Frame::GetCaptionHeight(void);								// 0265  0424
	vgui::Frame::DoModal(void);								// 0266  0428
	vgui::Frame::OnFinishedClose(void);								// 0267  042C
	vgui::Frame::OnMinimize(void);								// 0268  0430
	vgui::Frame::OnMinimizeToSysTray(void);								// 0269  0434
	vgui::Frame::OnCloseFrameButtonPressed(void);								// 0270  0438
	vgui::Frame::GetDefaultScreenPosition(int &,int &,int &,int &);								// 0271  043C
	vgui::Frame::GetClientArea(int &,int &,int &,int &);								// 0272  0440
	vgui::Frame::InternalSetTitle(char  const*);								// 0273  0444
	vgui::Frame::InternalFlashWindow(void);								// 0274  0448
	vgui::Frame::OnDialogVariablesChanged(KeyValues *);								// 0275  044C
	CGameConsoleDialog::OnCommandSubmitted(char  const*);								// 0276  0450
	CGameConsoleDialog::OnClosedByHittingTilde(void);								// 0277  0454
};


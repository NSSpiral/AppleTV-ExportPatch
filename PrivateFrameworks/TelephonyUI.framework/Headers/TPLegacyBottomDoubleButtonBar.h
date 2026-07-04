/* Runtime dump - TPLegacyBottomDoubleButtonBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyBottomDoubleButtonBar : TPLegacyBottomSingleButtonBar
{
    TPLegacyButton * _button2;
    UIView * _well1;
    UIView * _well2;
    UIView * _wellContainer;
}

+ (float)_wellPadding;

- (void)dealloc;
- (void)layoutSubviews;
- (TPLegacyBottomDoubleButtonBar *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (void)setButton:(TPLegacyButton *)arg0 andStyle:(char)arg1;
- (void)_layoutButtons;
- (float)_buttonWidth;
- (void)setButton2:(TPLegacyButton *)arg0 andStyle:(char)arg1;
- (TPLegacyButton *)button2;
- (void)setWellAlpha:(float)arg0;
- (TPLegacyBottomDoubleButtonBar *)initForIncomingCallWithFrame:(struct CGRect)arg0;
- (void)_updateButtonSettings:(NSDictionary *)arg0;
- (void)_layoutWells;
- (TPLegacyBottomDoubleButtonBar *)initForCallFailureWithFrame:(struct CGRect)arg0;
- (TPLegacyBottomDoubleButtonBar *)initForEmergencyCallWithFrame:(struct CGRect)arg0;
- (TPLegacyBottomDoubleButtonBar *)initForVideoChatWithFrame:(struct CGRect)arg0;
- (void)setDrawsSeparateWells:(char)arg0;

@end

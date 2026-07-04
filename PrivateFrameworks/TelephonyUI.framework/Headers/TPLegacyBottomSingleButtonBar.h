/* Runtime dump - TPLegacyBottomSingleButtonBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyBottomSingleButtonBar : TPLegacyBottomBar
{
    id _delegate;
    UIImageView * _backgroundView;
    UIView * _well;
    TPLegacyButton * _button;
    char _allowsDroppingIcons;
}

+ (UIImage *)_backgroundImage;

- (TPLegacyButton *)button;
- (void)dealloc;
- (void)layoutSubviews;
- (TPLegacyBottomSingleButtonBar *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (float)buttonWidth;
- (void)setButton:(TPLegacyButton *)arg0 andStyle:(char)arg1;
- (void)setSuppressDrawingBackground:(char)arg0;
- (void)setWellAlpha:(float)arg0;
- (TPLegacyBottomSingleButtonBar *)initForEndCallWithFrame:(struct CGRect)arg0;
- (TPLegacyBottomSingleButtonBar *)initForIncomingCallWaitingWithFrame:(struct CGRect)arg0;
- (TPLegacyBottomSingleButtonBar *)initForEndVideoWithFrame:(struct CGRect)arg0;
- (TPLegacyBottomSingleButtonBar *)initForTTYWithFrame:(struct CGRect)arg0;
- (TPLegacyBottomSingleButtonBar *)initForVoiceControlWithFrame:(struct CGRect)arg0;

@end

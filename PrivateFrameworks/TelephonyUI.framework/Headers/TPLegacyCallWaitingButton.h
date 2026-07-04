/* Runtime dump - TPLegacyCallWaitingButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyCallWaitingButton : UIImageView
{
    TPLegacyButton * _innerButton;
    id _type;
}

+ (NSObject *)_buttonForType:(int)arg0;
+ (struct CGSize)defaultSizeForType:(int)arg0;
+ (float)defaultVerticalCenteringOffset;

- (void)addTarget:(NSObject *)arg0 action:(SEL)arg1 forControlEvents:(unsigned int)arg2;
- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)addTarget:(NSObject *)arg0 action:(SEL)arg1 forEvents:(int)arg2;
- (void)removeTarget:(NSObject *)arg0 forEvents:(int)arg1;
- (TPLegacyCallWaitingButton *)initWithFrame:(struct CGRect)arg0 type:(struct CGSize)arg1;
- (TPLegacyCallWaitingButton *)initTopForIncomingCallWaiting;
- (TPLegacyCallWaitingButton *)initTopForTTY;
- (TPLegacyCallWaitingButton *)initBottomForIncomingCallWaiting;
- (TPLegacyCallWaitingButton *)initBottomForSecondIncomingCallWaiting;
- (TPLegacyCallWaitingButton *)initBottomForTTYWithTitle:(NSString *)arg0;
- (void)removeTarget:(NSObject *)arg0 forControlEvents:(unsigned int)arg1;

@end

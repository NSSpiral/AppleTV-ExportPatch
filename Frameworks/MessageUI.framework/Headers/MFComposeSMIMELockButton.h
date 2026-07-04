/* Runtime dump - MFComposeSMIMELockButton
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeSMIMELockButton : UIButton
{
    UIImageView * _lockedImageView;
    UIImageView * _unlockedImageView;
    char _wantsEncryption;
    char _canEncrypt;
    struct UIEdgeInsets touchInsets;
}

@property (nonatomic) struct UIEdgeInsets touchInsets;
@property (nonatomic) char wantsEncryption;
@property (nonatomic) char canEncrypt;

- (void)setWantsEncryption:(char)arg0 canEncrypt:(char)arg1 animated:(char)arg2;
- (void)setTouchInsets:(struct UIEdgeInsets)arg0;
- (void)_updateButtonAppearance;
- (void)_updateButtonAppearanceAnimated:(char)arg0;
- (char)wantsEncryption;
- (char)canEncrypt;
- (void)_closeLock;
- (void)_openLock;
- (struct UIEdgeInsets)touchInsets;
- (void)setWantsEncryption:(char)arg0;
- (void)setCanEncrypt:(char)arg0;
- (MFComposeSMIMELockButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setEnabled:(char)arg0;
- (void)setEnabled:(char)arg0 animated:(char)arg1;

@end

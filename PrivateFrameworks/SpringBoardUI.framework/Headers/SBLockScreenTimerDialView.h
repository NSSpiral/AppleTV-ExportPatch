/* Runtime dump - SBLockScreenTimerDialView
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenTimerDialView : UIView <SBLegibility>
{
    _UILegibilityView * _dialView;
    float _strength;
}

@property (nonatomic) float strength;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (SBLockScreenTimerDialView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (float)strength;
- (void)setStrength:(float)arg0;
- (void)updateForChangedSettings:(_UILegibilitySettings *)arg0;
- (NSDictionary *)_newDialViewForSettings:(NSDictionary *)arg0;
- (NSObject *)_imageNameForCurrentContentSize:(NSObject *)arg0;

@end

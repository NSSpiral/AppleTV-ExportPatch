/* Runtime dump - FBWindowContextHostWrapperView
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContextHostWrapperView : UIView <FBWindowContextAppearance>
{
    FBWindowContextHostManager * _manager;
    unsigned int _appearanceStyle;
    UIColor * _backgroundColorWhileNotHosting;
    UIColor * _backgroundColorWhileHosting;
}

@property (readonly, nonatomic) FBWindowContextHostManager * manager;
@property (nonatomic) unsigned int appearanceStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) UIColor * backgroundColorWhileHosting;
@property (retain, nonatomic) UIColor * backgroundColorWhileNotHosting;
@property (readonly, nonatomic) char contextHosted;
@property (readonly, nonatomic) struct CGRect referenceFrame;
@property (readonly, nonatomic) float level;

- (void)dealloc;
- (BRWindow *)window;
- (NSString *)description;
- (id)_hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1 windowServerHitTestWindow:(UIWindow *)arg2;
- (float)level;
- (void)didAddSubview:(_UIVisualEffectSubview *)arg0;
- (void)_didRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (void)updateFrame;
- (FBWindowContextHostManager *)manager;
- (void)_setAppearanceStyle:(unsigned int)arg0 force:(char)arg1;
- (void)_toggleBackgroundColorIfNecessary;
- (char)_isReallyHosting;
- (UIColor *)_backgroundColorWhileHosting;
- (UIColor *)_backgroundColorWhileNotHosting;
- (void)_hostingStatusChanged;
- (NSObject *)_stringForAppearanceStyle;
- (UIColor *)backgroundColorWhileHosting;
- (void)setBackgroundColorWhileHosting:(UIColor *)arg0;
- (UIColor *)backgroundColorWhileNotHosting;
- (void)setBackgroundColorWhileNotHosting:(UIColor *)arg0;
- (unsigned int)appearanceStyle;
- (void)setAppearanceStyle:(unsigned int)arg0;
- (char)isContextHosted;
- (struct CGRect)referenceFrame;
- (FBWindowContextHostWrapperView *)initWithHostManager:(NSObject *)arg0;
- (void)updateBackgroundColor;
- (void)clearManager;

@end

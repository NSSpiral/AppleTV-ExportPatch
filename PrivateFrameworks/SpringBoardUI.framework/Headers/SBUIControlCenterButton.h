/* Runtime dump - SBUIControlCenterButton
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIControlCenterButton : SBFButton <_UISettingsKeyObserver, SBUIControlCenterControl>
{
    struct UIEdgeInsets _bgCapInsets;
    UIVisualEffect * _normalStateEffect;
    UIVisualEffect * _highlightedStateEffect;
    UIVisualEffect * _disabledStateEffect;
    UIImageView * _backgroundImageView;
    UIImageView * _glyphImageView;
    UIVisualEffectView * _backgroundEffectView;
    char _useSmallButton;
    char _isCircleButton;
    char _isRectButton;
    <SBUIControlCenterButtonDelegate> * _delegate;
    UIImage * _normalBGImage;
    UIImage * _sourceGlyphImage;
    UIImage * _sourceSelectedGlyphImage;
    float _naturalHeight;
}

@property (nonatomic) <SBUIControlCenterButtonDelegate> * delegate;
@property (nonatomic) char useSmallButton;
@property (nonatomic) char isCircleButton;
@property (nonatomic) char isRectButton;
@property (retain, nonatomic) UIImage * normalBGImage;
@property (retain, nonatomic) UIImage * sourceGlyphImage;
@property (retain, nonatomic) UIImage * sourceSelectedGlyphImage;
@property (nonatomic) float naturalHeight;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)controlAppearanceDidChangeForState:(int)arg0;
+ (NSObject *)_circleBackgroundImageForSize:(struct CGSize)arg0;
+ (UIImage *)_circleBackgroundImage;
+ (UIImage *)_buttonWithBGImage:(UIImage *)arg0 glyphImage:(UIImage *)arg1 naturalHeight:(float)arg2;
+ (UIImage *)_roundRectBackgroundImage;
+ (UIImage *)_smallCircleBackgroundImage;
+ (SBUIControlCenterButton *)circularButton;
+ (SBUIControlCenterButton *)roundRectButton;

- (void)_updateEffects;
- (char)_drawingAsSelected;
- (SBUIControlCenterButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<SBUIControlCenterButtonDelegate> *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<SBUIControlCenterButtonDelegate> *)delegate;
- (void)setEnabled:(char)arg0;
- (char)_shouldAnimatePropertyWithKey:(NSString *)arg0;
- (void)setImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setBackgroundImage:(UIImage *)arg0;
- (void)settings:(_UISettings *)arg0 changedValueForKey:(NSString *)arg1;
- (int)_currentState;
- (void)_updateForStateChange;
- (void)setIsCircleButton:(char)arg0;
- (void)setIsRectButton:(char)arg0;
- (SBUIControlCenterButton *)initWithFrame:(struct CGRect)arg0 backgroundImage:(struct CGSize)arg1 glyphImage:(UIImage *)arg2 naturalHeight:(float)arg3;
- (void)_setBackgroundImage:(UIImage *)arg0 naturalHeight:(float)arg1;
- (void)setGlyphImage:(UIImage *)arg0 selectedGlyphImage:(UIImage *)arg1;
- (void)_pressAction;
- (void)setNormalBGImage:(UIImage *)arg0;
- (void)setSourceGlyphImage:(UIImage *)arg0;
- (void)setSourceSelectedGlyphImage:(UIImage *)arg0;
- (char)isCircleButton;
- (char)useSmallButton;
- (char)isRectButton;
- (struct CGRect)_rectForGlyph:(id)arg0 centeredInRect:(SEL)arg1;
- (void)_updateBackgroundForStateChange;
- (UIImage *)normalBGImage;
- (UIImage *)sourceGlyphImage;
- (void)_updateGlyphForStateChange;
- (UIImage *)sourceSelectedGlyphImage;
- (NSObject *)_glyphImageForState:(int)arg0;
- (UIImage *)_backgroundImageWithGlyphImage:(unsigned int)arg0 state:(int)arg1;
- (void)setNaturalHeight:(float)arg0;
- (void)setUseSmallButton:(char)arg0;
- (float)naturalHeight;

@end

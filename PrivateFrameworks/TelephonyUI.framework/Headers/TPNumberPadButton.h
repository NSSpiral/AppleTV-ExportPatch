/* Runtime dump - TPNumberPadButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>
{
    TPRevealingRingView * _revealingRingView;
    unsigned int character;
    UIColor * _color;
    CALayer * _glyphLayer;
    CALayer * _highlightedGlyphLayer;
}

@property (retain, nonatomic) UIColor * color;
@property (readonly, nonatomic) TPRevealingRingView * revealingRingView;
@property (nonatomic) float alphaOutsideAndInsideRing;
@property (retain) CALayer * glyphLayer;
@property (retain) CALayer * highlightedGlyphLayer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property unsigned int character;

+ (struct CGSize)defaultSize;
+ (float)horizontalPadding;
+ (TPNumberPadButton *)imageForCharacter:(unsigned int)arg0 highlighted:(char)arg1 whiteVersion:(char)arg2;
+ (TPNumberPadButton *)imageForCharacter:(unsigned int)arg0;
+ (TPNumberPadButton *)imageForCharacter:(unsigned int)arg0 highlighted:(char)arg1;
+ (float)verticalPadding;
+ (float)highlightCrossfadeNormalBeginTime;
+ (float)highlightCrossfadeHighlightBeginTime;
+ (float)highlightCrossfadeNormalFadeDuration;
+ (float)highlightCrossfadeHighlightFadeDuration;
+ (float)unhighlightCrossfadeNormalBeginTime;
+ (float)unhighlightCrossfadeHighlightBeginTime;
+ (float)unhighlightCrossfadeNormalFadeDuration;
+ (float)unhighlightCrossfadeHighlightFadeDuration;
+ (char)usesTelephonyGlyphsWhereAvailable;
+ (float)outerCircleDiameter;
+ (char)usesBoldAssets;
+ (struct UIEdgeInsets)paddingOutsideRing;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setHighlighted:(char)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (unsigned int)character;
- (UIColor *)defaultColor;
- (void)setCharacter:(unsigned int)arg0;
- (TPNumberPadButton *)initForCharacter:(unsigned int)arg0;
- (TPRevealingRingView *)revealingRingView;
- (void)setGlyphLayer:(CALayer *)arg0;
- (void)setHighlightedGlyphLayer:(CALayer *)arg0;
- (void)touchDown;
- (void)touchUp;
- (void)touchCancelled;
- (CALayer *)glyphLayer;
- (CALayer *)highlightedGlyphLayer;
- (void)setUsesColorDodgeBlending;
- (void)setUsesColorBurnBlending;
- (float)alphaOutsideAndInsideRing;
- (void)setAlphaOutsideAndInsideRing:(float)arg0;

@end

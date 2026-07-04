/* Runtime dump - UIKBRenderTraits
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderTraits : NSObject <NSCopying>
{
    NSMutableArray * _renderEffects;
    NSMutableArray * _foregroundRenderEffects;
    char _honorControlOpacity;
    char _controlOpacities;
    UIKBRenderGeometry * _geometry;
    UIKBGradient * _backgroundGradient;
    UIKBGradient * _layeredBackgroundGradient;
    UIKBGradient * _layeredForegroundGradient;
    UIKBTextStyle * _symbolStyle;
    UIKBTextStyle * _secondarySymbolStyle;
    UIKBTextStyle * _fallbackSymbolStyle;
    NSArray * _variantGeometries;
    UIKBRenderTraits * _variantTraits;
    UIKBRenderTraits * _highlightedVariantTraits;
    float _forceOpacity;
    int _blendForm;
    NSString * _hashString;
}

@property (retain, nonatomic) UIKBRenderGeometry * geometry;
@property (retain, nonatomic) UIKBGradient * backgroundGradient;
@property (retain, nonatomic) UIKBGradient * layeredBackgroundGradient;
@property (retain, nonatomic) UIKBGradient * layeredForegroundGradient;
@property (retain, nonatomic) UIKBTextStyle * symbolStyle;
@property (retain, nonatomic) UIKBTextStyle * secondarySymbolStyle;
@property (retain, nonatomic) UIKBTextStyle * fallbackSymbolStyle;
@property (readonly, nonatomic) NSArray * renderEffects;
@property (readonly, nonatomic) NSArray * foregroundRenderEffects;
@property (retain, nonatomic) NSArray * variantGeometries;
@property (retain, nonatomic) UIKBRenderTraits * variantTraits;
@property (retain, nonatomic) UIKBRenderTraits * highlightedVariantTraits;
@property (nonatomic) char controlOpacities;
@property (nonatomic) float forceOpacity;
@property (nonatomic) int blendForm;
@property (retain, nonatomic) NSString * hashString;

+ (NSArray *)emptyTraits;
+ (NSObject *)traitsWithGeometry:(UIKBRenderGeometry *)arg0;
+ (NSObject *)traitsWithSymbolStyle:(UIKBTextStyle *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (UIKBRenderTraits *)copyWithZone:(struct _NSZone *)arg0;
- (void)setBackgroundGradient:(UIKBGradient *)arg0;
- (UIKBRenderGeometry *)geometry;
- (void)setSymbolStyle:(UIKBTextStyle *)arg0;
- (UIKBTextStyle *)symbolStyle;
- (void)addRenderEffect:(NSObject *)arg0;
- (void)setVariantGeometries:(NSArray *)arg0;
- (void)setVariantTraits:(UIKBRenderTraits *)arg0;
- (void)setHighlightedVariantTraits:(UIKBRenderTraits *)arg0;
- (void)setBlendForm:(int)arg0;
- (void)setControlOpacities:(char)arg0;
- (UIKBRenderTraits *)variantTraits;
- (NSArray *)variantGeometries;
- (void)setLayeredBackgroundGradient:(UIKBGradient *)arg0;
- (void)removeAllRenderEffects;
- (void)setGeometry:(UIKBRenderGeometry *)arg0;
- (NSString *)hashString;
- (int)blendForm;
- (char)controlOpacities;
- (void)modifyForMasking;
- (void)setSecondarySymbolStyle:(UIKBTextStyle *)arg0;
- (UIKBTextStyle *)secondarySymbolStyle;
- (void)setForceOpacity:(float)arg0;
- (void)setLayeredForegroundGradient:(UIKBGradient *)arg0;
- (void)overlayWithTraits:(NSArray *)arg0;
- (UIKBGradient *)backgroundGradient;
- (float)forceOpacity;
- (UIKBGradient *)layeredBackgroundGradient;
- (UIKBGradient *)layeredForegroundGradient;
- (UIKBTextStyle *)fallbackSymbolStyle;
- (NSArray *)renderEffects;
- (NSArray *)foregroundRenderEffects;
- (UIKBRenderTraits *)highlightedVariantTraits;
- (void)setHashString:(NSString *)arg0;
- (void)addForegroundRenderEffect:(NSObject *)arg0;
- (void)setFallbackSymbolStyle:(UIKBTextStyle *)arg0;

@end

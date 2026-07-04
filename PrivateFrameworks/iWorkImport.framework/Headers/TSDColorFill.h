/* Runtime dump - TSDColorFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor * mColor;
}

@property (readonly, nonatomic) struct CGColor * CGColor;
@property (readonly, copy, nonatomic) TSUColor * color;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) float hue;
@property (readonly, nonatomic) float saturation;
@property (readonly, nonatomic) float brightness;
@property (readonly, nonatomic) float luminance;

+ (TSDColorFill *)instanceWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
+ (UIColor *)colorWithColor:(TSUColor *)arg0;
+ (UIColor *)keyPathsForValuesAffectingCGColor;
+ (TSDColorFill *)keyPathsForValuesAffectingOpacity;
+ (TSDColorFill *)keyPathsForValuesAffectingLuminance;
+ (TSDColorFill *)keyPathsForValuesAffectingHue;
+ (TSDColorFill *)keyPathsForValuesAffectingSaturation;
+ (TSDColorFill *)keyPathsForValuesAffectingBrightness;
+ (UIColor *)blackColor;
+ (UIColor *)clearColor;
+ (TSDColorFill *)colorWithWhite:(float)arg0 alpha:(float)arg1;
+ (struct CGColor *)whiteColor;
+ (UIColor *)colorWithCGColor:(struct CGColor *)arg0;
+ (TSDColorFill *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (UIColor *)grayColor;
+ (UIColor *)redColor;
+ (UIColor *)greenColor;
+ (UIColor *)blueColor;
+ (UIColor *)cyanColor;
+ (UIColor *)magentaColor;
+ (UIColor *)yellowColor;
+ (UIColor *)orangeColor;
+ (UIColor *)purpleColor;
+ (UIColor *)brownColor;
+ (UIColor *)colorWithUIColor:(UIColor *)arg0;
+ (UIColor *)randomColor;

- (void)saveToArchive:(struct FillArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSDColorFill *)initWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
- (char)isClear;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (SEL)mapThemeAssetSelector;
- (char)canApplyToCAShapeLayer;
- (void)applyToCAShapeLayer:(id)arg0 withScale:(float)arg1;
- (char)drawsInOneStep;
- (char)canApplyToCALayer;
- (void)applyToCALayer:(id)arg0 withScale:(float)arg1;
- (float)p_hsbComponentWithIndex:(unsigned long)arg0;
- (float)hue;
- (float)saturation;
- (void)dealloc;
- (struct CGColor *)CGColor;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSDColorFill *)copyWithZone:(struct _NSZone *)arg0;
- (char)isOpaque;
- (float)opacity;
- (TSDColorFill *)initWithWhite:(float)arg0 alpha:(float)arg1;
- (TSDColorFill *)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (TSUColor *)color;
- (TSDColorFill *)initWithCGColor:(struct CGColor *)arg0;
- (TSDColorFill *)initWithColor:(TSUColor *)arg0;
- (float)brightness;
- (TSDColorFill *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (TSUColor *)referenceColor;
- (TSDColorFill *)initWithUIColor:(UIColor *)arg0;
- (UIColor *)UIColor;
- (UIColor *)grayscaleColor;
- (UIColor *)invertedColor;
- (float)luminance;
- (char)isNearlyWhite;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (int)fillType;

@end

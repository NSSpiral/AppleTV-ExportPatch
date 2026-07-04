/* Runtime dump - TSUColor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUColor : NSObject <TSSPreset, TSSPresetSource, TSSPropertyCommandSerializing, NSCopying>
{
    struct CGColor * mCGColor;
}

@property (readonly, nonatomic) NSString * presetKind;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct CGColor * CGColor;

+ (NSString *)colorWithHexString:(NSString *)arg0;
+ (TSUColor *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (TSUColor *)p_defaultPresetColors:(int)arg0;
+ (UIColor *)blackColor;
+ (UIColor *)clearColor;
+ (TSUColor *)colorWithWhite:(float)arg0 alpha:(float)arg1;
+ (struct CGColor *)whiteColor;
+ (UIColor *)colorWithCGColor:(struct CGColor *)arg0;
+ (TSUColor *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (UIColor *)grayColor;
+ (UIColor *)lightGrayColor;
+ (UIColor *)redColor;
+ (UIColor *)greenColor;
+ (UIColor *)blueColor;
+ (UIColor *)cyanColor;
+ (UIColor *)magentaColor;
+ (UIColor *)yellowColor;
+ (UIColor *)orangeColor;
+ (UIColor *)purpleColor;
+ (UIColor *)brownColor;
+ (TSUColor *)colorWithHue:(float)arg0 saturation:(float)arg1 brightness:(float)arg2 alpha:(float)arg3;
+ (UIImage *)colorWithPatternImage:(struct CGImage *)arg0;
+ (UIColor *)colorWithUIColor:(UIColor *)arg0;
+ (UIColor *)randomColor;

- (TSUColor *)initWithHexString:(NSString *)arg0;
- (float)hueComponent;
- (float)saturationComponent;
- (float)brightnessComponent;
- (void)saveToMessage:(struct Color *)arg0;
- (void)saveToArchive:(struct Color *)arg0 archiver:(NSObject *)arg1;
- (TSUColor *)initWithArchive:(struct Color *)arg0 unarchiver:(struct Color)arg1;
- (NSString *)presetKind;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSUColor *)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(struct Message)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(NSObject *)arg1;
- (void)dealloc;
- (struct CGColor *)CGColor;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (UIColor *)colorWithAlphaComponent:(float)arg0;
- (TSUColor *)copyWithZone:(struct _NSZone *)arg0;
- (char)isOpaque;
- (TSUColor *)initWithHue:(float)arg0 saturation:(float)arg1 brightness:(float)arg2 alpha:(float)arg3;
- (TSUColor *)initWithWhite:(float)arg0 alpha:(float)arg1;
- (TSUColor *)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (float)alphaComponent;
- (TSUColor *)initWithCGColor:(struct CGColor *)arg0;
- (TSUColor *)initWithPatternImage:(struct CGImage *)arg0;
- (TSUColor *)initWithUIColor:(UIColor *)arg0;
- (NSString *)hexString;
- (float)redComponent;
- (float)greenComponent;
- (float)blueComponent;
- (float)p_rgbComponentWithIndex:(unsigned char)arg0;
- (NSObject *)newBlendedColorWithFraction:(float)arg0 ofColor:(UIColor *)arg1;
- (char)isAlmostEqualToColor:(UIColor *)arg0;
- (void)getRGBAComponents:(float *)arg0;
- (UIColor *)UIColor;
- (UIColor *)grayscaleColor;
- (UIColor *)invertedColor;
- (float)luminance;
- (char)isNearlyWhite;
- (NSObject *)blendedColorWithFraction:(float)arg0 ofColor:(UIColor *)arg1;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (TSUColor *)initWithMessage:(struct Color *)arg0;

@end

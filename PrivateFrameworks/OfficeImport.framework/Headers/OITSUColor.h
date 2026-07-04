/* Runtime dump - OITSUColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUColor : NSObject <NSCopying>
{
    struct CGColor * mCGColor;
}

@property (readonly) struct CGColor * CGColor;

+ (UIColor *)blackColor;
+ (UIColor *)clearColor;
+ (OITSUColor *)colorWithWhite:(float)arg0 alpha:(float)arg1;
+ (struct CGColor *)whiteColor;
+ (UIColor *)colorWithCGColor:(struct CGColor *)arg0;
+ (OITSUColor *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
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
+ (OITSUColor *)colorWithHue:(float)arg0 saturation:(float)arg1 brightness:(float)arg2 alpha:(float)arg3;
+ (UIImage *)colorWithPatternImage:(struct CGImage *)arg0;
+ (OITSUColor *)colorWithCalibratedRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (UIColor *)colorWithUIColor:(UIColor *)arg0;
+ (UIColor *)randomColor;
+ (OITSUColor *)colorWithBinaryRed:(int)arg0 green:(int)arg1 blue:(int)arg2 alpha:(int)arg3;
+ (OITSUColor *)colorWithBinaryRed:(int)arg0 green:(int)arg1 blue:(int)arg2;
+ (OITSUColor *)colorWithCalibratedHue:(float)arg0 saturation:(float)arg1 brightness:(float)arg2 alpha:(float)arg3;
+ (OITSUColor *)colorWithBGR:(unsigned long)arg0;
+ (UIColor *)colorWithSystemColorID:(int)arg0;
+ (UIColor *)stringForSystemColorID:(int)arg0;
+ (UIColor *)stringForColor:(UIColor *)arg0;
+ (OITSUColor *)colorWithCsColour:(struct CsColour *)arg0;
+ (UIColor *)colorWithEshColor:(struct EshColor *)arg0;
+ (NSData *)colorWithRGBBytes:(unsigned char)arg0 :(unsigned char)arg1 :(unsigned char)arg2;
+ (OITSUColor *)colorWithBGRValue:(long)arg0;
+ (OITSUColor *)colorWithRGBValue:(long)arg0;

- (void)dealloc;
- (struct CGColor *)CGColor;
- (OITSUColor *)copy;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (UIColor *)colorWithAlphaComponent:(float)arg0;
- (void)set;
- (OITSUColor *)copyWithZone:(struct _NSZone *)arg0;
- (char)isOpaque;
- (OITSUColor *)initWithHue:(float)arg0 saturation:(float)arg1 brightness:(float)arg2 alpha:(float)arg3;
- (OITSUColor *)initWithWhite:(float)arg0 alpha:(float)arg1;
- (OITSUColor *)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (float)alphaComponent;
- (OITSUColor *)initWithCGColor:(struct CGColor *)arg0;
- (OITSUColor *)initWithPatternImage:(struct CGImage *)arg0;
- (OITSUColor *)initWithUIColor:(UIColor *)arg0;
- (char)isBlack;
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
- (struct ?)ttColor;
- (id)newSolidColoredBitmap:(struct CGSize)arg0;
- (UIImage *)solidColoredPngImage;
- (unsigned long)toBGR;
- (UIColor *)colorWithTintValue:(double)arg0;
- (UIColor *)colorWithShadeValue:(double)arg0;
- (struct CsColour)csColour;
- (struct EshColor)eshColor;
- (void)getRGBBytes:(char *)arg0 :(char *)arg1 :(char *)arg2;

@end

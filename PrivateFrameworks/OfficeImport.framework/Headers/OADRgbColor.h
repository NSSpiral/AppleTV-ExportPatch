/* Runtime dump - OADRgbColor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRgbColor : OADColor
{
    float mRed;
    float mGreen;
    float mBlue;
}

+ (UIColor *)rgbColorWithTSUColor:(UIColor *)arg0;
+ (OADRgbColor *)rgbColorWithRedByte:(float)arg0 greenByte:(float)arg1 blueByte:(float)arg2;
+ (OADRgbColor *)rgbColorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2;
+ (OADRgbColor *)rgbColorWithWhite:(float)arg0;
+ (OADRgbColor *)rgbColorWithWhiteByte:(float)arg0;
+ (OADRgbColor *)black;
+ (OADRgbColor *)white;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADRgbColor *)copyWithZone:(struct _NSZone *)arg0;
- (float)red;
- (float)green;
- (float)blue;
- (char)isBlack;
- (OADRgbColor *)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2;
- (OADRgbColor *)initWithRedByte:(float)arg0 greenByte:(float)arg1 blueByte:(float)arg2;
- (unsigned char)redByte;
- (unsigned char)greenByte;
- (unsigned char)blueByte;
- (OADRgbColor *)initWithWhite:(float)arg0;
- (OADRgbColor *)initWithWhiteByte:(float)arg0;
- (NSObject *)rgbColorWithFraction:(float)arg0 ofRgbColor:(UIColor *)arg1;
- (char)isWhite;

@end

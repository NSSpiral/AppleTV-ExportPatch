/* Runtime dump - OADPatternFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPatternFill : OADFill
{
    OADColor * mFgColor;
    char mIsFgColorOverridden;
    OADColor * mBgColor;
    char mIsBgColorOverridden;
    OADPattern * mPattern;
    char mIsPatternOverridden;
}

+ (OADPatternFill *)defaultProperties;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADPatternFill *)copyWithZone:(struct _NSZone *)arg0;
- (void)setColor:(UIColor *)arg0;
- (void)setStyleColor:(UIColor *)arg0;
- (char)isFgColorOverridden;
- (char)isBgColorOverridden;
- (char)isPatternOverridden;
- (id)namedImageDataWithBlipCollection:(id)arg0;
- (OADPatternFill *)initWithDefaults;
- (void)setParent:(NSObject *)arg0;
- (UIColor *)bgColor;
- (void)setBgColor:(NSString *)arg0;
- (NSString *)fgColor;
- (void)setFgColor:(NSString *)arg0;
- (TSDStrokePattern *)pattern;
- (void)setPattern:(NSObject *)arg0;

@end

/* Runtime dump - OADTableTextStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableTextStyle : NSObject
{
    OADFontReference * mFontReference;
    OADColor * mColor;
    int mBold;
    int mItalic;
}

+ (OADTableTextStyle *)defaultStyle;
+ (OADTableTextStyle *)defaultColor;
+ (OADTableTextStyle *)defaultFontReference;
+ (int)defaultBold;
+ (int)defaultItalic;

- (void)dealloc;
- (OADTableTextStyle *)init;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (int)bold;
- (int)italic;
- (void)setFontReference:(NSObject *)arg0;
- (void)setBold:(int)arg0;
- (void)setItalic:(int)arg0;
- (NSObject *)shallowCopy;
- (void)applyOverridesFrom:(NSObject *)arg0;
- (NSObject *)fontReference;

@end

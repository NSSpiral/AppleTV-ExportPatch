/* Runtime dump - OADBaseStylesBase
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBaseStylesBase : NSObject
{
    OADColorScheme * mColorScheme;
    OADStyleMatrix * mStyleMatrix;
    OADFontScheme * mFontScheme;
}

@property (retain, nonatomic) OADColorScheme * colorScheme;
@property (retain, nonatomic) OADStyleMatrix * styleMatrix;
@property (retain, nonatomic) OADFontScheme * fontScheme;

- (void)dealloc;
- (NSString *)description;
- (OADColorScheme *)colorScheme;
- (void)setColorScheme:(OADColorScheme *)arg0;
- (OADStyleMatrix *)styleMatrix;
- (OADFontScheme *)fontScheme;
- (void)setStyleMatrix:(OADStyleMatrix *)arg0;
- (void)setFontScheme:(OADFontScheme *)arg0;

@end

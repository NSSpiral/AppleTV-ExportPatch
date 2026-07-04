/* Runtime dump - TCOfficeFontInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCOfficeFontInfo : NSObject
{
    char _isBold;
    char _isItalic;
    NSString * _fontName;
    NSString * _alphaFontName;
}

@property (retain, nonatomic) NSString * fontName;
@property (retain, nonatomic) NSString * alphaFontName;
@property (nonatomic) char isBold;
@property (nonatomic) char isItalic;

- (NSString *)description;
- (NSString *)fontName;
- (char)isBold;
- (void)setFontName:(NSString *)arg0;
- (char)isItalic;
- (NSString *)alphaFontName;
- (void)setAlphaFontName:(NSString *)arg0;
- (void)setIsBold:(char)arg0;
- (void)setIsItalic:(char)arg0;

@end

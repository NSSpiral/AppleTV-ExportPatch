/* Runtime dump - TSWPFont
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFont : NSObject
{
    NSString * _fontName;
    NSString * _compatibilityName;
    NSString * _displayName;
    NSString * _familyName;
    unsigned int _hash;
}

@property (copy, nonatomic) NSString * fontName;
@property (copy, nonatomic) NSString * compatibilityName;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSString * familyName;

+ (NSString *)fontWithName:(NSString *)arg0 compatibilityName:(NSString *)arg1;
+ (TSWPFont *)fontForStyles:(id *)arg0 count:(unsigned int)arg1;
+ (char)isKeyValueProxyLeafType;
+ (NSString *)fontWithName:(NSString *)arg0;

- (TSWPFont *)initWithFontName:(NSString *)arg0 compatibilityName:(NSString *)arg1;
- (void)setCompatibilityName:(NSString *)arg0;
- (NSString *)compatibilityName;
- (TSWPFont *)initWithFontName:(NSString *)arg0;
- (void)dealloc;
- (TSWPFont *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSWPFont *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)fontName;
- (NSString *)familyName;
- (void)setFontName:(NSString *)arg0;
- (NSString *)displayName;

@end

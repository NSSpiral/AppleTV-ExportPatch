/* Runtime dump - TSWPFontCacheKey
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontCacheKey : NSObject
{
    NSString * _fontName;
    float _fontSize;
    unsigned int _hash;
}

@property (readonly, nonatomic) NSString * fontName;
@property (readonly, nonatomic) float fontSize;

+ (NSString *)cacheKeyWithFontName:(NSString *)arg0 size:(float)arg1;

- (TSWPFontCacheKey *)initWithFontName:(NSString *)arg0 size:(float)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)fontName;
- (float)fontSize;

@end

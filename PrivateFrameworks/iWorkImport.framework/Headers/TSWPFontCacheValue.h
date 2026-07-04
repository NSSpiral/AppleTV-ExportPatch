/* Runtime dump - TSWPFontCacheValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontCacheValue : NSObject
{
    struct __CTFont * _ctFont;
}

@property (readonly, nonatomic) struct __CTFont * ctFont;

+ (UIFont *)cacheValueWithCTFont:(struct __CTFont *)arg0;

- (struct __CTFont *)ctFont;
- (TSWPFontCacheValue *)initWithCTFont:(struct __CTFont *)arg0;
- (void)dealloc;

@end

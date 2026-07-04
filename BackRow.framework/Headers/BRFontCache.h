/* Runtime dump - BRFontCache
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRFontCache : BRSingleton
{
    struct CGSize _displaySize;
    NSDictionary * _cache;
}

+ (BRFontCache *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)setDisplaySize:(struct CGSize)arg0;
- (struct __CTFont *)_createFontForAttributes:(NSDictionary *)arg0;
- (NSString *)addRealFontsToAttributedString:(NSString *)arg0;
- (struct __CTFont *)createFontForRowHeight:(float)arg0 fontName:(NSString *)arg1;
- (void)dealloc;
- (BRFontCache *)init;

@end

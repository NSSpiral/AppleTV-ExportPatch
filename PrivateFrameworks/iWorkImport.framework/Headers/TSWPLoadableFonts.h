/* Runtime dump - TSWPLoadableFonts
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLoadableFonts : NSObject
{
    struct TSWPLoadableFontInfo * _loadableFonts;
    unsigned int _loadableFontCount;
    char _allFontsLoaded;
}

+ (TSWPLoadableFonts *)sharedInstance;
+ (TSWPLoadableFonts *)allocWithZone:(struct _NSZone *)arg0;
+ (TSWPLoadableFonts *)_singletonAlloc;

- (void)backgroundLoadAll;
- (void)loadFontWithName:(NSString *)arg0;
- (void)loadAll;
- (void)p_loadFontWithInfo:(struct TSWPLoadableFontInfo *)arg0;
- (TSWPLoadableFonts *)retain;
- (void)release;
- (TSWPLoadableFonts *)init;
- (TSWPLoadableFonts *)autorelease;
- (unsigned int)retainCount;
- (TSWPLoadableFonts *)copyWithZone:(struct _NSZone *)arg0;

@end

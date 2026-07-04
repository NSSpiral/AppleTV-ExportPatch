/* Runtime dump - TSWPFontCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontCache : NSObject
{
    TSULRUCache * _fontCache;
    NSArray * _familyNames;
    NSMutableDictionary * _familyDisplayNames;
    NSArray * _familyFonts;
    NSMutableArray * _cachedAvailableMembers;
    NSString * _cachedMembersFamilyName;
}

+ (TSWPFontCache *)allocWithZone:(struct _NSZone *)arg0;
+ (TSWPFontCache *)sharedCache;
+ (TSWPFontCache *)_singletonAlloc;

- (struct __CTFont *)createFontWithName:(NSString *)arg0 size:(float)arg1;
- (NSString *)displayNameForFontFamily:(id)arg0;
- (void)p_FontWasDownloaded:(id)arg0;
- (NSArray *)p_excludedFamilyNames;
- (id)sortedFontFamilies;
- (NSObject *)sortedFontFamilyEntriesForStylesheet:(NSObject *)arg0;
- (id)availableMembersOfFontFamily:(id)arg0;
- (TSWPFontCache *)retain;
- (void)release;
- (void)dealloc;
- (TSWPFontCache *)init;
- (TSWPFontCache *)autorelease;
- (unsigned int)retainCount;
- (TSWPFontCache *)copyWithZone:(struct _NSZone *)arg0;

@end

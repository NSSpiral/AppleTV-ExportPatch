/* Runtime dump - TSWPFontHeightCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFontHeightCache : NSObject
{
    struct list<unsigned long, std::__1::allocator<unsigned long> > _fontHashList;
    struct map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry> > > _fontHashToInfoMap;
    unsigned int _cacheSize;
    unsigned int _maxCacheSize;
    struct _opaque_pthread_rwlock_t _lock;
}

+ (TSWPFontHeightCache *)allocWithZone:(struct _NSZone *)arg0;
+ (TSWPFontHeightCache *)sharedCache;
+ (TSWPFontHeightCache *)_singletonAlloc;

- (struct ?)fontHeightInfoForFont:(struct __CTFont *)arg0;
- (char)p_findEntryForFont:(struct __CTFont *)arg0 outHeightInfo:(struct ? *)arg1 collision:(char *)arg2;
- (void)p_addEntryForFont:(struct __CTFont *)arg0 heightInfo:(struct ? *)arg1;
- (TSWPFontHeightCache *)retain;
- (void)release;
- (void)dealloc;
- (TSWPFontHeightCache *)init;
- (TSWPFontHeightCache *)autorelease;
- (unsigned int)retainCount;
- (TSWPFontHeightCache *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

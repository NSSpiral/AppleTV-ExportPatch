/* Runtime dump - PLCacheEntry
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCacheEntry : NSObject
{
    id _object;
    struct lruEntry * _entry;
}

- (void)dealloc;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;
- (struct lruEntry *)lruListEntry;

@end

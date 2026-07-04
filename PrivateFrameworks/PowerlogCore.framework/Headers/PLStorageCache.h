/* Runtime dump - PLStorageCache
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLStorageCache : NSObject
{
    NSMutableDictionary * _lastEntryCache;
}

@property (retain, nonatomic) NSMutableDictionary * lastEntryCache;

- (void).cxx_destruct;
- (char)shouldCache:(char *)arg0;
- (NSMutableDictionary *)lastEntryCache;
- (void)clearLastEntryCache:(NSObject *)arg0;
- (void)updateLastEntryCache:(NSObject *)arg0 wasUpdate:(char)arg1;
- (NSCache *)readLastEntryCache:(NSObject *)arg0 withID:(int)arg1;
- (void)setLastEntryCache:(NSMutableDictionary *)arg0;

@end

/* Runtime dump - SYDJournal
 * Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDJournal : NSObject
{
    NSMutableDictionary * store;
    NSMutableDictionary * journal;
    char readonly;
}

- (SYDJournal *)initWithStore:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (SYDJournal *)init;
- (NSString *)description;
- (NSNumber *)changesSinceChangeCount:(long long)arg0;
- (long long)maximumChangeCount;
- (SYDJournal *)initWithMutableStore:(NSObject *)arg0;
- (void)addChange:(int)arg0 forKey:(NSString *)arg1 changeCount:(long long)arg2;
- (int)changeSinceChangeCount:(long long)arg0 forKey:(NSString *)arg1;
- (char)removeChangesUntilChangeCount:(long long)arg0;

@end

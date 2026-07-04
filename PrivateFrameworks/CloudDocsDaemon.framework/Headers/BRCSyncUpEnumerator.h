/* Runtime dump - BRCSyncUpEnumerator
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncUpEnumerator : NSEnumerator
{
    unsigned int _batchSize;
    unsigned int _maxDepth;
    BRCLocalContainer * _container;
    NSMutableSet * _whitelist;
    NSMutableSet * _blacklist;
    NSMutableDictionary * _tombstonesEmbargo;
    NSMutableIndexSet * _returned;
    struct PQLResultSet * _enumerator;
    NSMutableArray * _stack;
    int _stage;
    unsigned long long _retryAfter;
}

@property (readonly, nonatomic) unsigned int batchSize;
@property (readonly, nonatomic) unsigned long long retryAfter;

- (void)invalidate;
- (NSObject *)nextObject;
- (void).cxx_destruct;
- (BRCSyncUpEnumerator *)initWithLocalContainer:(BRCLocalContainer *)arg0;
- (unsigned int)batchSize;
- (unsigned long long)retryAfter;
- (char)_blackListStackIfItemThrottled:(id)arg0 now:(unsigned long long)arg1;
- (NSObject *)_nextLiveItem;
- (id)_nextTombstone;
- (struct PQLResultSet *)_documentsOrAliasesNeedingSyncUpEnumerator;
- (struct PQLResultSet *)_liveOrNewDirectoriesNeedingSyncUpEnumerator;
- (struct PQLResultSet *)_tombstoneLeavesNeedingSyncUpEnumerator;

@end

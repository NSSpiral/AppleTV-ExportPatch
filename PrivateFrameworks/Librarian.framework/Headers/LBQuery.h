/* Runtime dump - LBQuery
 * Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

@interface LBQuery : NSObject
{
    NSMetadataQuery * _query;
    unsigned int _accumulatedItemCount;
    NSMutableArray * _changes;
    NSMutableDictionary * _toBeRemoved;
    NSMutableDictionary * _toBeReplaced;
    NSMutableDictionary * _toBeInserted;
    NSMutableIndexSet * _removalSet;
    NSMutableIndexSet * _replacementSet;
    NSMutableIndexSet * _insertionSet;
    BOOL _pendingChanges;
    BOOL _ubiquitousGatherComplete;
    int _queryState;
    int _previousQueryState;
    char _synchronous;
    NSArray * _values;
    NSArray * _sortingAttributes;
    struct ? _batchingParameters;
    NSMutableArray * _results;
    NSMutableDictionary * _resultsDict;
    /* block */ id * _create_result_fn;
    void * _create_result_context;
    /* block */ id * _create_result_callbacks_equal;
    /* block */ id * _create_result_callbacks_release;
    /* block */ id * _create_value_fn;
    void * _create_value_context;
    /* block */ id * _create_value_callbacks_equal;
    /* block */ id * _create_value_callbacks_release;
    NSArray * _searchScopes;
    unsigned long _scopeOptions;
    /* block */ id * _sort_fn;
    void * _sort_context;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    struct __LBItemUpdateObserver * _observer;
    LBFSEventsWatcher * _watcher;
    struct __CFRunLoop * _runLoop;
    NSOperationQueue * _queryQueue;
    BOOL _pendingNote;
    unsigned long _notifyInterval;
    int _disableCount;
    NSMutableDictionary * _created;
    NSPredicate * _predicate;
    struct _opaque_pthread_mutex_t _stateLock;
}

- (unsigned int)resultCount;
- (void)disableUpdates;
- (void)enableUpdates;
- (void *)resultAtIndex:(SEL)arg0;
- (int)indexOfResult:(void *)arg0;
- (NSString *)attributeValueForName:(NSString *)arg0 forResultAtIndex:(int)arg1;
- (unsigned int)countOfResultsForAttributeName:(NSString *)arg0 value:(NSObject *)arg1;
- (NSObject *)valuesOfAttribute:(NSObject *)arg0;
- (void)processUpdates;
- (unsigned char)executeWithOptions:(unsigned long)arg0;
- (void)setSearchScope:(NSString *)arg0 withOptions:(unsigned long)arg1;
- (void)setSortComparator:(/* block */ id *)arg0 withContext:(void *)arg1;
- (void)setCreateValueFunction:(/* block */ id *)arg0 withContext:(void *)arg1 callbacks:(struct ? *)arg2;
- (void)setCreateResultFunction:(/* block */ id *)arg0 withContext:(void *)arg1 callbacks:(struct ? *)arg2;
- (LBQuery *)initWithQuery:(NSMetadataQuery *)arg0 values:(NSArray *)arg1 sortingAttributes:(NSArray *)arg2 items:(NSArray *)arg3;
- (void)setBatchingParameters:(struct ?)arg0;
- (void)dealloc;
- (void)stop;
- (NSPredicate *)predicate;
- (NSOperationQueue *)queryQueue;
- (void)setQueryQueue:(NSOperationQueue *)arg0;
- (void)performBlock:(id /* block */)arg0;
- (void)_runQuery;
- (void)_processUpdates;
- (void)_disableUpdates;
- (void)startObserver;
- (void)_sendNote;
- (void)_enableUpdates;
- (void)postNote:(struct __CFString *)arg0;
- (void)_processChanges;
- (void)addItemWithURL:(NSString *)arg0 usingInfo:(NSDictionary *)arg1;
- (void)addCreatedURL:(NSURL *)arg0 withInfo:(NSDictionary *)arg1;
- (void)deleteURL:(NSURL *)arg0;
- (void)addChangeToURL:(NSURL *)arg0 withInfo:(NSDictionary *)arg1;
- (void)__updateQueryResultForURL:(NSURL *)arg0 info:(NSDictionary *)arg1 updateType:(int)arg2;
- (void)_updateQueryResultForURL:(NSURL *)arg0 info:(NSDictionary *)arg1 updateType:(int)arg2;
- (void)_willChange:(unsigned int)arg0 inSet:(NSSet *)arg1;
- (void)_didChange:(unsigned int)arg0 inSet:(NSSet *)arg1;
- (void)_createChangeSets;
- (void)_willReplace:(_UITextUndoOperationReplace *)arg0;
- (void)_didReplace:(_UITextUndoOperationReplace *)arg0;
- (void)_willRemove:(id)arg0;
- (void)_didRemove:(id)arg0;
- (void)_willInsert:(_NSOrderedSetDiffInsert *)arg0;
- (void)_didInsert:(_NSOrderedSetDiffInsert *)arg0;
- (void)sendNote;
- (void)updateQueryResultForURL:(NSURL *)arg0 info:(NSDictionary *)arg1 updateType:(int)arg2;

@end

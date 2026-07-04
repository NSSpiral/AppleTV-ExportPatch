/* Runtime dump - BRQuery
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQuery : NSObject <BRNotificationReceiverDelegate>
{
    NSMutableArray * _results;
    NSMutableDictionary * _resultsByRowID;
    BRNotificationReceiver * _receiver;
    NSMetadataQuery * _query;
    NSPredicate * _predicate;
    NSString * _bundleIdentifier;
    NSMutableDictionary * _toBeRemovedByFileObjectID;
    NSMutableDictionary * _toBeReplacedByFileObjectID;
    NSMutableDictionary * _toBeInsertedByFileObjectID;
    int _queryState;
    char _ubiquitousGatherComplete;
    char _needsCrashMarking;
    char _needsCrashEvicting;
    char _sendHasUpdateNotification;
    NSArray * _values;
    NSArray * _sortingAttributes;
    struct ? _batchingParameters;
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
    struct __CFRunLoop * _runLoop;
    NSOperationQueue * _queryQueue;
    int _disableCount;
}

@property NSMetadataQuery * query;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURL *)willBeginPossibleMoveOfItemAtURL:(NSURL *)arg0 toURL:(NSURL *)arg1;
+ (void)initialize;
+ (void)didEndPossibleFileOperation:(NSObject *)arg0;
+ (NSURL *)willBeginPossibleCreationOfItemAtURL:(NSURL *)arg0;
+ (NSURL *)willBeginPossibleDeletionOfItemAtURL:(NSURL *)arg0;

- (unsigned int)resultCount;
- (void)disableUpdates;
- (void)enableUpdates;
- (void *)resultAtIndex:(SEL)arg0;
- (int)indexOfResult:(void *)arg0;
- (NSString *)attributeValueForName:(NSString *)arg0 forResultAtIndex:(int)arg1;
- (unsigned int)countOfResultsForAttributeName:(NSString *)arg0 value:(NSObject *)arg1;
- (NSObject *)valuesOfAttribute:(NSObject *)arg0;
- (void)processUpdates;
- (void)setSendHasUpdateNotification:(char)arg0;
- (unsigned char)executeWithOptions:(unsigned long)arg0;
- (void)setExternalDocumentsBundleIdentifier:(NSString *)arg0;
- (void)setSearchScope:(NSString *)arg0 withOptions:(unsigned long)arg1;
- (void)setSortComparator:(/* block */ id *)arg0 withContext:(void *)arg1;
- (void)setCreateValueFunction:(/* block */ id *)arg0 withContext:(void *)arg1 callbacks:(struct ? *)arg2;
- (void)setCreateResultFunction:(/* block */ id *)arg0 withContext:(void *)arg1 callbacks:(struct ? *)arg2;
- (BRQuery *)initWithQuery:(NSMetadataQuery *)arg0 values:(NSArray *)arg1 sortingAttributes:(NSArray *)arg2 items:(NSArray *)arg3;
- (void)setBatchingParameters:(struct ?)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSMetadataQuery *)query;
- (void)stop;
- (void)setQuery:(NSMetadataQuery *)arg0;
- (NSOperationQueue *)queryQueue;
- (void)setQueryQueue:(NSOperationQueue *)arg0;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg0;
- (void)notificationsReceiverDidFinishGathering:(id)arg0;
- (void)notificationsReceiverDidInvalidate:(NSDate *)arg0;
- (void)notificationReceiverDidReceiveNotifications:(id)arg0;
- (void)_performBlockAsync:(id)arg0;
- (void)_setQueryState:(int)arg0;
- (void)_startReceiver;
- (void)_runQuery;
- (NSObject *)_replacementObjectForQueryItem:(NSObject *)arg0;
- (void)_postNote:(struct __CFString *)arg0;
- (NSObject *)_replacementObjectsForArrayOfQueryItem:(NSObject *)arg0;
- (void)_postNote:(struct __CFString *)arg0 userInfo:(NSDictionary *)arg1;
- (char)_collectUpdates:(id)arg0;
- (void)_processUpdates;
- (void)_sendHasUpdateNotificationIfNeeded;
- (void)_processChanges:(id)arg0;
- (void)finalize;

@end

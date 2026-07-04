/* Runtime dump - MFLibraryContentIndex
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryContentIndex : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _path;
    NSString * _indexName;
    double _startNonIdle;
    int _state;
    NSMutableArray * _pendingIndexableItems;
    NSMutableIndexSet * _pendingRemovals;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _indexingQueue;
    unsigned int _throttledBatchSize;
    <MFLibraryContentIndexDataSource> * _dataSource;
    NSObject<OS_dispatch_queue> * _dataSourceQueue;
    NSObject<OS_dispatch_queue> * _utilityPriorityQueue;
    NSObject<OS_dispatch_queue> * _foregroundPriorityQueue;
    _MFContentIndexWrapper * _contentIndexWrapper;
    int _invalidated;
    _MFLibraryContentIndexResultsCache * _resultsCache;
    id _isForeground;
    id _refreshing;
    id _shouldReopen;
    id _processPendingChangesScheduled;
}

- (void)refresh;
- (void)dealloc;
- (void)applicationWillSuspend;
- (void)suspend;
- (void)resume;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)documentIdentifiersMatchingCriterion:(id)arg0 mailboxIDs:(id)arg1;
- (char)isSearchable;
- (MFLibraryContentIndex *)initWithPath:(NSString *)arg0 indexName:(NSString *)arg1 dataSource:(<MFLibraryContentIndexDataSource> *)arg2;
- (void)invalidateAndWait;
- (void)applicationWillResume;
- (void)indexItems:(NSArray *)arg0;
- (void)removeItemsWithDocumentIdentifiers:(id)arg0;
- (void)_updateDataSourceQueueTargetIsForeground:(char)arg0;
- (void)_markInvalidated;
- (void)_transitionToNextStatePaused:(char)arg0;
- (void)scheduleProcessPendingItems;
- (NSOperationQueue *)_copyContentIndex_indexingQueue;
- (void)_processIndexingBatch:(struct __CXIndex *)arg0;
- (void)_processRemovals:(struct __CXIndex *)arg0;
- (void)forceReopen;
- (void)_processRefreshRequest;
- (void)_transitionToNextState;
- (NSObject *)_copyContentIndex;
- (struct __CXQueryNode *)_createQueryNodeFromCriterion:(id)arg0;
- (struct __CXQueryNode *)_createQueryNodeFromMailboxIDs:(id)arg0;
- (struct __CXQuery *)_createQueryFromCriterion:(id)arg0 mailboxIDs:(id)arg1 contentIndex:(struct __CXIndex *)arg2;
- (NSString *)_indexFullPath;
- (void)_dataSourceInvalidateItemsGreaterThanTransactionId:(unsigned int)arg0;
- (NSObject *)_consumeBatchOfSize:(unsigned int)arg0;
- (unsigned int)_addItem:(NSObject *)arg0 toContentIndex:(struct __CXIndex *)arg1;
- (void)_dataSourceAssignTransactionIdentifier:(unsigned int)arg0 forDocumentIdentifiers:(id)arg1;
- (void)_invalidateResultsCache;
- (void)_dataSourceIndexItemsNeedingRefreshWithLimit:(unsigned int)arg0;
- (void)wait;

@end

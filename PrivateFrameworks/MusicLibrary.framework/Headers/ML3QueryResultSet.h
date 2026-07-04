/* Runtime dump - ML3QueryResultSet
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QueryResultSet : NSObject <NSCopying>
{
    ML3QueryResultSet_BackingStore * _backingStore;
    ML3Query * _query;
    long long _revision;
    long long _localRevision;
    char _supportsIncrementalUpdate;
    NSMutableArray * _updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _fixedPriorityQueue;
}

@property (readonly, nonatomic) ML3Query * query;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long localRevision;

- (void)enumerateSectionHeadersUsingBlock:(id /* block */)arg0;
- (NSArray *)sectionIndexTitles;
- (unsigned int)count;
- (ML3Query *)query;
- (ML3QueryResultSet *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (ML3QueryResultSet *)initWithQuery:(ML3Query *)arg0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg0;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg0;
- (long long)persistentIDAtIndex:(unsigned int)arg0;
- (NSObject *)_initWithQuery:(ML3Query *)arg0 supportsIncrementalUpdate:(char)arg1;
- (unsigned int)entityLimit;
- (void)_onQueueAddUpdateFinishedBlock:(id /* block */)arg0;
- (char)_updateToLibraryCurrentRevision;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(char)arg0;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(struct vector<long long, std::__1::allocator<long long> > *)arg0 changedPIDs:(struct vector<long long, std::__1::allocator<long long> >)arg1;
- (char)updateToLibraryCurrentRevision;
- (long long)revision;
- (long long)localRevision;

@end

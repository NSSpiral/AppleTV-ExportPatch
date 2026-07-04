/* Runtime dump - PSSearchModel
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver>
{
    NSMutableSet * _delegates;
    NSMapTable * _specifierDataSources;
    NSMutableArray * _rootEntries;
    NSMutableSet * _entriesBeingIndexed;
    NSMutableSet * _indexingEntriesWithLoadedDataSources;
    NSMutableSet * _removedEntriesStillIndexing;
    NSMutableArray * _deferredSpecifierUpdates;
    PSSearchResults * _currentResults;
    NSString * _queryForCurrentResults;
    NSMutableSet * _entriesPendingSearch;
    NSMutableSet * _removedEntriesStillSearching;
    NSObject<OS_dispatch_queue> * _searchStateAccessQueue;
    char _hasLoadedRootEntries;
    char _hasStartedIndexing;
    NSOperationQueue * _indexOperationQueue;
    NSOperationQueue * _searchOperationQueue;
    char _indexing;
    <PSSearchModelDataSource> * _dataSource;
    NSString * _currentQuery;
    PSSearchOperation * _activeSearchOperation;
}

@property (nonatomic) <PSSearchModelDataSource> * dataSource;
@property (readonly) PSSearchResults * currentResults;
@property (copy) NSString * currentQuery;
@property (readonly, nonatomic) char loadingResults;
@property (readonly, nonatomic) char indexing;
@property (readonly, nonatomic) char hasCompletedIndexing;
@property (readonly, nonatomic) NSArray * rootEntries;
@property (retain) PSSearchOperation * activeSearchOperation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int observerType;

+ (PSSearchModel *)sharedInstance;

- (void)addDelegate:(NSObject *)arg0;
- (void)dealloc;
- (void)setDataSource:(<PSSearchModelDataSource> *)arg0;
- (PSSearchModel *)init;
- (<PSSearchModelDataSource> *)dataSource;
- (void)preheat;
- (void)removeDelegate:(NSObject *)arg0;
- (void)dataSource:(<PSSearchModelDataSource> *)arg0 performUpdates:(id)arg1;
- (void)invalidateSpecifiersForDataSource:(NSObject *)arg0;
- (int)observerType;
- (NSArray *)_rootSpecifiers;
- (void)_beginIndexingIfNecessary;
- (void)_addSearchEntries:(NSArray *)arg0 parent:(NSObject *)arg1 usingBlock:(id /* block */)arg2;
- (void)removeRootSpecifier:(id)arg0;
- (void)addRootSpecifier:(id)arg0;
- (void)_removeSearchEntries:(NSArray *)arg0 usingBlock:(id /* block */)arg1;
- (NSString *)currentQuery;
- (void)_beginSearchingEntriesForCurrentQuery:(NSObject *)arg0 newSearch:(char)arg1;
- (void)_updatedEntry:(id)arg0 withChildren:(NSArray *)arg1;
- (void)_removeSearchEntries:(NSArray *)arg0 usingBlock:(id /* block */)arg1 forReload:(/* block */ id)arg2;
- (PSSearchResults *)currentResults;
- (void)_enumerateDelegatesUsingBlock:(id /* block */)arg0;
- (void)_loadChildrenForEntry:(id)arg0;
- (void)_reloadSearchEntries:(NSArray *)arg0;
- (void)_performSpecifierUpdates:(id)arg0 forSearchEntries:(NSArray *)arg1;
- (void)_performDeferredUpdatesForEntry:(id)arg0;
- (void)_addSpecifierDataSource:(NSObject *)arg0 forSearchEntry:(PSSearchEntry *)arg1;
- (void)_finishedIndexingEntry:(id)arg0;
- (PSSearchOperation *)activeSearchOperation;
- (void)setCurrentQuery:(NSString *)arg0;
- (void)setActiveSearchOperation:(PSSearchOperation *)arg0;
- (void)_cancelAllSearchOperations;
- (void)_updateWithNewSearchResults:(NSArray *)arg0 forQuery:(NSObject *)arg1 newSearch:(char)arg2;
- (NSArray *)rootEntries;
- (id /* block */)_defaultSearchResultsSectionComparator;
- (NSObject *)_searchEntriesForSpecifierDataSource:(NSObject *)arg0;
- (void)searchIndexOperation:(NSObject *)arg0 didFindSpecifierDataSource:(NSObject *)arg1;
- (void)searchIndexOperationDidFinish:(id)arg0 searchEntries:(NSArray *)arg1;
- (void)searchIndexOperationDidCancel:(id)arg0;
- (void)searchOperationDidBegin:(id)arg0;
- (NSObject *)searchOperation:(NSObject *)arg0 filteredEntriesForEntries:(NSArray *)arg1;
- (void)searchOperation:(NSObject *)arg0 configureSearchResults:(NSArray *)arg1;
- (void)searchOperationDidFinish:(id)arg0 withResults:(NSArray *)arg1;
- (void)searchOperationDidCancel:(id)arg0;
- (void)reloadRootSpecifier:(id)arg0;
- (char)hasCompletedIndexing;
- (char)isLoadingResults;
- (void)searchForQuery:(NSObject *)arg0;
- (char)isIndexing;

@end

/* Runtime dump - NSMetadataQuery
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataQuery : NSObject
{
    unsigned int _flags;
    double _interval;
    id _private;
    void * _reserved;
}

@property <NSMetadataQueryDelegate> * delegate;
@property (copy) NSPredicate * predicate;
@property (copy) NSArray * sortDescriptors;
@property (copy) NSArray * valueListAttributes;
@property (copy) NSArray * groupingAttributes;
@property double notificationBatchingInterval;
@property (copy) NSArray * searchScopes;
@property (copy) NSArray * searchItems;
@property (retain) NSOperationQueue * operationQueue;
@property (readonly) char started;
@property (readonly) char gathering;
@property (readonly) char stopped;
@property (readonly) unsigned int resultCount;
@property (readonly, copy) NSArray * results;
@property (readonly, copy) NSDictionary * valueLists;
@property (readonly, copy) NSArray * groupedResults;

+ (Class)_stitchingClass;
+ (NSURL *)willBeginPossibleMoveOfItemAtURL:(NSURL *)arg0 toURL:(NSURL *)arg1;
+ (void)didEndPossibleFileOperation:(NSObject *)arg0;
+ (NSURL *)willBeginPossibleCreationOfItemAtURL:(NSURL *)arg0;
+ (NSURL *)willBeginPossibleDeletionOfItemAtURL:(NSURL *)arg0;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;
+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (void)br_setupForMonitoringChildrenOfFolderAtURL:(NSURL *)arg0;
- (char)br_setupForMonitoringChildrenOfItemAtURL:(NSURL *)arg0;
- (void)_validateInvocationContext;
- (void)_validatePredicate:(NSPredicate *)arg0 withScopes:(NSArray *)arg1;
- (void)_recreateQuery;
- (NSArray *)valueListAttributes;
- (NSArray *)groupingAttributes;
- (NSDictionary *)_sortingAttributes;
- (void)_setBatchingParams;
- (NSArray *)searchItems;
- (void)setSearchItems:(NSArray *)arg0;
- (NSString *)_externalDocumentsBundleIdentifier;
- (void)_postNotificationName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)_disableAutoUpdates;
- (void)_resetQueryState;
- (void)_noteNote1:(id)arg0;
- (void)_noteNote2:(id)arg0;
- (void)_noteNote3:(id)arg0;
- (void)_noteNote4:(id)arg0;
- (void)_inOriginalContextInvokeBlock:(id /* block */)arg0;
- (void)_noteNote5:(id)arg0;
- (unsigned int)resultCount;
- (void)enumerateResultsWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)_enableAutoUpdates;
- (NSObject *)valueOfAttribute:(NSObject *)arg0 forResultAtIndex:(unsigned int)arg1;
- (void)setValueListAttributes:(NSArray *)arg0;
- (void)setGroupingAttributes:(NSArray *)arg0;
- (NSDictionary *)_allAttributes;
- (double)notificationBatchingInterval;
- (void)setNotificationBatchingInterval:(double)arg0;
- (NSArray *)searchScopes;
- (id)searchItemURLs;
- (void)setSearchItemURLs:(id)arg0;
- (void)_setExternalDocumentsBundleIdentifier:(NSString *)arg0;
- (NSString *)_queryString;
- (char)isGathering;
- (char)isStopped;
- (NSObject *)resultAtIndex:(unsigned int)arg0;
- (void)enumerateResultsUsingBlock:(id /* block */)arg0;
- (void)_zapResultArrayIfIdenticalTo:(id)arg0;
- (unsigned int)indexOfResult:(NSObject *)arg0;
- (NSDictionary *)valueLists;
- (NSArray *)groupedResults;
- (void)dealloc;
- (void)setDelegate:(<NSMetadataQueryDelegate> *)arg0;
- (NSMetadataQuery *)init;
- (<NSMetadataQueryDelegate> *)delegate;
- (void)_update;
- (void)setPredicate:(NSPredicate *)arg0;
- (void)stopQuery;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (void)setSearchScopes:(NSArray *)arg0;
- (char)startQuery;
- (NSPredicate *)predicate;
- (NSArray *)results;
- (void)setSortDescriptors:(NSArray *)arg0;
- (NSArray *)sortDescriptors;
- (char)isStarted;
- (NSOperationQueue *)operationQueue;
- (void)finalize;

@end

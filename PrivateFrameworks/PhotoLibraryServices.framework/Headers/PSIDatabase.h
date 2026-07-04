/* Runtime dump - PSIDatabase
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIDatabase : NSObject
{
    struct sqlite3 * _db;
    NSDictionary * _preparedStatements;
    struct __CFDictionary * _groupObjectsById;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_queue> * _searchQueue;
    int _options;
    int _queryCounter;
    PSITokenizer * _tokenizer;
    NSMutableString * _tokenizerOutputString;
    NSMutableArray * _tokenizerOutputTokens;
    NSMutableArray * _tokenizerOutputNormalizedTokens;
    id _tokenizerOutputRanges;
    NSString * _path;
}

@property (readonly, nonatomic) NSString * path;
@property (readonly, nonatomic) int options;

+ (void)dropDatabaseAtPath:(NSString *)arg0 withCompletion:(id /* block */)arg1;
+ (struct sqlite3 *)_openDatabaseAtPath:(NSString *)arg0 options:(int)arg1;
+ (void)_dropDatabase:(struct sqlite3 *)arg0 withCompletion:(id /* block */)arg1;

- (void)dealloc;
- (NSString *)path;
- (int)options;
- (void)dropDatabaseWithCompletion:(id /* block */)arg0;
- (PSIDatabase *)initWithPath:(NSString *)arg0 options:(int)arg1;
- (void)addAssets:(NSArray *)arg0 withCompletion:(id /* block */)arg1;
- (void)removeAssetsWithUUIDs:(id)arg0 completion:(id /* block */)arg1;
- (void)query:(NSObject *)arg0 searchString:(NSString *)arg1 resultsHandler:(id /* block */)arg2;
- (void)_inqPrepareAndExecuteStatement:(char *)arg0;
- (struct sqlite3_stmt *)_inqPrepareStatement:(char *)arg0;
- (void)_inqPerformBatch:(id)arg0;
- (void)_inqRemoveUUID:(id)arg0 isInBatch:(char)arg1;
- (unsigned long long)_inqAddUUID:(id)arg0 string:(NSString *)arg1 category:(short)arg2 owningGroupId:(unsigned long long)arg3 isInBatch:(char)arg4;
- (NSObject *)_inqNewContentStringForGroupId:(unsigned long long)arg0;
- (struct __CFArray *)_inqNewAssetUUIDsForAssetIds:(void * *)arg0 count:(void *)arg1;
- (struct sqlite3_stmt *)_inqPreparedContainsStatementWithPrefix:(char *)arg0 matchingIds:(void * *)arg1 count:(void *)arg2;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg0 withStatementBlock:(id /* block */)arg1;
- (void)_inqGetTokensFromString:(NSString *)arg0 forIndexing:(char)arg1 tokenOutput:(struct tokenOutput_t *)arg2;
- (struct __CFSet *)_inqNewGroupIdsMatchingToken:(NSString *)arg0;
- (id)_inqNewGroupArraysFromGroupIdSets:(id)arg0 forQuery:(NSObject *)arg1;
- (void)_query:(NSObject *)arg0 recursiveAddToGroupResults:(NSArray *)arg1 aggregate:(PSIGroupAggregate *)arg2 atIndex:(unsigned int)arg3 outOf:(unsigned int)arg4 inGroupArrays:(id)arg5;
- (void)_inqRecycleGroups;
- (void *)_inqNewGroupsFromDeleteOperation:(char)arg0 matchingGroupIds:(void * *)arg1 count:(void *)arg2;
- (unsigned long long)_inqAssetIdForUUID:(id)arg0 insertIfNeeded:(char)arg1;
- (unsigned long long)_inqGroupIdForCategory:(short)arg0 owningGroupId:(unsigned long long)arg1 contentString:(NSString *)arg2 insertIfNeeded:(char)arg3 tokenOutput:(struct tokenOutput_t *)arg4;
- (void)_inqUpdatePrefixTreeWithGroupId:(unsigned long long)arg0 text:(NSString *)arg1;
- (void)_inqUpdateGATableWithGroupId:(unsigned long long)arg0 assetId:(unsigned long long)arg1;
- (struct __CFSet *)_inqNewGroupIdsForAssetId:(unsigned long long)arg0;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg0 allowError:(int)arg1 withStatementBlock:(id /* block */)arg2;
- (NSObject *)_inqDequeueGroupObjectWithId:(unsigned long long)arg0 isCachedGroup:(char *)arg1;
- (struct __CFArray *)_inqNewAssetIdsForGroupId:(unsigned long long)arg0;
- (void)addAsset:(NSSet *)arg0 withCompletion:(id /* block */)arg1;
- (void)removeAssetWithUUID:(id)arg0 completion:(id /* block */)arg1;
- (NSString *)newQueryWithSearchText:(NSString *)arg0;
- (void)group:(NSObject *)arg0 fetchOwningContentString:(char)arg1 assetUUIDs:(struct _NSRange)arg2 completionHandler:(id /* block */)arg3;

@end

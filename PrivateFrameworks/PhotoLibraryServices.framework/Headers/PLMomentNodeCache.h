/* Runtime dump - PLMomentNodeCache
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentNodeCache : NSObject
{
    NSMutableDictionary * __nodesByObjectID;
    NSMutableDictionary * __nodesByUserTag;
    NSMutableArray * __nodesByRowID;
    struct sqlite3 * __momentsDatabase;
    struct sqlite3_stmt * __spatialInsertStatement;
    struct sqlite3_stmt * __temporalInsertStatement;
    struct sqlite3_stmt * __spatialSelectStatement;
    struct sqlite3_stmt * __temporalSelectStatement;
}

@property (readonly, nonatomic) NSMutableDictionary * _nodesByObjectID;
@property (readonly, nonatomic) NSMutableDictionary * _nodesByUserTag;
@property (readonly, nonatomic) NSMutableArray * _nodesByRowID;
@property (readonly, nonatomic) struct sqlite3 * _momentsDatabase;
@property (readonly, nonatomic) struct sqlite3_stmt * _spatialInsertStatement;
@property (readonly, nonatomic) struct sqlite3_stmt * _temporalInsertStatement;
@property (readonly, nonatomic) struct sqlite3_stmt * _spatialSelectStatement;
@property (readonly, nonatomic) struct sqlite3_stmt * _temporalSelectStatement;

- (void)dealloc;
- (PLMomentNodeCache *)init;
- (void)insertNode:(NSObject *)arg0;
- (NSSet *)nodeForAsset:(NSSet *)arg0;
- (void)performBatch:(id)arg0;
- (NSDictionary *)nodeWithPartialAssetDictionary:(NSDictionary *)arg0;
- (NSObject *)temporalNeighborsOfNode:(NSObject *)arg0 forTheta:(double)arg1;
- (unsigned int)countOfTemporalNeighborsOfNode:(NSObject *)arg0 forTheta:(double)arg1;
- (id)spatialNeighborsOfNodes:(id)arg0 forSigma:(double)arg1;
- (NSObject *)taggedNeighborsOfNode:(NSObject *)arg0;
- (NSDate *)nodesWithinMinDate:(double)arg0 maxDate:(double)arg1;
- (NSObject *)tieBreakerForNode:(NSObject *)arg0;
- (void)openMomentsDatabase;
- (void)closeMomentsDatabase;
- (void)setupMomentsDatabase;
- (void)prepareAndExecuteStatement:(char *)arg0;
- (struct sqlite3_stmt *)prepareStatement:(char *)arg0;
- (struct sqlite3_stmt *)_spatialInsertStatement;
- (struct sqlite3_stmt *)_temporalInsertStatement;
- (struct sqlite3_stmt *)_spatialSelectStatement;
- (struct sqlite3_stmt *)_temporalSelectStatement;
- (NSMutableArray *)_nodesByRowID;
- (void)executePreparedStatement:(struct sqlite3_stmt *)arg0 withStatementBlock:(id /* block */)arg1;
- (NSMutableDictionary *)_nodesByUserTag;
- (NSMutableDictionary *)_nodesByObjectID;
- (void)addNodeByUserTag:(NSString *)arg0;
- (NSString *)nodesWithTag:(NSString *)arg0;
- (struct sqlite3 *)_momentsDatabase;

@end

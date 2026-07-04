/* Runtime dump - PLMomentCluster
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentCluster : NSObject
{
    short _generationType;
    NSString * __title;
    NSObject<NSCopying> * __objectID;
    NSDate * __startingDate;
    NSDate * __endingDate;
    CLLocation * __approximateLocation;
    NSMutableArray * __mutableNodes;
    NSMutableSet * __nodesWithLocation;
    NSCountedSet * __splitTags;
    NSCountedSet * __mergeTags;
}

@property (retain, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSArray * nodes;
@property (readonly, nonatomic) NSObject<NSCopying> * objectID;
@property (readonly, nonatomic) CLLocation * approximateLocation;
@property (retain, nonatomic) NSDate * startingDate;
@property (retain, nonatomic) NSDate * endingDate;
@property (nonatomic) short generationType;
@property (copy, nonatomic) NSMutableArray * _mutableNodes;
@property (readonly, nonatomic) NSMutableSet * _nodesWithLocation;
@property (retain, nonatomic) NSCountedSet * _splitTags;
@property (retain, nonatomic) NSCountedSet * _mergeTags;

+ (double)nameOccurrenceCutoff;

- (void)dealloc;
- (PLMomentCluster *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (NSObject<NSCopying> *)objectID;
- (short)generationType;
- (CLLocation *)approximateLocation;
- (void)setGenerationType:(short)arg0;
- (PLMomentCluster *)initWithMoment:(PLMoment *)arg0;
- (void)commonPLMomentClusterInitialization;
- (PLMomentCluster *)initWithObjectID:(NSObject<NSCopying> *)arg0;
- (NSDate *)startingDate;
- (NSDate *)endingDate;
- (NSArray *)nodes;
- (NSMutableArray *)_mutableNodes;
- (char)hasSplits;
- (char)hasMerges;
- (void)_setStartingDate:(NSDate *)arg0;
- (void)_setEndingDate:(NSDate *)arg0;
- (NSMutableSet *)_nodesWithLocation;
- (char)isTagged;
- (void)addNode:(NSObject *)arg0;
- (void)removeNode:(NSObject *)arg0 nilCluster:(char)arg1;
- (void)_correctStartAndEndDates;
- (NSCountedSet *)splitTags;
- (id)mergeTagAboveCutoff:(double)arg0;
- (NSCountedSet *)mergeTags;
- (void)addNodesFromCluster:(id)arg0;
- (void)addNodes:(id)arg0;
- (void)removeNodes:(id)arg0;
- (void)removeNodesFromCluster:(id)arg0;
- (unsigned int)expandFromNode:(NSObject *)arg0 withNeighbors:(NSMutableArray *)arg1 inClustering:(PLMomentClustering *)arg2 minimumNumberOfPoints:(unsigned int)arg3;
- (void)_setNodes:(id)arg0;
- (NSCountedSet *)_splitTags;
- (void)_setSplitTags:(id)arg0;
- (NSCountedSet *)_mergeTags;
- (void)_setMergeTags:(id)arg0;

@end

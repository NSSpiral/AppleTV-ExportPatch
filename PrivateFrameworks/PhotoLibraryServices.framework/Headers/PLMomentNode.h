/* Runtime dump - PLMomentNode
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentNode : NSObject
{
    char _marked;
    char _visited;
    NSObject<NSCopying> * __objectID;
    CLLocation * __location;
    NSDate * __creationDate;
    PLMomentCluster * __cluster;
    unsigned int __userTagType;
    NSString * __userTag;
    NSNumber * _cacheInsertionIndex;
}

@property (nonatomic) char marked;
@property (nonatomic) char visited;
@property (nonatomic) PLMomentCluster * cluster;
@property (readonly, retain, nonatomic) NSObject<NSCopying> * objectID;
@property (readonly, retain, nonatomic) NSDate * creationDate;
@property (readonly, nonatomic) CLLocation * location;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) unsigned int userTagType;
@property (readonly, nonatomic) NSString * userTag;
@property (retain, nonatomic) NSNumber * cacheInsertionIndex;

- (void)dealloc;
- (NSString *)description;
- (CLLocation *)location;
- (NSDate *)creationDate;
- (NSObject<NSCopying> *)objectID;
- (void)setCluster:(PLMomentCluster *)arg0;
- (char)isTagged;
- (unsigned int)userTagType;
- (NSString *)userTag;
- (char)isMarked;
- (char)isVisited;
- (void)setVisited:(char)arg0;
- (PLMomentCluster *)cluster;
- (void)setMarked:(char)arg0;
- (void)setCacheInsertionIndex:(NSNumber *)arg0;
- (PLMomentNode *)initWithManagedAsset:(char)arg0;
- (PLMomentNode *)initWithPartialFetchDictionary:(NSDictionary *)arg0;
- (NSNumber *)cacheInsertionIndex;
- (struct ?)coordinate;

@end

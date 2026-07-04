/* Runtime dump - GEOABExperimentResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABExperimentResponse : PBCodable <NSCopying>
{
    unsigned long long _refreshIntervalSeconds;
    double _timestamp;
    NSMutableArray * _assignments;
    NSString * _requestGuid;
    NSString * _sourceURL;
    char _invalidatePoiCache;
    char _invalidateTileCache;
    struct ? _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasSourceURL;
@property (retain, nonatomic) NSString * sourceURL;
@property (readonly, nonatomic) char hasRequestGuid;
@property (retain, nonatomic) NSString * requestGuid;
@property (retain, nonatomic) NSMutableArray * assignments;
@property (nonatomic) char hasInvalidateTileCache;
@property (nonatomic) char invalidateTileCache;
@property (nonatomic) char hasInvalidatePoiCache;
@property (nonatomic) char invalidatePoiCache;
@property (nonatomic) char hasRefreshIntervalSeconds;
@property (nonatomic) unsigned long long refreshIntervalSeconds;

- (NSString *)sourceURL;
- (void)setSourceURL:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (GEOABExperimentResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasTimestamp;
- (void)setHasTimestamp:(char)arg0;
- (char)invalidateTileCache;
- (char)invalidatePoiCache;
- (unsigned long long)refreshIntervalSeconds;
- (NSMutableArray *)assignments;
- (NSObject *)_querySubstringForServiceType:(int)arg0 placeRequestType:(int)arg1;
- (void)setRequestGuid:(NSString *)arg0;
- (void)setAssignments:(NSMutableArray *)arg0;
- (void)addAssignment:(TSCH3DShaderAssignment *)arg0;
- (unsigned int)assignmentsCount;
- (void)clearAssignments;
- (NSObject *)assignmentAtIndex:(unsigned int)arg0;
- (char)hasRequestGuid;
- (void)setInvalidateTileCache:(char)arg0;
- (void)setHasInvalidateTileCache:(char)arg0;
- (char)hasInvalidateTileCache;
- (void)setInvalidatePoiCache:(char)arg0;
- (void)setHasInvalidatePoiCache:(char)arg0;
- (char)hasInvalidatePoiCache;
- (void)setRefreshIntervalSeconds:(unsigned long long)arg0;
- (void)setHasRefreshIntervalSeconds:(char)arg0;
- (char)hasRefreshIntervalSeconds;
- (NSString *)requestGuid;
- (char)hasSourceURL;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

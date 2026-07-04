/* Runtime dump - GEOTimeCheckpoints
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeCheckpoints : PBCodable <NSCopying>
{
    struct ? _distToNextCheckpoints;
    struct ? _timeToNextCheckpoints;
}

@property (readonly, nonatomic) unsigned int distToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int * distToNextCheckpoints;
@property (readonly, nonatomic) unsigned int timeToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int * timeToNextCheckpoints;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOTimeCheckpoints *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)distToNextCheckpointsCount;
- (void)clearDistToNextCheckpoints;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned int)arg0;
- (void)addDistToNextCheckpoint:(unsigned int)arg0;
- (unsigned int)timeToNextCheckpointsCount;
- (void)clearTimeToNextCheckpoints;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned int)arg0;
- (void)addTimeToNextCheckpoint:(unsigned int)arg0;
- (unsigned int *)distToNextCheckpoints;
- (void)setDistToNextCheckpoints:(unsigned int *)arg0 count:(unsigned int)arg1;
- (unsigned int *)timeToNextCheckpoints;
- (void)setTimeToNextCheckpoints:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

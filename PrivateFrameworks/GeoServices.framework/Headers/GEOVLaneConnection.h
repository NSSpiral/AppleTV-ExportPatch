/* Runtime dump - GEOVLaneConnection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneConnection : PBCodable <NSCopying>
{
    unsigned int _firstLaneIndex;
    unsigned int _firstRoadIndex;
    unsigned int _secondLaneIndex;
    unsigned int _secondRoadIndex;
}

@property (nonatomic) unsigned int firstRoadIndex;
@property (nonatomic) unsigned int firstLaneIndex;
@property (nonatomic) unsigned int secondRoadIndex;
@property (nonatomic) unsigned int secondLaneIndex;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVLaneConnection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)firstRoadIndex;
- (void)setFirstRoadIndex:(unsigned int)arg0;
- (unsigned int)firstLaneIndex;
- (void)setFirstLaneIndex:(unsigned int)arg0;
- (unsigned int)secondRoadIndex;
- (void)setSecondRoadIndex:(unsigned int)arg0;
- (unsigned int)secondLaneIndex;
- (void)setSecondLaneIndex:(unsigned int)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

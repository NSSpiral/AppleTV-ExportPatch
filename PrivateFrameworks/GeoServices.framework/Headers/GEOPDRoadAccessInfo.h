/* Runtime dump - GEOPDRoadAccessInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying>
{
    NSMutableArray * _roadAccessPoints;
}

@property (retain, nonatomic) NSMutableArray * roadAccessPoints;

+ (NSData *)roadAccessInfoForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDRoadAccessInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRoadAccessPoints:(NSMutableArray *)arg0;
- (void)addRoadAccessPoint:(NSObject *)arg0;
- (unsigned int)roadAccessPointsCount;
- (void)clearRoadAccessPoints;
- (NSObject *)roadAccessPointAtIndex:(unsigned int)arg0;
- (NSMutableArray *)roadAccessPoints;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

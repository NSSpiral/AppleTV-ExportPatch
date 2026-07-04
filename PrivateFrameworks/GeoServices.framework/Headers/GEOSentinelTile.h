/* Runtime dump - GEOSentinelTile
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSentinelTile : PBCodable <NSCopying>
{
    NSString * _resourceName;
    int _type;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSString * resourceName;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (GEOSentinelTile *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)resourceName;
- (void)setResourceName:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

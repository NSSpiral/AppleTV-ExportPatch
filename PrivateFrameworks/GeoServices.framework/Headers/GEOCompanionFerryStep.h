/* Runtime dump - GEOCompanionFerryStep
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionFerryStep : PBCodable <NSCopying>
{
    int _maneuverType;
    struct ? _has;
}

@property (nonatomic) char hasManeuverType;
@property (nonatomic) int maneuverType;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOCompanionFerryStep *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setManeuverType:(int)arg0;
- (void)setHasManeuverType:(char)arg0;
- (char)hasManeuverType;
- (int)maneuverType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

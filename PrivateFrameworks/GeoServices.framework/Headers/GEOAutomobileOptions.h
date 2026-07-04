/* Runtime dump - GEOAutomobileOptions
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAutomobileOptions : PBCodable <NSCopying>
{
    char _includeHistoricTravelTime;
    struct ? _has;
}

@property (nonatomic) char hasIncludeHistoricTravelTime;
@property (nonatomic) char includeHistoricTravelTime;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAutomobileOptions *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setIncludeHistoricTravelTime:(char)arg0;
- (void)setHasIncludeHistoricTravelTime:(char)arg0;
- (char)hasIncludeHistoricTravelTime;
- (char)includeHistoricTravelTime;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

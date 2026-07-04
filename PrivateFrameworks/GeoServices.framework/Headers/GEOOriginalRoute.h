/* Runtime dump - GEOOriginalRoute
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOOriginalRoute : PBCodable <NSCopying>
{
    NSData * _originalDirectionsResponseID;
    int _originalRoutePurpose;
    NSData * _routeHandle;
    struct ? _has;
}

@property (nonatomic) char hasOriginalRoutePurpose;
@property (nonatomic) int originalRoutePurpose;
@property (readonly, nonatomic) char hasRouteHandle;
@property (retain, nonatomic) NSData * routeHandle;
@property (readonly, nonatomic) char hasOriginalDirectionsResponseID;
@property (retain, nonatomic) NSData * originalDirectionsResponseID;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOOriginalRoute *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRouteHandle:(NSData *)arg0;
- (void)setOriginalDirectionsResponseID:(NSData *)arg0;
- (void)setOriginalRoutePurpose:(int)arg0;
- (void)setHasOriginalRoutePurpose:(char)arg0;
- (char)hasOriginalRoutePurpose;
- (char)hasRouteHandle;
- (char)hasOriginalDirectionsResponseID;
- (int)originalRoutePurpose;
- (NSData *)routeHandle;
- (NSData *)originalDirectionsResponseID;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

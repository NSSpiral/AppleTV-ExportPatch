/* Runtime dump - GEOURLRouteHandle
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLRouteHandle : PBCodable <NSCopying>
{
    NSData * _directionsResponseID;
    NSData * _routeID;
    NSData * _zilchPoints;
}

@property (readonly, nonatomic) char hasDirectionsResponseID;
@property (retain, nonatomic) NSData * directionsResponseID;
@property (readonly, nonatomic) char hasRouteID;
@property (retain, nonatomic) NSData * routeID;
@property (readonly, nonatomic) char hasZilchPoints;
@property (retain, nonatomic) NSData * zilchPoints;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOURLRouteHandle *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setDirectionsResponseID:(NSData *)arg0;
- (void)setRouteID:(NSData *)arg0;
- (void)setZilchPoints:(NSData *)arg0;
- (char)hasDirectionsResponseID;
- (char)hasRouteID;
- (char)hasZilchPoints;
- (NSData *)directionsResponseID;
- (NSData *)routeID;
- (NSData *)zilchPoints;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

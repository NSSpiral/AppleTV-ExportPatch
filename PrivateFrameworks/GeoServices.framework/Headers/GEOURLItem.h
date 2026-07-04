/* Runtime dump - GEOURLItem
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLItem : PBCodable <NSCopying>
{
    GEOMapItemStorage * _mapItemStorage;
    GEOPlace * _place;
    char _currentLocation;
    struct ? _has;
}

@property (readonly, nonatomic) char hasPlace;
@property (retain, nonatomic) GEOPlace * place;
@property (nonatomic) char hasCurrentLocation;
@property (nonatomic) char currentLocation;
@property (readonly, nonatomic) char hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage * mapItemStorage;

- (char)currentLocation;
- (void)setCurrentLocation:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOURLItem *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOMapItemStorage *)mapItemStorage;
- (void)setMapItemStorage:(GEOMapItemStorage *)arg0;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (void)setPlace:(GEOPlace *)arg0;
- (GEOPlace *)place;
- (char)hasPlace;
- (char)hasMapItemStorage;
- (void)setHasCurrentLocation:(char)arg0;
- (char)hasCurrentLocation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

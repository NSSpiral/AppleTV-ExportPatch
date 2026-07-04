/* Runtime dump - GEOWaypoint
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypoint : PBCodable <NSCopying>
{
    NSMutableArray * _entryPoints;
    GEOLocation * _location;
    GEOPlaceSearchRequest * _placeSearchRequest;
}

@property (readonly, nonatomic) char hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest * placeSearchRequest;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLocation * location;
@property (retain, nonatomic) NSMutableArray * entryPoints;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOWaypoint *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLocation *)location;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg0;
- (char)hasPlaceSearchRequest;
- (GEOPlaceSearchRequest *)placeSearchRequest;
- (unsigned int)entryPointsCount;
- (NSMutableArray *)entryPoints;
- (void)setEntryPoints:(NSMutableArray *)arg0;
- (void)addEntryPoint:(NSObject *)arg0;
- (void)clearEntryPoints;
- (NSObject *)entryPointAtIndex:(unsigned int)arg0;
- (void)setLocation:(GEOLocation *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasLocation;

@end

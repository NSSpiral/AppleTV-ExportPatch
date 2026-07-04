/* Runtime dump - GEONavigationRouteSummary
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationRouteSummary : PBCodable <NSCopying>
{
    GEOComposedWaypoint * _destination;
    NSString * _destinationName;
    GEOComposedWaypoint * _origin;
    int _transportType;
    struct ? _has;
}

@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) char hasOrigin;
@property (retain, nonatomic) GEOComposedWaypoint * origin;
@property (readonly, nonatomic) char hasDestination;
@property (retain, nonatomic) GEOComposedWaypoint * destination;
@property (readonly, nonatomic) char hasDestinationName;
@property (retain, nonatomic) NSString * destinationName;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEONavigationRouteSummary *)copyWithZone:(struct _NSZone *)arg0;
- (GEOComposedWaypoint *)origin;
- (void)setOrigin:(GEOComposedWaypoint *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOComposedWaypoint *)destination;
- (void)setDestination:(GEOComposedWaypoint *)arg0;
- (NSString *)destinationName;
- (GEONavigationRouteSummary *)initWithRoute:(GEOComposedRoute *)arg0 destinationName:(NSString *)arg1;
- (void)setDestinationName:(NSString *)arg0;
- (char)hasDestinationName;
- (char)hasDestination;
- (char)hasOrigin;
- (char)hasTransportType;
- (void)setHasTransportType:(char)arg0;
- (void)setTransportType:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setRoute:(ATVRoute *)arg0;
- (int)transportType;

@end

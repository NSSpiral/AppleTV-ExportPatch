/* Runtime dump - GEOCompanionRouteDetails
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionRouteDetails : PBCodable <NSCopying>
{
    struct ? _coordinates;
    struct ? _trafficColorOffsets;
    struct ? _trafficColors;
    GEOMapItemStorage * _destination;
    NSString * _destinationName;
    unsigned int _distance;
    unsigned int _historicalDuration;
    NSString * _name;
    GEOMapItemStorage * _origin;
    unsigned int _originalDuration;
    NSData * _routeID;
    NSMutableArray * _steps;
    char _canNavigate;
    struct ? _has;
}

@property (readonly, nonatomic) char hasDestinationName;
@property (retain, nonatomic) NSString * destinationName;
@property (nonatomic) char hasOriginalDuration;
@property (nonatomic) unsigned int originalDuration;
@property (retain, nonatomic) NSMutableArray * steps;
@property (readonly, nonatomic) unsigned int coordinatesCount;
@property (readonly, nonatomic) double * coordinates;
@property (readonly, nonatomic) char hasRouteID;
@property (retain, nonatomic) NSData * routeID;
@property (readonly, nonatomic) char hasDestination;
@property (retain, nonatomic) GEOMapItemStorage * destination;
@property (readonly, nonatomic) char hasOrigin;
@property (retain, nonatomic) GEOMapItemStorage * origin;
@property (readonly, nonatomic) unsigned int trafficColorsCount;
@property (readonly, nonatomic) unsigned int * trafficColors;
@property (readonly, nonatomic) unsigned int trafficColorOffsetsCount;
@property (readonly, nonatomic) unsigned int * trafficColorOffsets;
@property (nonatomic) char hasHistoricalDuration;
@property (nonatomic) unsigned int historicalDuration;
@property (nonatomic) char hasCanNavigate;
@property (nonatomic) char canNavigate;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) char hasDistance;
@property (nonatomic) unsigned int distance;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (GEOCompanionRouteDetails *)copyWithZone:(struct _NSZone *)arg0;
- (GEOMapItemStorage *)origin;
- (void)setOrigin:(GEOMapItemStorage *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOMapItemStorage *)destination;
- (void)setDestination:(GEOMapItemStorage *)arg0;
- (void)setRouteID:(NSData *)arg0;
- (char)hasRouteID;
- (NSData *)routeID;
- (NSString *)destinationName;
- (GEOCompanionRouteDetails *)initWithRoute:(GEOComposedRoute *)arg0 destinationName:(NSString *)arg1;
- (NSObject *)stepAtIndex:(unsigned int)arg0;
- (void)setDestinationName:(NSString *)arg0;
- (void)setSteps:(NSMutableArray *)arg0;
- (void)addStep:(NSObject *)arg0;
- (void)clearSteps;
- (unsigned int)coordinatesCount;
- (void)clearCoordinates;
- (double)coordinatesAtIndex:(unsigned int)arg0;
- (void)addCoordinates:(double)arg0;
- (void)clearTrafficColors;
- (unsigned int)trafficColorAtIndex:(unsigned int)arg0;
- (void)addTrafficColor:(unsigned int)arg0;
- (void)clearTrafficColorOffsets;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg0;
- (void)addTrafficColorOffset:(unsigned int)arg0;
- (char)hasDestinationName;
- (void)setOriginalDuration:(unsigned int)arg0;
- (void)setHasOriginalDuration:(char)arg0;
- (char)hasOriginalDuration;
- (double *)coordinates;
- (void)setCoordinates:(double *)arg0 count:(unsigned int)arg1;
- (char)hasDestination;
- (char)hasOrigin;
- (void)setTrafficColors:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)setTrafficColorOffsets:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)setHistoricalDuration:(unsigned int)arg0;
- (void)setHasHistoricalDuration:(char)arg0;
- (char)hasHistoricalDuration;
- (void)setCanNavigate:(char)arg0;
- (void)setHasCanNavigate:(char)arg0;
- (char)hasCanNavigate;
- (void)setDistance:(unsigned int)arg0;
- (void)setHasDistance:(char)arg0;
- (char)hasDistance;
- (unsigned int)originalDuration;
- (unsigned int)historicalDuration;
- (char)canNavigate;
- (char)isSyntheticRoute;
- (unsigned int)distance;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;
- (unsigned int)trafficColorsCount;
- (unsigned int)trafficColorOffsetsCount;
- (unsigned int *)trafficColorOffsets;
- (unsigned int *)trafficColors;
- (unsigned int)stepsCount;
- (NSMutableArray *)steps;

@end

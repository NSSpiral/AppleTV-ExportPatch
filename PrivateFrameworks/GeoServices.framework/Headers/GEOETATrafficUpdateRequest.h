/* Runtime dump - GEOETATrafficUpdateRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    struct ? _sessionID;
    GEOClientCapabilities * _clientCapabilities;
    GEOLocation * _currentUserLocation;
    NSMutableArray * _destinationWaypointTypeds;
    NSData * _directionsResponseID;
    GEORouteAttributes * _routeAttributes;
    NSMutableArray * _routes;
    NSMutableArray * _serviceTags;
    char _includeBetterRouteSuggestion;
    struct ? _has;
}

@property (readonly, nonatomic) char hasCurrentUserLocation;
@property (retain, nonatomic) GEOLocation * currentUserLocation;
@property (readonly, nonatomic) char hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes * routeAttributes;
@property (nonatomic) char hasIncludeBetterRouteSuggestion;
@property (nonatomic) char includeBetterRouteSuggestion;
@property (retain, nonatomic) NSMutableArray * routes;
@property (readonly, nonatomic) char hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities * clientCapabilities;
@property (readonly, nonatomic) char hasDirectionsResponseID;
@property (retain, nonatomic) NSData * directionsResponseID;
@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (retain, nonatomic) NSMutableArray * destinationWaypointTypeds;
@property (retain, nonatomic) NSMutableArray * serviceTags;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOETATrafficUpdateRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setDirectionsResponseID:(NSData *)arg0;
- (char)hasDirectionsResponseID;
- (NSData *)directionsResponseID;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setRouteAttributes:(GEORouteAttributes *)arg0;
- (void)setCurrentUserLocation:(GEOLocation *)arg0;
- (void)setClientCapabilities:(GEOClientCapabilities *)arg0;
- (void)setServiceTags:(NSMutableArray *)arg0;
- (void)addServiceTag:(NSString *)arg0;
- (unsigned int)serviceTagsCount;
- (void)clearServiceTags;
- (NSObject *)serviceTagAtIndex:(unsigned int)arg0;
- (char)hasRouteAttributes;
- (char)hasCurrentUserLocation;
- (char)hasClientCapabilities;
- (GEORouteAttributes *)routeAttributes;
- (GEOLocation *)currentUserLocation;
- (GEOClientCapabilities *)clientCapabilities;
- (NSMutableArray *)serviceTags;
- (void)setRoutes:(NSMutableArray *)arg0;
- (void)addRoute:(ATVRoute *)arg0;
- (unsigned int)routesCount;
- (void)clearRoutes;
- (NSObject *)routeAtIndex:(unsigned int)arg0;
- (NSMutableArray *)routes;
- (void)setDestinationWaypointTypeds:(NSMutableArray *)arg0;
- (void)addDestinationWaypointTyped:(id)arg0;
- (unsigned int)destinationWaypointTypedsCount;
- (void)clearDestinationWaypointTypeds;
- (NSObject *)destinationWaypointTypedAtIndex:(unsigned int)arg0;
- (NSMutableArray *)destinationWaypointTypeds;
- (char)includeBetterRouteSuggestion;
- (void)setIncludeBetterRouteSuggestion:(char)arg0;
- (void)setHasIncludeBetterRouteSuggestion:(char)arg0;
- (char)hasIncludeBetterRouteSuggestion;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

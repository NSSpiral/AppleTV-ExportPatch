/* Runtime dump - GEODirectionsResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsResponse : PBCodable <NSCopying>
{
    struct ? _supportedTransportTypes;
    struct ? * _problemDetails;
    unsigned int _problemDetailsCount;
    unsigned int _problemDetailsSpace;
    NSData * _directionsResponseID;
    NSMutableArray * _incidentsOffRoutes;
    NSMutableArray * _incidentsOnRoutes;
    int _instructionSignFillColor;
    int _localDistanceUnits;
    NSMutableArray * _placeSearchResponses;
    NSMutableArray * _routes;
    int _status;
    char _isNavigable;
    char _routeDeviatesFromOriginal;
    struct ? _has;
}

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray * routes;
@property (retain, nonatomic) NSMutableArray * placeSearchResponses;
@property (nonatomic) char hasLocalDistanceUnits;
@property (nonatomic) int localDistanceUnits;
@property (nonatomic) char hasRouteDeviatesFromOriginal;
@property (nonatomic) char routeDeviatesFromOriginal;
@property (readonly, nonatomic) char hasDirectionsResponseID;
@property (retain, nonatomic) NSData * directionsResponseID;
@property (nonatomic) char hasIsNavigable;
@property (nonatomic) char isNavigable;
@property (nonatomic) char hasInstructionSignFillColor;
@property (nonatomic) int instructionSignFillColor;
@property (retain, nonatomic) NSMutableArray * incidentsOnRoutes;
@property (retain, nonatomic) NSMutableArray * incidentsOffRoutes;
@property (readonly, nonatomic) unsigned int problemDetailsCount;
@property (readonly, nonatomic) struct ? * problemDetails;
@property (readonly, nonatomic) unsigned int supportedTransportTypesCount;
@property (readonly, nonatomic) int * supportedTransportTypes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEODirectionsResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setDirectionsResponseID:(NSData *)arg0;
- (char)hasDirectionsResponseID;
- (NSData *)directionsResponseID;
- (void)setRoutes:(NSMutableArray *)arg0;
- (void)setPlaceSearchResponses:(NSMutableArray *)arg0;
- (void)setIncidentsOnRoutes:(NSMutableArray *)arg0;
- (void)setIncidentsOffRoutes:(NSMutableArray *)arg0;
- (void)clearProblemDetails;
- (void)addRoute:(ATVRoute *)arg0;
- (void)addPlaceSearchResponse:(NSURLResponse *)arg0;
- (void)addIncidentsOnRoutes:(id)arg0;
- (void)addIncidentsOffRoutes:(id)arg0;
- (unsigned int)routesCount;
- (void)clearRoutes;
- (NSObject *)routeAtIndex:(unsigned int)arg0;
- (unsigned int)placeSearchResponsesCount;
- (void)clearPlaceSearchResponses;
- (NSObject *)placeSearchResponseAtIndex:(unsigned int)arg0;
- (unsigned int)incidentsOnRoutesCount;
- (void)clearIncidentsOnRoutes;
- (NSObject *)incidentsOnRoutesAtIndex:(unsigned int)arg0;
- (unsigned int)incidentsOffRoutesCount;
- (void)clearIncidentsOffRoutes;
- (NSObject *)incidentsOffRoutesAtIndex:(unsigned int)arg0;
- (unsigned int)problemDetailsCount;
- (struct ?)problemDetailAtIndex:(SEL)arg0;
- (void)addProblemDetail:(struct ?)arg0;
- (unsigned int)supportedTransportTypesCount;
- (void)clearSupportedTransportTypes;
- (int)supportedTransportTypeAtIndex:(unsigned int)arg0;
- (void)addSupportedTransportType:(int)arg0;
- (void)setLocalDistanceUnits:(int)arg0;
- (void)setHasLocalDistanceUnits:(char)arg0;
- (char)hasLocalDistanceUnits;
- (char)routeDeviatesFromOriginal;
- (void)setRouteDeviatesFromOriginal:(char)arg0;
- (void)setHasRouteDeviatesFromOriginal:(char)arg0;
- (char)hasRouteDeviatesFromOriginal;
- (char)isNavigable;
- (void)setIsNavigable:(char)arg0;
- (void)setHasIsNavigable:(char)arg0;
- (char)hasIsNavigable;
- (int)instructionSignFillColor;
- (void)setInstructionSignFillColor:(int)arg0;
- (void)setHasInstructionSignFillColor:(char)arg0;
- (char)hasInstructionSignFillColor;
- (struct ? *)problemDetails;
- (void)setProblemDetails:(struct ? *)arg0 count:(NSObject *)arg1;
- (int *)supportedTransportTypes;
- (void)setSupportedTransportTypes:(int *)arg0 count:(unsigned int)arg1;
- (NSMutableArray *)routes;
- (NSMutableArray *)placeSearchResponses;
- (int)localDistanceUnits;
- (NSMutableArray *)incidentsOnRoutes;
- (NSMutableArray *)incidentsOffRoutes;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

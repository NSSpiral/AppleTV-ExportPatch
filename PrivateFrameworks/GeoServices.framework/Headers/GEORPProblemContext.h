/* Runtime dump - GEORPProblemContext
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemContext : PBCodable <NSCopying>
{
    struct ? _sessionId;
    unsigned long long _originatingAuxiliaryControlIndex;
    NSMutableArray * _auxiliaryControls;
    NSMutableArray * _directionsRequests;
    NSMutableArray * _directionsResponses;
    NSString * _lastSearchString;
    GEORPMapLocation * _mapLocation;
    GEOPlace * _originalPlace;
    int _pinType;
    GEOPDPlace * _place;
    NSString * _tileStateLog;
    NSMutableArray * _visibleTileSets;
    struct ? _has;
}

@property (nonatomic) char hasSessionId;
@property (nonatomic) struct ? sessionId;
@property (nonatomic) char hasPinType;
@property (nonatomic) int pinType;
@property (readonly, nonatomic) char hasOriginalPlace;
@property (retain, nonatomic) GEOPlace * originalPlace;
@property (readonly, nonatomic) char hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation * mapLocation;
@property (retain, nonatomic) NSMutableArray * visibleTileSets;
@property (readonly, nonatomic) char hasTileStateLog;
@property (retain, nonatomic) NSString * tileStateLog;
@property (readonly, nonatomic) char hasPlace;
@property (retain, nonatomic) GEOPDPlace * place;
@property (retain, nonatomic) NSMutableArray * directionsRequests;
@property (retain, nonatomic) NSMutableArray * directionsResponses;
@property (readonly, nonatomic) char hasLastSearchString;
@property (retain, nonatomic) NSString * lastSearchString;
@property (retain, nonatomic) NSMutableArray * auxiliaryControls;
@property (nonatomic) char hasOriginatingAuxiliaryControlIndex;
@property (nonatomic) unsigned long long originatingAuxiliaryControlIndex;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemContext *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPlace:(GEOPDPlace *)arg0;
- (GEOPDPlace *)place;
- (char)hasPlace;
- (struct ?)sessionId;
- (char)hasSessionId;
- (void)setOriginalPlace:(GEOPlace *)arg0;
- (void)setMapLocation:(GEORPMapLocation *)arg0;
- (void)setVisibleTileSets:(NSMutableArray *)arg0;
- (void)setTileStateLog:(NSString *)arg0;
- (void)setDirectionsRequests:(NSMutableArray *)arg0;
- (void)setDirectionsResponses:(NSMutableArray *)arg0;
- (void)setLastSearchString:(NSString *)arg0;
- (void)setAuxiliaryControls:(NSMutableArray *)arg0;
- (void)addVisibleTileSet:(NSSet *)arg0;
- (void)addDirectionsRequest:(NSURLRequest *)arg0;
- (void)addDirectionsResponse:(NSURLResponse *)arg0;
- (void)addAuxiliaryControl:(BRControl *)arg0;
- (unsigned int)visibleTileSetsCount;
- (void)clearVisibleTileSets;
- (NSObject *)visibleTileSetAtIndex:(unsigned int)arg0;
- (unsigned int)directionsRequestsCount;
- (void)clearDirectionsRequests;
- (NSObject *)directionsRequestAtIndex:(unsigned int)arg0;
- (unsigned int)directionsResponsesCount;
- (void)clearDirectionsResponses;
- (NSObject *)directionsResponseAtIndex:(unsigned int)arg0;
- (unsigned int)auxiliaryControlsCount;
- (void)clearAuxiliaryControls;
- (NSObject *)auxiliaryControlAtIndex:(unsigned int)arg0;
- (void)setSessionId:(struct ?)arg0;
- (void)setHasSessionId:(char)arg0;
- (void)setPinType:(int)arg0;
- (void)setHasPinType:(char)arg0;
- (char)hasPinType;
- (char)hasOriginalPlace;
- (char)hasMapLocation;
- (char)hasTileStateLog;
- (char)hasLastSearchString;
- (void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg0;
- (void)setHasOriginatingAuxiliaryControlIndex:(char)arg0;
- (char)hasOriginatingAuxiliaryControlIndex;
- (int)pinType;
- (GEOPlace *)originalPlace;
- (GEORPMapLocation *)mapLocation;
- (NSString *)tileStateLog;
- (NSMutableArray *)directionsRequests;
- (NSMutableArray *)directionsResponses;
- (NSString *)lastSearchString;
- (NSMutableArray *)auxiliaryControls;
- (unsigned long long)originatingAuxiliaryControlIndex;
- (NSMutableArray *)visibleTileSets;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

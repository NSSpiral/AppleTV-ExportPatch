/* Runtime dump - GEOETAResult
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResult : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    GEOPlaceSearchResponse * _placeSearchResponse;
    NSMutableArray * _sortedETAs;
    int _status;
    struct ? _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasLiveTravelTime;
@property (nonatomic) unsigned int liveTravelTime;
@property (nonatomic) char hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (readonly, nonatomic) char hasPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse * placeSearchResponse;
@property (nonatomic) char hasDistance;
@property (nonatomic) unsigned int distance;
@property (retain, nonatomic) NSMutableArray * sortedETAs;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOETAResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)setDistance:(unsigned int)arg0;
- (void)setHasDistance:(char)arg0;
- (char)hasDistance;
- (void)setHistoricTravelTime:(unsigned int)arg0;
- (void)setHasHistoricTravelTime:(char)arg0;
- (char)hasHistoricTravelTime;
- (unsigned int)historicTravelTime;
- (void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg0;
- (void)setSortedETAs:(NSMutableArray *)arg0;
- (void)addSortedETA:(id)arg0;
- (unsigned int)sortedETAsCount;
- (void)clearSortedETAs;
- (NSObject *)sortedETAAtIndex:(unsigned int)arg0;
- (void)setLiveTravelTime:(unsigned int)arg0;
- (void)setHasLiveTravelTime:(char)arg0;
- (char)hasLiveTravelTime;
- (char)hasPlaceSearchResponse;
- (unsigned int)liveTravelTime;
- (GEOPlaceSearchResponse *)placeSearchResponse;
- (NSMutableArray *)sortedETAs;
- (unsigned int)distance;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

/* Runtime dump - GEOPlaceSearchResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchResponse : PBCodable <NSCopying>
{
    double _turnaroundTime;
    GEOMapRegion * _mapRegion;
    NSMutableArray * _namedFeatures;
    NSMutableArray * _placeResults;
    int _status;
    int _statusCodeInfo;
    NSMutableArray * _suggestionEntryLists;
    NSData * _suggestionMetadata;
    struct ? _has;
}

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray * placeResults;
@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion * mapRegion;
@property (retain, nonatomic) NSMutableArray * suggestionEntryLists;
@property (readonly, nonatomic) char hasSuggestionMetadata;
@property (retain, nonatomic) NSData * suggestionMetadata;
@property (retain, nonatomic) NSMutableArray * namedFeatures;
@property (nonatomic) char hasStatusCodeInfo;
@property (nonatomic) int statusCodeInfo;
@property (nonatomic) char hasTurnaroundTime;
@property (nonatomic) double turnaroundTime;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPlaceSearchResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (char)hasMapRegion;
- (void)setNamedFeatures:(NSMutableArray *)arg0;
- (unsigned int)namedFeaturesCount;
- (void)clearNamedFeatures;
- (NSMutableArray *)namedFeatures;
- (void)setPlaceResults:(NSMutableArray *)arg0;
- (void)setSuggestionEntryLists:(NSMutableArray *)arg0;
- (void)setSuggestionMetadata:(NSData *)arg0;
- (void)addPlaceResult:(NSObject *)arg0;
- (void)addSuggestionEntryLists:(id)arg0;
- (void)addNamedFeatures:(id)arg0;
- (unsigned int)placeResultsCount;
- (void)clearPlaceResults;
- (NSObject *)placeResultAtIndex:(unsigned int)arg0;
- (unsigned int)suggestionEntryListsCount;
- (void)clearSuggestionEntryLists;
- (NSObject *)suggestionEntryListsAtIndex:(unsigned int)arg0;
- (NSObject *)namedFeaturesAtIndex:(unsigned int)arg0;
- (char)hasSuggestionMetadata;
- (void)setStatusCodeInfo:(int)arg0;
- (void)setHasStatusCodeInfo:(char)arg0;
- (char)hasStatusCodeInfo;
- (void)setTurnaroundTime:(double)arg0;
- (void)setHasTurnaroundTime:(char)arg0;
- (char)hasTurnaroundTime;
- (NSMutableArray *)placeResults;
- (NSMutableArray *)suggestionEntryLists;
- (NSData *)suggestionMetadata;
- (int)statusCodeInfo;
- (double)turnaroundTime;
- (void)_geoMapItemsWithHandler:(id /* block */)arg0;
- (GEOMapRegion *)mapRegion;
- (void)setMapRegion:(GEOMapRegion *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

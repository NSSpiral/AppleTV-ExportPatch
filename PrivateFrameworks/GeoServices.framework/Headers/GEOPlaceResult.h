/* Runtime dump - GEOPlaceResult
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceResult : PBCodable <NSCopying>
{
    unsigned long long _flyoverTourMuid;
    NSMutableArray * _additionalPlaces;
    int _cacheControl;
    NSMutableArray * _matchedTokens;
    NSMutableArray * _namedFeatures;
    GEOPlace * _place;
    NSString * _quad;
    GEOPlaceSearchRequest * _revgeoRequestTemplate;
    NSString * _suggestedQuery;
    GEOAddress * _tokenEntity;
    unsigned int _travelDistance;
    unsigned int _travelTime;
    NSMutableArray * _unmatchedStrings;
    struct ? _has;
}

@property (retain, nonatomic) GEOPlace * place;
@property (retain, nonatomic) NSMutableArray * additionalPlaces;
@property (readonly, nonatomic) char hasSuggestedQuery;
@property (retain, nonatomic) NSString * suggestedQuery;
@property (nonatomic) char hasTravelTime;
@property (nonatomic) unsigned int travelTime;
@property (nonatomic) char hasTravelDistance;
@property (nonatomic) unsigned int travelDistance;
@property (readonly, nonatomic) char hasTokenEntity;
@property (retain, nonatomic) GEOAddress * tokenEntity;
@property (readonly, nonatomic) char hasQuad;
@property (retain, nonatomic) NSString * quad;
@property (retain, nonatomic) NSMutableArray * unmatchedStrings;
@property (retain, nonatomic) NSMutableArray * namedFeatures;
@property (readonly, nonatomic) char hasRevgeoRequestTemplate;
@property (retain, nonatomic) GEOPlaceSearchRequest * revgeoRequestTemplate;
@property (retain, nonatomic) NSMutableArray * matchedTokens;
@property (nonatomic) char hasFlyoverTourMuid;
@property (nonatomic) unsigned long long flyoverTourMuid;
@property (nonatomic) char hasCacheControl;
@property (nonatomic) int cacheControl;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPlaceResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)quad;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPlace:(GEOPlace *)arg0;
- (void)setAdditionalPlaces:(NSMutableArray *)arg0;
- (void)setSuggestedQuery:(NSString *)arg0;
- (void)setTokenEntity:(GEOAddress *)arg0;
- (void)setQuad:(NSString *)arg0;
- (void)setUnmatchedStrings:(NSMutableArray *)arg0;
- (void)setNamedFeatures:(NSMutableArray *)arg0;
- (void)setRevgeoRequestTemplate:(GEOPlaceSearchRequest *)arg0;
- (void)setMatchedTokens:(NSMutableArray *)arg0;
- (void)addAdditionalPlace:(id)arg0;
- (void)addUnmatchedString:(NSString *)arg0;
- (void)addNamedFeature:(NSObject *)arg0;
- (void)addMatchedToken:(NSString *)arg0;
- (unsigned int)additionalPlacesCount;
- (void)clearAdditionalPlaces;
- (NSObject *)additionalPlaceAtIndex:(unsigned int)arg0;
- (unsigned int)unmatchedStringsCount;
- (void)clearUnmatchedStrings;
- (NSObject *)unmatchedStringAtIndex:(unsigned int)arg0;
- (unsigned int)namedFeaturesCount;
- (void)clearNamedFeatures;
- (NSObject *)namedFeatureAtIndex:(unsigned int)arg0;
- (unsigned int)matchedTokensCount;
- (void)clearMatchedTokens;
- (NSObject *)matchedTokenAtIndex:(unsigned int)arg0;
- (char)hasSuggestedQuery;
- (void)setTravelTime:(unsigned int)arg0;
- (void)setHasTravelTime:(char)arg0;
- (char)hasTravelTime;
- (void)setTravelDistance:(unsigned int)arg0;
- (void)setHasTravelDistance:(char)arg0;
- (char)hasTravelDistance;
- (char)hasTokenEntity;
- (char)hasQuad;
- (char)hasRevgeoRequestTemplate;
- (void)setFlyoverTourMuid:(unsigned long long)arg0;
- (void)setHasFlyoverTourMuid:(char)arg0;
- (char)hasFlyoverTourMuid;
- (void)setCacheControl:(int)arg0;
- (void)setHasCacheControl:(char)arg0;
- (char)hasCacheControl;
- (GEOPlace *)place;
- (NSMutableArray *)additionalPlaces;
- (NSString *)suggestedQuery;
- (unsigned int)travelTime;
- (unsigned int)travelDistance;
- (GEOAddress *)tokenEntity;
- (NSMutableArray *)unmatchedStrings;
- (NSMutableArray *)namedFeatures;
- (GEOPlaceSearchRequest *)revgeoRequestTemplate;
- (NSMutableArray *)matchedTokens;
- (unsigned long long)flyoverTourMuid;
- (int)cacheControl;
- (<GEOMapItemPrivate> *)geoMapItem;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

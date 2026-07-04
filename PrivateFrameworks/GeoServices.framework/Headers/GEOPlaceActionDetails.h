/* Runtime dump - GEOPlaceActionDetails
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying>
{
    unsigned long long _animationID;
    unsigned long long _businessID;
    long long _placeID;
    double _searchResponseRelativeTimestamp;
    int _localSearchProviderID;
    int _resultIndex;
    struct ? _has;
}

@property (nonatomic) char hasBusinessID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) char hasPlaceID;
@property (nonatomic) long long placeID;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) char hasSearchResponseRelativeTimestamp;
@property (nonatomic) double searchResponseRelativeTimestamp;
@property (nonatomic) char hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) char hasAnimationID;
@property (nonatomic) unsigned long long animationID;

+ (NSObject *)actionDetailsWithMapItem:(MKMapItem *)arg0 timestamp:(double)arg1 resultIndex:(int)arg2;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPlaceActionDetails *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLocalSearchProviderID:(int)arg0;
- (void)setHasLocalSearchProviderID:(char)arg0;
- (char)hasLocalSearchProviderID;
- (int)localSearchProviderID;
- (void)setBusinessID:(unsigned long long)arg0;
- (void)setHasBusinessID:(char)arg0;
- (void)setPlaceID:(long long)arg0;
- (void)setHasPlaceID:(char)arg0;
- (char)hasPlaceID;
- (long long)placeID;
- (void)setSearchResponseRelativeTimestamp:(double)arg0;
- (void)setResultIndex:(int)arg0;
- (GEOPlaceActionDetails *)initWithMapItem:(MKMapItem *)arg0 relativeTimestamp:(double)arg1 resultIndex:(int)arg2;
- (void)setAnimationID:(unsigned long long)arg0;
- (void)setHasSearchResponseRelativeTimestamp:(char)arg0;
- (char)hasSearchResponseRelativeTimestamp;
- (void)setHasResultIndex:(char)arg0;
- (char)hasResultIndex;
- (void)setHasAnimationID:(char)arg0;
- (char)hasAnimationID;
- (double)searchResponseRelativeTimestamp;
- (int)resultIndex;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned long long)animationID;
- (char)hasBusinessID;
- (unsigned long long)businessID;

@end

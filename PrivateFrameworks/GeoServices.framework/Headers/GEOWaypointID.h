/* Runtime dump - GEOWaypointID
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointID : PBCodable <NSCopying>
{
    unsigned long long _muid;
    unsigned long long _resultProviderId;
    GEOStructuredAddress * _addressHint;
    NSMutableArray * _formattedAddressLineHints;
    GEOLatLng * _locationHint;
    NSString * _placeNameHint;
    int _placeTypeHint;
    struct ? _has;
}

@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasResultProviderId;
@property (nonatomic) unsigned long long resultProviderId;
@property (readonly, nonatomic) char hasLocationHint;
@property (retain, nonatomic) GEOLatLng * locationHint;
@property (readonly, nonatomic) char hasAddressHint;
@property (retain, nonatomic) GEOStructuredAddress * addressHint;
@property (readonly, nonatomic) char hasPlaceNameHint;
@property (retain, nonatomic) NSString * placeNameHint;
@property (retain, nonatomic) NSMutableArray * formattedAddressLineHints;
@property (nonatomic) char hasPlaceTypeHint;
@property (nonatomic) int placeTypeHint;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOWaypointID *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned long long)muid;
- (void)setResultProviderId:(unsigned long long)arg0;
- (void)setHasResultProviderId:(char)arg0;
- (char)hasResultProviderId;
- (unsigned long long)resultProviderId;
- (void)setLocationHint:(GEOLatLng *)arg0;
- (void)setAddressHint:(GEOStructuredAddress *)arg0;
- (void)setPlaceNameHint:(NSString *)arg0;
- (void)setFormattedAddressLineHints:(NSMutableArray *)arg0;
- (void)addFormattedAddressLineHint:(id)arg0;
- (unsigned int)formattedAddressLineHintsCount;
- (void)clearFormattedAddressLineHints;
- (NSObject *)formattedAddressLineHintAtIndex:(unsigned int)arg0;
- (void)setMuid:(unsigned long long)arg0;
- (void)setHasMuid:(char)arg0;
- (char)hasMuid;
- (char)hasLocationHint;
- (char)hasAddressHint;
- (char)hasPlaceNameHint;
- (void)setPlaceTypeHint:(int)arg0;
- (void)setHasPlaceTypeHint:(char)arg0;
- (char)hasPlaceTypeHint;
- (GEOLatLng *)locationHint;
- (GEOStructuredAddress *)addressHint;
- (NSString *)placeNameHint;
- (NSMutableArray *)formattedAddressLineHints;
- (int)placeTypeHint;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

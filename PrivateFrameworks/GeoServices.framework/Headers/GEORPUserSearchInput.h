/* Runtime dump - GEORPUserSearchInput
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUserSearchInput : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOLatLng * _coordinate;
    int _origin;
    GEOPDPlace * _place;
    NSString * _searchString;
    NSString * _singleLineAddressString;
    struct ? _has;
}

@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString * searchString;
@property (readonly, nonatomic) char hasSingleLineAddressString;
@property (retain, nonatomic) NSString * singleLineAddressString;
@property (readonly, nonatomic) char hasPlace;
@property (retain, nonatomic) GEOPDPlace * place;
@property (readonly, nonatomic) char hasAutocompleteEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry * autocompleteEntry;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng * coordinate;
@property (nonatomic) char hasOrigin;
@property (nonatomic) int origin;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPUserSearchInput *)copyWithZone:(struct _NSZone *)arg0;
- (int)origin;
- (void)setOrigin:(int)arg0;
- (NSString *)searchString;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSearchString:(NSString *)arg0;
- (char)hasCoordinate;
- (char)hasOrigin;
- (void)setPlace:(GEOPDPlace *)arg0;
- (GEOPDPlace *)place;
- (char)hasPlace;
- (void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg0;
- (GEOPDAutocompleteEntry *)autocompleteEntry;
- (char)hasSearchString;
- (void)setSingleLineAddressString:(NSString *)arg0;
- (char)hasSingleLineAddressString;
- (char)hasAutocompleteEntry;
- (void)setHasOrigin:(char)arg0;
- (NSString *)singleLineAddressString;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (GEOLatLng *)coordinate;
- (void)setCoordinate:(GEOLatLng *)arg0;

@end

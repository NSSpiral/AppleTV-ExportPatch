/* Runtime dump - GEOPDAutocompleteParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying>
{
    GEOPDAutocompleteParametersAllEntries * _allEntries;
    GEOPDAutocompleteParametersFullEntriesOnly * _fullEntries;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks * _localitiesAndLandmarks;
    int _requestType;
    struct ? _has;
}

@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) char hasFullEntries;
@property (retain, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly * fullEntries;
@property (readonly, nonatomic) char hasAllEntries;
@property (retain, nonatomic) GEOPDAutocompleteParametersAllEntries * allEntries;
@property (readonly, nonatomic) char hasLocalitiesAndLandmarks;
@property (retain, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks * localitiesAndLandmarks;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAutocompleteParameters *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setHasRequestType:(char)arg0;
- (char)hasRequestType;
- (void)setFullEntries:(GEOPDAutocompleteParametersFullEntriesOnly *)arg0;
- (void)setAllEntries:(GEOPDAutocompleteParametersAllEntries *)arg0;
- (void)setLocalitiesAndLandmarks:(GEOPDAutocompleteParametersLocalitiesAndLandmarks *)arg0;
- (char)hasFullEntries;
- (char)hasAllEntries;
- (char)hasLocalitiesAndLandmarks;
- (GEOPDAutocompleteParametersFullEntriesOnly *)fullEntries;
- (GEOPDAutocompleteParametersAllEntries *)allEntries;
- (GEOPDAutocompleteParametersLocalitiesAndLandmarks *)localitiesAndLandmarks;
- (void)setRequestType:(int)arg0;
- (int)requestType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

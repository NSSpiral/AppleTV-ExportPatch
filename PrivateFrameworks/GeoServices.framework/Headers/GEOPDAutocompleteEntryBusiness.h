/* Runtime dump - GEOPDAutocompleteEntryBusiness
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    unsigned long long _muid;
    GEOLatLng * _center;
    int _resultProviderId;
    struct ? _has;
}

@property (readonly, nonatomic) char hasCenter;
@property (retain, nonatomic) GEOLatLng * center;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAutocompleteEntryBusiness *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLatLng *)center;
- (void)setCenter:(GEOLatLng *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasCenter;
- (unsigned long long)muid;
- (PBUnknownFields *)unknownFields;
- (void)setResultProviderId:(int)arg0;
- (void)setHasResultProviderId:(char)arg0;
- (char)hasResultProviderId;
- (int)resultProviderId;
- (void)setMuid:(unsigned long long)arg0;
- (void)setHasMuid:(char)arg0;
- (char)hasMuid;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

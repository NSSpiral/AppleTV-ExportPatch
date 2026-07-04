/* Runtime dump - GEOPDAutocompleteEntryAddress
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    unsigned long long _opaqueGeoId;
    GEOLatLng * _center;
    struct ? _has;
}

@property (readonly, nonatomic) char hasCenter;
@property (retain, nonatomic) GEOLatLng * center;
@property (nonatomic) char hasOpaqueGeoId;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAutocompleteEntryAddress *)copyWithZone:(struct _NSZone *)arg0;
- (GEOLatLng *)center;
- (void)setCenter:(GEOLatLng *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasCenter;
- (PBUnknownFields *)unknownFields;
- (void)setOpaqueGeoId:(unsigned long long)arg0;
- (void)setHasOpaqueGeoId:(char)arg0;
- (char)hasOpaqueGeoId;
- (unsigned long long)opaqueGeoId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

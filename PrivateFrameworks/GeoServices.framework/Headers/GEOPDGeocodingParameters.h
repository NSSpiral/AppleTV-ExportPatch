/* Runtime dump - GEOPDGeocodingParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDGeocodingParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    NSString * _queryString;
    GEOStructuredAddress * _structuredAddress;
    GEOPDViewportInfo * _viewportInfo;
    struct ? _has;
}

@property (readonly, nonatomic) char hasQueryString;
@property (retain, nonatomic) NSString * queryString;
@property (nonatomic) char hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (readonly, nonatomic) char hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo * viewportInfo;
@property (readonly, nonatomic) char hasStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress * structuredAddress;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDGeocodingParameters *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setQueryString:(NSString *)arg0;
- (NSString *)queryString;
- (unsigned int)maxResults;
- (void)setMaxResults:(unsigned int)arg0;
- (void)setHasMaxResults:(char)arg0;
- (char)hasMaxResults;
- (void)setViewportInfo:(GEOPDViewportInfo *)arg0;
- (char)hasViewportInfo;
- (char)hasQueryString;
- (GEOPDGeocodingParameters *)initWithForwardGeocodeAddress:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (GEOPDGeocodingParameters *)initWithForwardGeocodeAddressString:(NSString *)arg0 maxResults:(unsigned int)arg1 traits:(NSArray *)arg2;
- (GEOPDGeocodingParameters *)initWithForwardGeocodeAddress:(NSString *)arg0 addressString:(NSString *)arg1 maxResults:(unsigned int)arg2 traits:(NSArray *)arg3;
- (void)setStructuredAddress:(GEOStructuredAddress *)arg0;
- (char)hasStructuredAddress;
- (GEOStructuredAddress *)structuredAddress;
- (GEOPDViewportInfo *)viewportInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

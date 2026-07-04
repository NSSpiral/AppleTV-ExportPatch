/* Runtime dump - GEOPDAutocompleteParametersLocalitiesAndLandmarks
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersLocalitiesAndLandmarks : PBCodable <NSCopying>
{
    int _maxResults;
    NSString * _query;
    GEOPDViewportInfo * _viewportInfo;
    struct ? _has;
}

@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) NSString * query;
@property (readonly, nonatomic) char hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo * viewportInfo;
@property (nonatomic) char hasMaxResults;
@property (nonatomic) int maxResults;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)query;
- (GEOPDAutocompleteParametersLocalitiesAndLandmarks *)copyWithZone:(struct _NSZone *)arg0;
- (void)setQuery:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasQuery;
- (int)maxResults;
- (void)setMaxResults:(int)arg0;
- (void)setHasMaxResults:(char)arg0;
- (char)hasMaxResults;
- (void)setViewportInfo:(GEOPDViewportInfo *)arg0;
- (char)hasViewportInfo;
- (GEOPDViewportInfo *)viewportInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

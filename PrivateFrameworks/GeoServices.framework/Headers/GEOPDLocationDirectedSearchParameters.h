/* Runtime dump - GEOPDLocationDirectedSearchParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    GEOLatLng * _searchLocation;
    NSString * _searchString;
    int _sortOrder;
    GEOPDViewportInfo * _viewportInfo;
    struct ? _has;
}

@property (nonatomic) char hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) char hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString * searchString;
@property (readonly, nonatomic) char hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo * viewportInfo;
@property (readonly, nonatomic) char hasSearchLocation;
@property (retain, nonatomic) GEOLatLng * searchLocation;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDLocationDirectedSearchParameters *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSortOrder:(int)arg0;
- (int)sortOrder;
- (NSString *)searchString;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSearchString:(NSString *)arg0;
- (void)setSearchLocation:(GEOLatLng *)arg0;
- (unsigned int)maxResults;
- (void)setMaxResults:(unsigned int)arg0;
- (void)setHasMaxResults:(char)arg0;
- (char)hasMaxResults;
- (char)hasSearchLocation;
- (GEOLatLng *)searchLocation;
- (void)setViewportInfo:(GEOPDViewportInfo *)arg0;
- (char)hasViewportInfo;
- (void)setHasSortOrder:(char)arg0;
- (char)hasSortOrder;
- (char)hasSearchString;
- (GEOPDLocationDirectedSearchParameters *)initWithSearchURLQuery:(NSString *)arg0 coordinate:(struct ?)arg1 maxResults:(unsigned int)arg2;
- (GEOPDViewportInfo *)viewportInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

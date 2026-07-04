/* Runtime dump - GEOPDSiriSearchParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying>
{
    GEOAddress * _address;
    NSMutableArray * _businessCategoryFilters;
    GEOPDIndexQueryNode * _indexFilter;
    unsigned int _maxResultCount;
    NSString * _searchString;
    NSMutableArray * _searchSubstringDescriptors;
    int _sortOrder;
    GEOPDViewportInfo * _viewportInfo;
    NSData * _zilchPoints;
    char _isStrictMapRegion;
    char _structuredSearch;
    struct ? _has;
}

@property (nonatomic) char hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) char hasMaxResultCount;
@property (nonatomic) unsigned int maxResultCount;
@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString * searchString;
@property (readonly, nonatomic) char hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo * viewportInfo;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) GEOAddress * address;
@property (retain, nonatomic) NSMutableArray * businessCategoryFilters;
@property (nonatomic) char hasIsStrictMapRegion;
@property (nonatomic) char isStrictMapRegion;
@property (readonly, nonatomic) char hasZilchPoints;
@property (retain, nonatomic) NSData * zilchPoints;
@property (nonatomic) char hasStructuredSearch;
@property (nonatomic) char structuredSearch;
@property (retain, nonatomic) NSMutableArray * searchSubstringDescriptors;
@property (readonly, nonatomic) char hasIndexFilter;
@property (retain, nonatomic) GEOPDIndexQueryNode * indexFilter;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDSiriSearchParameters *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSortOrder:(int)arg0;
- (int)sortOrder;
- (NSString *)searchString;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSearchString:(NSString *)arg0;
- (void)setZilchPoints:(NSData *)arg0;
- (char)hasZilchPoints;
- (NSData *)zilchPoints;
- (void)setAddress:(GEOAddress *)arg0;
- (GEOAddress *)address;
- (char)hasAddress;
- (void)setIndexFilter:(GEOPDIndexQueryNode *)arg0;
- (void)setIsStrictMapRegion:(char)arg0;
- (void)setHasIsStrictMapRegion:(char)arg0;
- (char)hasIsStrictMapRegion;
- (void)setStructuredSearch:(char)arg0;
- (void)setHasStructuredSearch:(char)arg0;
- (char)hasStructuredSearch;
- (char)hasIndexFilter;
- (char)isStrictMapRegion;
- (char)structuredSearch;
- (GEOPDIndexQueryNode *)indexFilter;
- (void)setViewportInfo:(GEOPDViewportInfo *)arg0;
- (char)hasViewportInfo;
- (void)setHasSortOrder:(char)arg0;
- (char)hasSortOrder;
- (char)hasSearchString;
- (void)setBusinessCategoryFilters:(NSMutableArray *)arg0;
- (void)setSearchSubstringDescriptors:(NSMutableArray *)arg0;
- (void)addBusinessCategoryFilter:(NSObject *)arg0;
- (void)addSearchSubstringDescriptor:(NSObject *)arg0;
- (unsigned int)businessCategoryFiltersCount;
- (void)clearBusinessCategoryFilters;
- (NSObject *)businessCategoryFilterAtIndex:(unsigned int)arg0;
- (unsigned int)searchSubstringDescriptorsCount;
- (void)clearSearchSubstringDescriptors;
- (NSObject *)searchSubstringDescriptorAtIndex:(unsigned int)arg0;
- (unsigned int)maxResultCount;
- (void)setMaxResultCount:(unsigned int)arg0;
- (void)setHasMaxResultCount:(char)arg0;
- (char)hasMaxResultCount;
- (NSMutableArray *)businessCategoryFilters;
- (NSMutableArray *)searchSubstringDescriptors;
- (GEOPDViewportInfo *)viewportInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

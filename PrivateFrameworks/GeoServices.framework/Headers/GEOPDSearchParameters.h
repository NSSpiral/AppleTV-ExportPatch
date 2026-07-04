/* Runtime dump - GEOPDSearchParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    NSString * _searchString;
    int _sortOrder;
    GEOPDAutocompleteEntry * _suggestionEntry;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
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
@property (readonly, nonatomic) char hasSuggestionMetadata;
@property (retain, nonatomic) NSData * suggestionMetadata;
@property (readonly, nonatomic) char hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData * suggestionEntryMetadata;
@property (readonly, nonatomic) char hasSuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry * suggestionEntry;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDSearchParameters *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSortOrder:(int)arg0;
- (int)sortOrder;
- (NSString *)searchString;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSearchString:(NSString *)arg0;
- (unsigned int)maxResults;
- (void)setMaxResults:(unsigned int)arg0;
- (void)setHasMaxResults:(char)arg0;
- (char)hasMaxResults;
- (void)setSuggestionMetadata:(NSData *)arg0;
- (char)hasSuggestionMetadata;
- (NSData *)suggestionMetadata;
- (void)setSuggestionEntryMetadata:(NSData *)arg0;
- (void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg0;
- (char)hasSuggestionEntryMetadata;
- (char)hasSuggestionEntry;
- (NSData *)suggestionEntryMetadata;
- (GEOPDAutocompleteEntry *)suggestionEntry;
- (void)setViewportInfo:(GEOPDViewportInfo *)arg0;
- (char)hasViewportInfo;
- (void)setHasSortOrder:(char)arg0;
- (char)hasSortOrder;
- (char)hasSearchString;
- (GEOPDSearchParameters *)initWithSearchQuery:(ATVDataQuery *)arg0 entryMetadata:(NSDictionary *)arg1 metadata:(NSDictionary *)arg2 autocompleteEntry:(GEOPDAutocompleteEntry *)arg3 maxResults:(unsigned int)arg4 traits:(NSArray *)arg5;
- (GEOPDViewportInfo *)viewportInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

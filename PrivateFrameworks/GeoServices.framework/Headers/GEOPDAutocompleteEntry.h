/* Runtime dump - GEOPDAutocompleteEntry
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    GEOPDAutocompleteEntryAddress * _address;
    GEOPDAutocompleteEntryBusiness * _business;
    GEOPDAutocompleteEntryHighlightLine * _highlightExtra;
    GEOPDAutocompleteEntryHighlightLine * _highlightMain;
    GEOPDAutocompleteEntryQuery * _query;
    int _type;
    struct ? _has;
}

@property (readonly, nonatomic) char hasHighlightMain;
@property (retain, nonatomic) GEOPDAutocompleteEntryHighlightLine * highlightMain;
@property (readonly, nonatomic) char hasHighlightExtra;
@property (retain, nonatomic) GEOPDAutocompleteEntryHighlightLine * highlightExtra;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) GEOPDAutocompleteEntryQuery * query;
@property (readonly, nonatomic) char hasBusiness;
@property (retain, nonatomic) GEOPDAutocompleteEntryBusiness * business;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) GEOPDAutocompleteEntryAddress * address;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAutocompleteEntryQuery *)query;
- (void)setType:(int)arg0;
- (int)type;
- (GEOPDAutocompleteEntry *)copyWithZone:(struct _NSZone *)arg0;
- (void)setQuery:(GEOPDAutocompleteEntryQuery *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasQuery;
- (void)setAddress:(GEOPDAutocompleteEntryAddress *)arg0;
- (GEOPDAutocompleteEntryBusiness *)business;
- (GEOPDAutocompleteEntryAddress *)address;
- (char)hasAddress;
- (PBUnknownFields *)unknownFields;
- (void)setBusiness:(GEOPDAutocompleteEntryBusiness *)arg0;
- (char)hasHighlightMain;
- (GEOPDAutocompleteEntryHighlightLine *)highlightMain;
- (char)hasHighlightExtra;
- (GEOPDAutocompleteEntryHighlightLine *)highlightExtra;
- (char)hasBusiness;
- (void)setHighlightMain:(GEOPDAutocompleteEntryHighlightLine *)arg0;
- (void)setHighlightExtra:(GEOPDAutocompleteEntryHighlightLine *)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

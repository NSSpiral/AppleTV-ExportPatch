/* Runtime dump - GEOSuggestionEntry
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionEntry : PBCodable <NSCopying>
{
    struct ? * _textHighlights;
    unsigned int _textHighlightsCount;
    unsigned int _textHighlightsSpace;
    NSString * _calloutTitle;
    NSMutableArray * _displayLines;
    NSString * _iconID;
    GEOLatLng * _latlng;
    NSMutableArray * _namedFeatures;
    NSString * _searchQueryDisplayString;
    NSData * _suggestionEntryMetadata;
}

@property (retain, nonatomic) NSMutableArray * displayLines;
@property (readonly, nonatomic) unsigned int textHighlightsCount;
@property (readonly, nonatomic) struct ? * textHighlights;
@property (readonly, nonatomic) char hasIconID;
@property (retain, nonatomic) NSString * iconID;
@property (readonly, nonatomic) char hasLatlng;
@property (retain, nonatomic) GEOLatLng * latlng;
@property (readonly, nonatomic) char hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData * suggestionEntryMetadata;
@property (readonly, nonatomic) char hasSearchQueryDisplayString;
@property (retain, nonatomic) NSString * searchQueryDisplayString;
@property (readonly, nonatomic) char hasCalloutTitle;
@property (retain, nonatomic) NSString * calloutTitle;
@property (retain, nonatomic) NSMutableArray * namedFeatures;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSuggestionEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setNamedFeatures:(NSMutableArray *)arg0;
- (void)addNamedFeature:(NSObject *)arg0;
- (unsigned int)namedFeaturesCount;
- (void)clearNamedFeatures;
- (NSObject *)namedFeatureAtIndex:(unsigned int)arg0;
- (NSMutableArray *)namedFeatures;
- (void)setSuggestionEntryMetadata:(NSData *)arg0;
- (char)hasSuggestionEntryMetadata;
- (NSData *)suggestionEntryMetadata;
- (NSMutableArray *)displayLines;
- (unsigned int)textHighlightsCount;
- (struct ? *)textHighlights;
- (char)hasSearchQueryDisplayString;
- (NSString *)searchQueryDisplayString;
- (char)hasCalloutTitle;
- (NSString *)calloutTitle;
- (char)hasLatlng;
- (GEOLatLng *)latlng;
- (void)setDisplayLines:(NSMutableArray *)arg0;
- (void)clearTextHighlights;
- (void)setIconID:(NSString *)arg0;
- (void)setLatlng:(GEOLatLng *)arg0;
- (void)setSearchQueryDisplayString:(NSString *)arg0;
- (void)setCalloutTitle:(NSString *)arg0;
- (void)addDisplayLine:(id)arg0;
- (unsigned int)displayLinesCount;
- (void)clearDisplayLines;
- (NSObject *)displayLineAtIndex:(unsigned int)arg0;
- (struct ?)textHighlightsAtIndex:(SEL)arg0;
- (void)addTextHighlights:(struct ?)arg0;
- (void)setTextHighlights:(struct ? *)arg0 count:(NSObject *)arg1;
- (char)hasIconID;
- (NSString *)iconID;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

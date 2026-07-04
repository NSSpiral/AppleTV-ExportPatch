/* Runtime dump - GEOSuggestionsOptions
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionsOptions : PBCodable <NSCopying>
{
    int _entriesType;
    int _listType;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    char _includeRankingFeatures;
    char _normalizePOIs;
    struct ? _has;
}

@property (nonatomic) char hasListType;
@property (nonatomic) int listType;
@property (nonatomic) char hasEntriesType;
@property (nonatomic) int entriesType;
@property (readonly, nonatomic) char hasSuggestionMetadata;
@property (retain, nonatomic) NSData * suggestionMetadata;
@property (readonly, nonatomic) char hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData * suggestionEntryMetadata;
@property (nonatomic) char hasNormalizePOIs;
@property (nonatomic) char normalizePOIs;
@property (nonatomic) char hasIncludeRankingFeatures;
@property (nonatomic) char includeRankingFeatures;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSuggestionsOptions *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSuggestionMetadata:(NSData *)arg0;
- (char)hasSuggestionMetadata;
- (NSData *)suggestionMetadata;
- (void)setSuggestionEntryMetadata:(NSData *)arg0;
- (char)hasSuggestionEntryMetadata;
- (NSData *)suggestionEntryMetadata;
- (void)setListType:(int)arg0;
- (void)setHasListType:(char)arg0;
- (char)hasListType;
- (void)setEntriesType:(int)arg0;
- (void)setHasEntriesType:(char)arg0;
- (char)hasEntriesType;
- (void)setNormalizePOIs:(char)arg0;
- (void)setHasNormalizePOIs:(char)arg0;
- (char)hasNormalizePOIs;
- (void)setIncludeRankingFeatures:(char)arg0;
- (void)setHasIncludeRankingFeatures:(char)arg0;
- (char)hasIncludeRankingFeatures;
- (int)listType;
- (int)entriesType;
- (char)normalizePOIs;
- (char)includeRankingFeatures;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

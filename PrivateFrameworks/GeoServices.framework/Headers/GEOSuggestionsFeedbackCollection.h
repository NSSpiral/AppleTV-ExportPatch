/* Runtime dump - GEOSuggestionsFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _sessionID;
    GEOPDAutocompleteEntry * _suggestionEntry;
    int _suggestionEntryIndex;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    int _suggestionsEntryListIndex;
    struct ? _has;
}

@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (nonatomic) char hasSuggestionsEntryListIndex;
@property (nonatomic) int suggestionsEntryListIndex;
@property (nonatomic) char hasSuggestionEntryIndex;
@property (nonatomic) int suggestionEntryIndex;
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
- (GEOSuggestionsFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setSuggestionMetadata:(NSData *)arg0;
- (char)hasSuggestionMetadata;
- (NSData *)suggestionMetadata;
- (void)setSuggestionEntryMetadata:(NSData *)arg0;
- (void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg0;
- (void)setSuggestionsEntryListIndex:(int)arg0;
- (void)setHasSuggestionsEntryListIndex:(char)arg0;
- (char)hasSuggestionsEntryListIndex;
- (void)setSuggestionEntryIndex:(int)arg0;
- (void)setHasSuggestionEntryIndex:(char)arg0;
- (char)hasSuggestionEntryIndex;
- (char)hasSuggestionEntryMetadata;
- (char)hasSuggestionEntry;
- (int)suggestionsEntryListIndex;
- (int)suggestionEntryIndex;
- (NSData *)suggestionEntryMetadata;
- (GEOPDAutocompleteEntry *)suggestionEntry;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

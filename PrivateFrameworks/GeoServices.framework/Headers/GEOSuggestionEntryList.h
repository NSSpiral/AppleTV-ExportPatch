/* Runtime dump - GEOSuggestionEntryList
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionEntryList : PBCodable <NSCopying>
{
    NSString * _localizedSectionHeader;
    NSMutableArray * _suggestionEntries;
}

@property (retain, nonatomic) NSMutableArray * suggestionEntries;
@property (readonly, nonatomic) char hasLocalizedSectionHeader;
@property (retain, nonatomic) NSString * localizedSectionHeader;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSuggestionEntryList *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)suggestionEntriesCount;
- (NSMutableArray *)suggestionEntries;
- (NSString *)localizedSectionHeader;
- (void)setSuggestionEntries:(NSMutableArray *)arg0;
- (void)setLocalizedSectionHeader:(NSString *)arg0;
- (void)addSuggestionEntries:(NSArray *)arg0;
- (void)clearSuggestionEntries;
- (NSObject *)suggestionEntriesAtIndex:(unsigned int)arg0;
- (char)hasLocalizedSectionHeader;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

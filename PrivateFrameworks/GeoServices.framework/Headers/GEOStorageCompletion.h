/* Runtime dump - GEOStorageCompletion
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageCompletion : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    GEOPDAutocompleteEntry * _autocompleteEntry;
}

@property (readonly, nonatomic) char hasAutocompleteEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry * autocompleteEntry;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

+ (NSObject *)storageForCompletionItem:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOStorageCompletion *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (PBUnknownFields *)unknownFields;
- (void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg0;
- (GEOPDAutocompleteEntry *)autocompleteEntry;
- (void)applyToUserSearchInput:(NSObject *)arg0;
- (char)hasAutocompleteEntry;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

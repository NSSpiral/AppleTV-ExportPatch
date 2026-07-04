/* Runtime dump - GEOPDAutocompleteEntryQuery
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    NSString * _completion;
}

@property (readonly, nonatomic) char hasCompletion;
@property (retain, nonatomic) NSString * completion;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAutocompleteEntryQuery *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)completion;
- (void)setCompletion:(id /* block */)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (PBUnknownFields *)unknownFields;
- (char)hasCompletion;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

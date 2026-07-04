/* Runtime dump - GEOPDAutocompleteEntryHighlightSpan
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    unsigned int _length;
    unsigned int _startIndex;
    struct ? _has;
}

@property (nonatomic) char hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) char hasLength;
@property (nonatomic) unsigned int length;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)length;
- (GEOPDAutocompleteEntryHighlightSpan *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLength:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (PBUnknownFields *)unknownFields;
- (char)hasStartIndex;
- (char)hasLength;
- (unsigned int)startIndex;
- (void)setStartIndex:(unsigned int)arg0;
- (void)setHasStartIndex:(char)arg0;
- (void)setHasLength:(char)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

/* Runtime dump - GEOPDAutocompleteEntryHighlightLine
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    NSString * _line;
    NSMutableArray * _spans;
}

@property (readonly, nonatomic) char hasLine;
@property (retain, nonatomic) NSString * line;
@property (retain, nonatomic) NSMutableArray * spans;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAutocompleteEntryHighlightLine *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLine:(NSString *)arg0;
- (NSString *)line;
- (void)setSpans:(NSMutableArray *)arg0;
- (void)addSpan:(id)arg0;
- (unsigned int)spansCount;
- (void)clearSpans;
- (NSObject *)spanAtIndex:(unsigned int)arg0;
- (char)hasLine;
- (PBUnknownFields *)unknownFields;
- (NSMutableArray *)spans;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

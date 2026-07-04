/* Runtime dump - GEOPDAutocompleteResult
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteResult : PBCodable <NSCopying>
{
    NSMutableArray * _sections;
}

@property (retain, nonatomic) NSMutableArray * sections;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAutocompleteResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSections:(NSMutableArray *)arg0;
- (NSMutableArray *)sections;
- (void)addSections:(NSArray *)arg0;
- (unsigned int)sectionsCount;
- (void)clearSections;
- (NSObject *)sectionsAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

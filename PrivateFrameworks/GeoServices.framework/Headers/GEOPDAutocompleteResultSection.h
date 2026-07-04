/* Runtime dump - GEOPDAutocompleteResultSection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying>
{
    NSMutableArray * _entries;
    NSString * _name;
    int _type;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSMutableArray * entries;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(int)arg0;
- (int)type;
- (GEOPDAutocompleteResultSection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)entries;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;
- (void)setEntries:(NSMutableArray *)arg0;
- (void)addEntries:(NSArray *)arg0;
- (unsigned int)entriesCount;
- (void)clearEntries;
- (NSObject *)entriesAtIndex:(unsigned int)arg0;

@end

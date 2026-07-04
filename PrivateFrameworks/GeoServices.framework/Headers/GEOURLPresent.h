/* Runtime dump - GEOURLPresent
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLPresent : PBCodable <NSCopying>
{
    NSMutableArray * _items;
    GEOURLOptions * _options;
}

@property (retain, nonatomic) NSMutableArray * items;
@property (readonly, nonatomic) char hasOptions;
@property (retain, nonatomic) GEOURLOptions * options;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOURLPresent *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)items;
- (void)setItems:(NSMutableArray *)arg0;
- (void)addItem:(NSObject *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setOptions:(GEOURLOptions *)arg0;
- (GEOURLOptions *)options;
- (unsigned int)itemsCount;
- (BRControl *)itemAtIndex:(unsigned int)arg0;
- (GEOURLPresent *)initWithOptions:(GEOURLOptions *)arg0;
- (GEOURLPresent *)initWithDirectionsOptions:(NSDictionary *)arg0;
- (char)hasOptions;
- (void)clearItems;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

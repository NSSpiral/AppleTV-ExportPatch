/* Runtime dump - GEOVConnectivity
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVConnectivity : PBCodable <NSCopying>
{
    NSMutableArray * _junctions;
}

@property (retain, nonatomic) NSMutableArray * junctions;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVConnectivity *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)clearJunctions;
- (NSObject *)junctionAtIndex:(unsigned int)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)junctionsCount;
- (NSMutableArray *)junctions;
- (void)addJunction:(MKJunction *)arg0;
- (void)setJunctions:(NSMutableArray *)arg0;

@end

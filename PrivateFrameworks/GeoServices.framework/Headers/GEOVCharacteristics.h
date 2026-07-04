/* Runtime dump - GEOVCharacteristics
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVCharacteristics : PBCodable <NSCopying>
{
    NSMutableArray * _pointCharacteristics;
}

@property (retain, nonatomic) NSMutableArray * pointCharacteristics;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVCharacteristics *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPointCharacteristics:(NSMutableArray *)arg0;
- (void)addPointCharacteristic:(GEOVPointCharacteristic *)arg0;
- (unsigned int)pointCharacteristicsCount;
- (void)clearPointCharacteristics;
- (NSObject *)pointCharacteristicAtIndex:(unsigned int)arg0;
- (NSMutableArray *)pointCharacteristics;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

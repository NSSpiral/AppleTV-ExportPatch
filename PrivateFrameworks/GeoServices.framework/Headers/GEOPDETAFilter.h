/* Runtime dump - GEOPDETAFilter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDETAFilter : PBCodable <NSCopying>
{
    struct ? _transportTypes;
}

@property (readonly, nonatomic) unsigned int transportTypesCount;
@property (readonly, nonatomic) int * transportTypes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDETAFilter *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)transportTypesCount;
- (int)transportTypeAtIndex:(unsigned int)arg0;
- (void)clearTransportTypes;
- (void)addTransportType:(int)arg0;
- (int *)transportTypes;
- (void)setTransportTypes:(int *)arg0 count:(unsigned int)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

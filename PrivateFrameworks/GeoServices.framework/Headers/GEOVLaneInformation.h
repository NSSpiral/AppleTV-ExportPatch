/* Runtime dump - GEOVLaneInformation
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneInformation : PBCodable <NSCopying>
{
    unsigned int _style;
    unsigned int _validityMask;
}

@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned int validityMask;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVLaneInformation *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)validityMask;
- (void)setValidityMask:(unsigned int)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

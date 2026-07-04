/* Runtime dump - GEOFeatureStyleAttributes
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFeatureStyleAttributes : NSObject <NSCopying>
{
    struct ? * v;
    GEOFeatureStyleAttributes * _sharedAttributes;
    struct ? * extAttrs;
    unsigned char countExtAttrs;
    unsigned char countAttrs;
    char featureType;
}

- (void)dealloc;
- (GEOFeatureStyleAttributes *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOFeatureStyleAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (char)hasDrivingSide;
- (char)isTunnel;
- (void)sort;
- (GEOFeatureStyleAttributes *)initWithPlaceDataStyleAttributes:(NSDictionary *)arg0;
- (void)setExtAttributes:(struct ? *)arg0 count:(unsigned int)arg1;
- (GEOFeatureStyleAttributes *)initWithSharedStyleAttributes:(NSDictionary *)arg0 extAttributes:(struct ? *)arg1 extAttributeCount:(unsigned char)arg2;
- (GEOFeatureStyleAttributes *)initWithStyleAttributes:(NSDictionary *)arg0;
- (int)rampType;
- (int)rampDirection;
- (char)isRailway;
- (GEOFeatureStyleAttributes *)initWithAttributes:(unsigned int)arg0;
- (char)featureType;
- (char)shouldSuppress3DBuildingStrokes;
- (char)isDrivable;
- (char)isWalkable;
- (char)isFreeway;
- (char)isRamp;
- (int)drivingSide;
- (void)replaceAttributes:(struct ? *)arg0 count:(unsigned int)arg1;

@end

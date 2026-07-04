/* Runtime dump - VKLabelMarkerFeatureHandle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarkerFeatureHandle : NSObject
{
    int _featureType;
    int _featureIndex;
    int _tileX;
    int _tileY;
    int _tileZ;
    int _tileStyle;
    unsigned int _tileVersion;
    GEOFeatureStyleAttributes * _styleAttributes;
}

- (void)dealloc;
- (GEOFeatureStyleAttributes *)styleAttributes;
- (int)featureType;
- (int)featureIndex;
- (int)tileX;
- (int)tileY;
- (int)tileZ;
- (int)tileStyle;
- (unsigned int)tileVersion;
- (VKLabelMarkerFeatureHandle *)initWithFeature:(struct ? *)arg0 featureType:(int)arg1;

@end

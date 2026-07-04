/* Runtime dump - MRSphere
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRSphere : NSObject
{
    float * mVertices;
    float * mTextureCoordinates;
    float * mNormals;
    unsigned long mLongitudeResolution;
    unsigned long mLatitudeResolution;
    float mHalfLongitudeAngle;
    float mHalfLatitudeAngle;
    float mRadius;
}

@property (nonatomic) unsigned long longitudeResolution;
@property (nonatomic) unsigned long latitudeResolution;
@property (nonatomic) float halfLongitudeAngle;
@property (nonatomic) float halfLatitudeAngle;
@property (nonatomic) float radius;

- (void)dealloc;
- (MRSphere *)init;
- (void)renderDumbImage:(UIImage *)arg0 inContext:(NSObject *)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3;
- (unsigned long)longitudeResolution;
- (void)setLongitudeResolution:(unsigned long)arg0;
- (unsigned long)latitudeResolution;
- (void)setLatitudeResolution:(unsigned long)arg0;
- (float)halfLongitudeAngle;
- (void)setHalfLongitudeAngle:(float)arg0;
- (float)halfLatitudeAngle;
- (void)setHalfLatitudeAngle:(float)arg0;
- (float)radius;
- (void)setRadius:(float)arg0;

@end

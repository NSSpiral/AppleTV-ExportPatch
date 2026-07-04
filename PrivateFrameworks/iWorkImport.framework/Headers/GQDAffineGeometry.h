/* Runtime dump - GQDAffineGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDAffineGeometry : NSObject <GQDNameMappable>
{
    struct CGSize mNaturalSize;
    struct CGSize mSize;
    char mSizesLocked;
    char mAspectRatioLocked;
    struct CGPoint mPosition;
    float mAngle;
    char mHorizontalFlip;
    char mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)transformRect:(struct CGRect)arg0 transform:(struct CGSize)arg1 upperLeft:(id)arg2 lowerLeft:(id)arg3 lowerRight:(struct CGPoint *)arg4 upperRight:(struct CGPoint *)arg5;
+ (struct CGRect)boundsOfTransformedRect:(NSObject *)arg0 transform:(SEL)arg1;
+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (struct CGSize)sizeOfBoundingBox;
- (struct CGAffineTransform)transformHasVFlip:(char)arg0 vFlip:(char)arg1 hasHFlip:(char)arg2 hFlip:(char)arg3;
- (struct CGRect)naturalBounds;
- (char)sizesLocked;
- (void)setSizesLocked:(char)arg0;
- (char)aspectRatioLocked;
- (char)horizontalFlip;
- (void)setHorizontalFlip:(char)arg0;
- (char)verticalFlip;
- (void)setVerticalFlip:(char)arg0;
- (float)shearXAngle;
- (void)setShearXAngle:(float)arg0;
- (float)shearYAngle;
- (void)setShearYAngle:(float)arg0;
- (struct CGPoint)nonrotatedPosition;
- (void)setNaturalSize:(struct CGSize)arg0;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGAffineTransform)transform;
- (struct CGPoint)position;
- (void).cxx_construct;
- (void)setAngle:(float)arg0;
- (float)angle;
- (struct CGSize)naturalSize;
- (void)setAspectRatioLocked:(char)arg0;

@end

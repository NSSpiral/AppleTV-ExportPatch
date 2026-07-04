/* Runtime dump - OADOrientedBounds
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADOrientedBounds : NSObject
{
    struct CGRect mBounds;
    float mRotation;
    id mFlipX;
    id mFlipY;
    int mModeX;
    int mModeY;
}

+ (OADOrientedBounds *)orientedBoundsWithBounds:(struct CGRect)arg0;
+ (OADOrientedBounds *)orientedBoundsWithBounds:(struct CGRect)arg0 rotation:(struct CGSize)arg1 flipX:(id)arg2 flipY:(float)arg3;
+ (char)directionCloserToVerticalThanToHorizontal:(float)arg0;

- (OADOrientedBounds *)initWithBounds:(struct CGRect)arg0;
- (struct CGRect)bounds;
- (OADOrientedBounds *)init;
- (void)setBounds:(struct CGRect)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setRotation:(float)arg0;
- (float)rotation;
- (void).cxx_construct;
- (struct CGRect)boundingBox;
- (void)setFlipY:(char)arg0;
- (void)setFlipX:(char)arg0;
- (char)flipY;
- (void)setOrientedBounds:(OADOrientedBounds *)arg0;
- (char)flipX;
- (OADOrientedBounds *)initWithBounds:(struct CGRect)arg0 rotation:(struct CGSize)arg1 flipX:(id)arg2 flipY:(float)arg3;
- (struct CGSize)boundingBoxSize;
- (int)xMode;
- (int)yMode;
- (void)setXMode:(int)arg0;
- (void)setYMode:(int)arg0;
- (char)isEqualToOrientedBounds:(id)arg0;

@end

/* Runtime dump - OADReflectionEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADReflectionEffect : OADEffect
{
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    char mRotateWithShape;
}

- (void)setAlignment:(int)arg0;
- (OADReflectionEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADReflectionEffect *)copyWithZone:(struct _NSZone *)arg0;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg0;
- (void)setDirection:(float)arg0;
- (float)direction;
- (int)alignment;
- (float)startPosition;
- (float)endPosition;
- (void)setStartPosition:(float)arg0;
- (void)setDistance:(float)arg0;
- (void)setRotateWithShape:(char)arg0;
- (void)setStyleColor:(UIColor *)arg0;
- (float)xScale;
- (void)setXScale:(float)arg0;
- (float)yScale;
- (void)setYScale:(float)arg0;
- (float)xSkew;
- (void)setXSkew:(float)arg0;
- (float)ySkew;
- (void)setYSkew:(float)arg0;
- (char)rotateWithShape;
- (float)endOpacity;
- (float)fadeDirection;
- (void)setEndOpacity:(float)arg0;
- (void)setEndPosition:(float)arg0;
- (void)setFadeDirection:(float)arg0;
- (float)startOpacity;
- (void)setStartOpacity:(float)arg0;
- (float)distance;

@end

/* Runtime dump - OADOuterShadowEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADOuterShadowEffect : OADShadowEffect
{
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    char mRotateWithShape;
}

- (void)setAlignment:(int)arg0;
- (OADOuterShadowEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADOuterShadowEffect *)copyWithZone:(struct _NSZone *)arg0;
- (int)alignment;
- (void)setRotateWithShape:(char)arg0;
- (float)xScale;
- (void)setXScale:(float)arg0;
- (float)yScale;
- (void)setYScale:(float)arg0;
- (float)xSkew;
- (void)setXSkew:(float)arg0;
- (float)ySkew;
- (void)setYSkew:(float)arg0;
- (char)rotateWithShape;

@end

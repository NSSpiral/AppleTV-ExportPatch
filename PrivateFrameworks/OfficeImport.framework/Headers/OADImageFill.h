/* Runtime dump - OADImageFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageFill : OADFill
{
    OADBlipRef * mBlipRef;
    char mIsBlipRefOverridden;
    OADRelativeRect * mSourceRect;
    char mIsSourceRectOverridden;
    long mDpi;
    char mIsDpiOverridden;
    char mRotateWithShape;
    char mIsRotateWithShapeOverridden;
    OADImageFillTechnique * mTechnique;
    char mIsTechniqueOverridden;
}

+ (OADImageFill *)defaultProperties;

- (void)setTechnique:(SCNTechnique *)arg0;
- (SCNTechnique *)technique;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADImageFill *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)color;
- (void)setSourceRect:(struct CGRect)arg0;
- (struct CGRect)sourceRect;
- (char)isBlipRefOverridden;
- (OADBlipRef *)blipRef;
- (char)isSourceRectOverridden;
- (void)setRotateWithShape:(char)arg0;
- (void)setBlipRef:(OADBlipRef *)arg0;
- (void)setStyleColor:(UIColor *)arg0;
- (char)isRotateWithShapeOverridden;
- (void)setDpi:(long)arg0;
- (char)isDpiOverridden;
- (char)isTechniqueOverridden;
- (long)dpi;
- (char)rotateWithShape;
- (OADImageFill *)initWithDefaults;
- (void)setParent:(NSObject *)arg0;

@end

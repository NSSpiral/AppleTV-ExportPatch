/* Runtime dump - OADShape3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShape3D : NSObject <NSCopying>
{
    OADBevel * mTopBevel;
    OADBevel * mBottomBevel;
    OADColor * mExtrusionColor;
    float mExtrusionHeight;
    OADColor * mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (OADShape3D *)nullShape3D;

- (int)material;
- (void)setMaterial:(int)arg0;
- (void)dealloc;
- (OADShape3D *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADShape3D *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTopBevel:(id)arg0;
- (void)setBottomBevel:(id)arg0;
- (void)setExtrusionColor:(UIColor *)arg0;
- (void)setContourColor:(UIColor *)arg0;
- (void)setShapeDepth:(float)arg0;
- (void)setExtrusionHeight:(float)arg0;
- (void)setContourWidth:(float)arg0;
- (float)shapeDepth;
- (float)extrusionHeight;
- (float)contourWidth;
- (id)topBevel;
- (id)bottomBevel;
- (UIColor *)extrusionColor;
- (UIColor *)contourColor;

@end

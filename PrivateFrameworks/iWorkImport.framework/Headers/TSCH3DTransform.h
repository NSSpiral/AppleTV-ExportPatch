/* Runtime dump - TSCH3DTransform
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTransform : NSObject <NSCopying>
{
    struct tvec3<float> mTranslation;
    struct tvec3<float> mScaleFactor;
    struct tquat<float> mRotation;
    struct tvec3<float> mCenter;
    struct tmat4x4<float> mMatrix;
    char mDirty;
}

@property (nonatomic) struct tvec3<float> translation;
@property (nonatomic) struct tvec3<float> scaleFactor;
@property (nonatomic) struct tquat<float> rotation;
@property (nonatomic) struct tvec3<float> center;

+ (struct SCNMatrix4)transform;

- (struct Transform)asTSCH3DCPPTransform;
- (void)setScaleFactor:(struct tvec3<float>)arg0;
- (TSCH3DTransform *)init;
- (TSCH3DTransform *)copyWithZone:(struct _NSZone *)arg0;
- (struct tvec3<float>)center;
- (struct tmat4x4<float> *)transform;
- (void)setCenter:(struct tvec3<float>)arg0;
- (void)setRotation:(struct tquat<float>)arg0;
- (struct tquat<float>)rotation;
- (struct tvec3<float>)scaleFactor;
- (void).cxx_construct;
- (void)setTranslation:(struct tvec3<float>)arg0;
- (struct tvec3<float>)translation;

@end

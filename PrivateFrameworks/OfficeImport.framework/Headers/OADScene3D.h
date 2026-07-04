/* Runtime dump - OADScene3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADScene3D : NSObject <NSCopying>
{
    OADCamera * mCamera;
    OADLightRig * mLightRig;
    OADBackdrop * mBackdrop;
}

+ (id)nullScene3D;

- (void)dealloc;
- (OADScene3D *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADScene3D *)copyWithZone:(struct _NSZone *)arg0;
- (_UIBackdropView *)backdrop;
- (void)setBackdrop:(_UIBackdropView *)arg0;
- (void)setLightRig:(OADLightRig *)arg0;
- (OADLightRig *)lightRig;
- (SCNCamera *)camera;
- (void)setCamera:(VKCamera *)arg0;

@end

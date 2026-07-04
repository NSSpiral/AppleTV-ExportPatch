/* Runtime dump - OADCamera
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCamera : NSObject <NSCopying>
{
    OADRotation3D * mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (void)dealloc;
- (OADCamera *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADCamera *)copyWithZone:(struct _NSZone *)arg0;
- (void)setRotation:(CPRotation *)arg0;
- (struct SCNVector4)rotation;
- (void)setZoom:(float)arg0;
- (float)zoom;
- (void)setCameraType:(int)arg0;
- (void)setFieldOfView:(float)arg0;
- (int)cameraType;
- (float)fieldOfView;

@end

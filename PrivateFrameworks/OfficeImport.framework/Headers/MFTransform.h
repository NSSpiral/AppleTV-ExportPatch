/* Runtime dump - MFTransform
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFTransform : NSObject <NSCopying>
{
    struct CGAffineTransform m_world;
    struct CGPoint m_windowOrg;
    struct CGPoint m_windowExt;
    struct CGPoint m_viewportOrg;
    struct CGPoint m_viewportExt;
    struct CGAffineTransform m_combinedTransform;
    int m_mapMode;
    NSObject<MFDeviceDriver> * m_deviceDriver;
}

- (int)setWorldTransform:(struct CGAffineTransform *)arg0;
- (MFTransform *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (MFTransform *)initWithDriver:(MFPhoneDeviceDriver *)arg0;
- (struct CGAffineTransform)getTransformMatrix;
- (int)setWindowExt:(int)arg0 :(int)arg1;
- (int)setWindowOrg:(int)arg0 :(int)arg1;
- (int)setViewportExt:(int)arg0 :(int)arg1;
- (int)offsetWindowOrg:(int)arg0 :(int)arg1;
- (int)offsetViewportOrg:(int)arg0 :(int)arg1;
- (int)setViewportOrg:(int)arg0 :(int)arg1;
- (int)scaleViewportExt:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3;
- (int)scaleWindowExt:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3;
- (int)modifyWorldTransform:(struct CGAffineTransform *)arg0 :(struct CGAffineTransform)arg1;
- (int)updateTransform;
- (struct CGAffineTransform)getWorldMatrix;
- (void)setWorldMatrix:(struct CGAffineTransform)arg0;
- (struct CGPoint)getWindowOrg;
- (void)setWindowOrg:(struct CGPoint)arg0;
- (struct CGPoint)getWindowExtent;
- (void)setWindowExt:(struct CGPoint)arg0;
- (struct CGPoint)getViewportOrg;
- (void)setViewportOrg:(struct CGPoint)arg0;
- (struct CGPoint)getViewportExtent;
- (void)setViewportExt:(struct CGPoint)arg0;
- (void)setTransformMatrix:(struct CGAffineTransform)arg0;
- (int)getMapMode;
- (char)isUpsideDown;
- (struct CGPoint)DPtoLP:(struct CGPoint)arg0;
- (struct CGPoint)LPtoDP:(struct CGPoint)arg0;
- (int)setMapMode:(int)arg0;

@end

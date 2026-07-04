/* Runtime dump - CAMMutablePanoramaCaptureRequest
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest

@property (nonatomic) int deviceOrientation;
@property (nonatomic) int captureDevice;

- (void)setDeviceOrientation:(int)arg0;
- (void)setCaptureDevice:(int)arg0;
- (void)setParameter:(ICSRoleParameter *)arg0 forKey:(NSString *)arg1;

@end

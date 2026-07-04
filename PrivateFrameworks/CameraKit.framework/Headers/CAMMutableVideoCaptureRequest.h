/* Runtime dump - CAMMutableVideoCaptureRequest
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMMutableVideoCaptureRequest : CAMVideoCaptureRequest

@property (nonatomic) int deviceOrientation;
@property (nonatomic) int captureDevice;
@property (nonatomic) int torchMode;

- (void)setTorchMode:(int)arg0;
- (void)setDeviceOrientation:(int)arg0;
- (void)setCaptureDevice:(int)arg0;
- (void)setParameter:(ICSRoleParameter *)arg0 forKey:(NSString *)arg1;

@end

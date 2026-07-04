/* Runtime dump - CAMVideoCaptureRequest
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>
{
    int _deviceOrientation;
    int _captureDevice;
    int _torchMode;
}

@property (readonly, nonatomic) int deviceOrientation;
@property (readonly, nonatomic) int captureDevice;
@property (readonly, nonatomic) int torchMode;

- (int)torchMode;
- (CAMVideoCaptureRequest *)init;
- (CAMVideoCaptureRequest *)copyWithZone:(struct _NSZone *)arg0;
- (int)deviceOrientation;
- (CAMVideoCaptureRequest *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)captureDevice;

@end

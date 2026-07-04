/* Runtime dump - CAMPanoramaCaptureRequest
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>
{
    int _deviceOrientation;
    int _captureDevice;
}

@property (readonly, nonatomic) int deviceOrientation;
@property (readonly, nonatomic) int captureDevice;

- (CAMPanoramaCaptureRequest *)init;
- (CAMPanoramaCaptureRequest *)copyWithZone:(struct _NSZone *)arg0;
- (int)deviceOrientation;
- (CAMPanoramaCaptureRequest *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)captureDevice;

@end

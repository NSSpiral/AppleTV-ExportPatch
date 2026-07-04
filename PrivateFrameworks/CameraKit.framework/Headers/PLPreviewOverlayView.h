/* Runtime dump - PLPreviewOverlayView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface PLPreviewOverlayView : UIView
{
    CAMCameraView * cameraView;
}

@property (nonatomic) CAMCameraView * cameraView;

- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (CAMCameraView *)cameraView;
- (void)setCameraView:(CAMCameraView *)arg0;

@end

/* Runtime dump - CAMPanoramaCaptureParameters
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMPanoramaCaptureParameters : NSObject
{
    double _speed;
    struct CGRect _cropRectangle;
}

@property (nonatomic) double speed;
@property (nonatomic) struct CGRect cropRectangle;

- (void)setSpeed:(double)arg0;
- (double)speed;
- (struct CGRect)cropRectangle;
- (void)setCropRectangle:(struct CGRect)arg0;

@end

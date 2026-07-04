/* Runtime dump - FigCameraViewfinderLocal
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver>
{
    char _observing;
    NSDictionary * _options;
    FigCameraViewfinderSessionLocal * _activeViewfinderSession;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) int photoThumbnailMaxDimension;
@property (readonly) char photoThumbnailQualitySpecified;
@property (readonly) float photoThumbnailQuality;

+ (void)initialize;
+ (FigCameraViewfinderLocal *)cameraViewfinder;

- (void)dealloc;
- (FigCameraViewfinderLocal *)init;
- (void)stop;
- (void)startWithOptions:(NSDictionary *)arg0;
- (int)photoThumbnailMaxDimension;
- (char)photoThumbnailQualitySpecified;
- (float)photoThumbnailQuality;
- (void)captureSession:(long long)arg0 didCapturePhotoWithStatus:(long)arg1 thumbnailData:(NSData *)arg2 timestamp:(struct ?)arg3;
- (void)captureSessionDidStop:(long long)arg0;
- (void)captureSessionDidStart:(id)arg0;
- (void)_updateActiveViewfinderSession:(NSObject *)arg0;

@end

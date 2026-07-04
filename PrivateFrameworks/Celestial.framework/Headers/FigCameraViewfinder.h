/* Runtime dump - FigCameraViewfinder
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinder : NSObject
{
    FigCameraViewfinderSession * _delegateActiveViewfinderSession;
    FigDelegateStorage * _delegateStorage;
}

@property (readonly) <FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> * delegate;
@property (readonly) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) FigCameraViewfinderSession * delegateActiveViewfinderSession;

+ (FigCameraViewfinder *)cameraViewfinder;

- (void)dealloc;
- (FigCameraViewfinder *)init;
- (<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> *)delegate;
- (void)stop;
- (void)startWithOptions:(NSDictionary *)arg0;
- (FigCameraViewfinderSession *)delegateActiveViewfinderSession;
- (void)setDelegateActiveViewfinderSession:(FigCameraViewfinderSession *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setDelegate:(<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;

@end

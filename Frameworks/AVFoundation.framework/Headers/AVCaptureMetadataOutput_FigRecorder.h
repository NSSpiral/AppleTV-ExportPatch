/* Runtime dump - AVCaptureMetadataOutput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureMetadataOutputInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) <AVCaptureMetadataOutputObjectsDelegate_FigRecorder> * metadataObjectsDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSArray * availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray * metadataObjectTypes;
@property (nonatomic) struct CGRect rectOfInterest;

+ (void)initialize;

- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (NSArray *)connectionMediaTypes;
- (void)didStartForSession:(NSObject *)arg0;
- (void)didStartForSessionWithoutGraphRebuild:(id)arg0;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (struct CGRect)rectOfInterest;
- (NSArray *)metadataObjectTypes;
- (NSArray *)availableMetadataObjectTypes;
- (char)_faceMetadataIsActive;
- (void)applyLiveSourceProperties;
- (void)setMetadataObjectsDelegate:(<AVCaptureMetadataOutputObjectsDelegate_FigRecorder> *)arg0 queue:(NSObject *)arg1;
- (<AVCaptureMetadataOutputObjectsDelegate_FigRecorder> *)metadataObjectsDelegate;
- (NSObject<OS_dispatch_queue> *)metadataObjectsCallbackQueue;
- (void)setMetadataObjectTypes:(NSArray *)arg0;
- (void)setRectOfInterest:(struct CGRect)arg0;
- (void)dealloc;
- (AVCaptureMetadataOutput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (NSObject<UIFormPeripheral> *)_input;

@end

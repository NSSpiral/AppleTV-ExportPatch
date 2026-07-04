/* Runtime dump - AVCaptureMetadataOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutput : AVCaptureOutput
{
    AVCaptureMetadataOutputInternal * _internal;
}

@property (readonly, nonatomic) <AVCaptureMetadataOutputObjectsDelegate> * metadataObjectsDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSArray * availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray * metadataObjectTypes;
@property (nonatomic) struct CGRect rectOfInterest;

+ (NSString *)_metadataConstantValueToName:(NSString *)arg0;
+ (AVCaptureMetadataOutput *)alloc;
+ (void)initialize;

- (NSArray *)connectionMediaTypes;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque *)arg0;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation *)arg0;
- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (NSArray *)_metadataIdentifiers;
- (struct CGRect)rectOfInterest;
- (NSArray *)metadataObjectTypes;
- (NSArray *)availableMetadataObjectTypes;
- (char)_faceMetadataIsActive;
- (void)setMetadataObjectsDelegate:(<AVCaptureMetadataOutputObjectsDelegate> *)arg0 queue:(NSObject *)arg1;
- (<AVCaptureMetadataOutputObjectsDelegate> *)metadataObjectsDelegate;
- (NSObject<OS_dispatch_queue> *)metadataObjectsCallbackQueue;
- (void)setMetadataObjectTypes:(NSArray *)arg0;
- (void)setRectOfInterest:(struct CGRect)arg0;
- (void)dealloc;
- (AVCaptureMetadataOutput *)init;

@end

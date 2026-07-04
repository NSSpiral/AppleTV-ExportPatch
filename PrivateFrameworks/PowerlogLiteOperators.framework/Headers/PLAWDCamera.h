/* Runtime dump - PLAWDCamera
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDCamera : PLAWDAuxMetrics
{
    char _prevFrontCameraState;
    char _prevBackCameraState;
    char _prevTorchCameraState;
    PLEntryNotificationOperatorComposition * _cameraEventCallbackFront;
    PLEntryNotificationOperatorComposition * _cameraEventCallbackBack;
    PLEntryNotificationOperatorComposition * _cameraEventCallbackTorch;
    long _cameraSubmitCnt;
    double _frontCameraTimestamp;
    double _backCameraTimestamp;
    double _torchCameraTimestamp;
}

@property (retain) PLEntryNotificationOperatorComposition * cameraEventCallbackFront;
@property (retain) PLEntryNotificationOperatorComposition * cameraEventCallbackBack;
@property (retain) PLEntryNotificationOperatorComposition * cameraEventCallbackTorch;
@property (weak) PLOperator * operator;
@property (retain, nonatomic) NSMutableSet * runningMetrics;
@property char prevFrontCameraState;
@property char prevBackCameraState;
@property char prevTorchCameraState;
@property double frontCameraTimestamp;
@property double backCameraTimestamp;
@property double torchCameraTimestamp;
@property long cameraSubmitCnt;

+ (PLAWDCamera *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;
+ (PLAWDCamera *)entryAggregateDefinitionAwdCamera;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)initCameraStats;
- (void)handleFrontCameraCallback:(id /* block */)arg0;
- (void)setCameraEventCallbackFront:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleBackCameraCallback:(id /* block */)arg0;
- (void)setCameraEventCallbackBack:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleTorchCameraCallback:(id /* block */)arg0;
- (void)setCameraEventCallbackTorch:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setPrevFrontCameraState:(char)arg0;
- (void)setPrevBackCameraState:(char)arg0;
- (void)setPrevTorchCameraState:(char)arg0;
- (void)resetCameraTable;
- (char)prevFrontCameraState;
- (void)setFrontCameraTimestamp:(double)arg0;
- (char)prevBackCameraState;
- (void)setBackCameraTimestamp:(double)arg0;
- (char)prevTorchCameraState;
- (void)setTorchCameraTimestamp:(double)arg0;
- (double)frontCameraTimestamp;
- (void)addEntryToCameraTable:(id)arg0 withValue:(double)arg1;
- (double)backCameraTimestamp;
- (double)torchCameraTimestamp;
- (long)cameraSubmitCnt;
- (void)setCameraSubmitCnt:(long)arg0;
- (void)reInitCameraStats;
- (PLEntryNotificationOperatorComposition *)cameraEventCallbackFront;
- (PLEntryNotificationOperatorComposition *)cameraEventCallbackBack;
- (PLEntryNotificationOperatorComposition *)cameraEventCallbackTorch;

@end

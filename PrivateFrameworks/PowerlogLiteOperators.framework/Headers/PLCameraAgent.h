/* Runtime dump - PLCameraAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLCameraAgent : PLAgent
{
    PLCFNotificationOperatorComposition * _frontCameraPowerNotification;
    PLCFNotificationOperatorComposition * _backCameraPowerNotification;
    PLCFNotificationOperatorComposition * _cameraTorchNotification;
    NSDictionary * _torchPowerModel;
}

@property (readonly) PLCFNotificationOperatorComposition * frontCameraPowerNotification;
@property (readonly) PLCFNotificationOperatorComposition * backCameraPowerNotification;
@property (readonly) PLCFNotificationOperatorComposition * cameraTorchNotification;
@property (readonly) NSDictionary * torchPowerModel;

+ (void)load;
+ (PLCameraAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;

- (PLCameraAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)modelTorchPower:(id)arg0;
- (double)torchLevelToTorchPower:(double)arg0;
- (NSDictionary *)torchPowerModel;
- (void)initOperatorDependancies;
- (PLCFNotificationOperatorComposition *)frontCameraPowerNotification;
- (PLCFNotificationOperatorComposition *)backCameraPowerNotification;
- (PLCFNotificationOperatorComposition *)cameraTorchNotification;

@end

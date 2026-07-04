/* Runtime dump - PLVideoAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLVideoAgent : PLAgent
{
    PLCFNotificationOperatorComposition * _VRPFinalized;
    PLCFNotificationOperatorComposition * _VRPPaused;
    PLCFNotificationOperatorComposition * _VRPPlaying;
    PLCFNotificationOperatorComposition * _VRPCreated;
}

@property (readonly) PLCFNotificationOperatorComposition * VRPFinalized;
@property (readonly) PLCFNotificationOperatorComposition * VRPPaused;
@property (readonly) PLCFNotificationOperatorComposition * VRPPlaying;
@property (readonly) PLCFNotificationOperatorComposition * VRPCreated;

+ (void)load;
+ (PLVideoAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;

- (PLVideoAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (PLCFNotificationOperatorComposition *)VRPFinalized;
- (PLCFNotificationOperatorComposition *)VRPPaused;
- (PLCFNotificationOperatorComposition *)VRPPlaying;
- (PLCFNotificationOperatorComposition *)VRPCreated;

@end

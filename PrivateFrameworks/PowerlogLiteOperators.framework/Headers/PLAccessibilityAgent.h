/* Runtime dump - PLAccessibilityAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAccessibilityAgent : PLAgent
{
    PLCFNotificationOperatorComposition * _notificationReduceMotionChanged;
    PLCFNotificationOperatorComposition * _notificationBackgroundContrastChanged;
}

@property (readonly) PLCFNotificationOperatorComposition * notificationReduceMotionChanged;
@property (readonly) PLCFNotificationOperatorComposition * notificationBackgroundContrastChanged;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventNoneDefinitions;

- (PLAccessibilityAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)logEventForwardReduceMotion;
- (void)logEventForwardBackgroundContrast;
- (PLCFNotificationOperatorComposition *)notificationReduceMotionChanged;
- (PLCFNotificationOperatorComposition *)notificationBackgroundContrastChanged;

@end

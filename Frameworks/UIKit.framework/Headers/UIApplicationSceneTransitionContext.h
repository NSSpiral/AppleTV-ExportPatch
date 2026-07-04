/* Runtime dump - UIApplicationSceneTransitionContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (nonatomic) double watchdogExtension;
@property (nonatomic) char allowCPUThrottling;
@property (nonatomic) char runWatchdogIndependently;
@property (retain, nonatomic) NSDictionary * payload;
@property (nonatomic) char forTesting;
@property (nonatomic) char safeMode;
@property (nonatomic) double userLaunchEventTime;
@property (nonatomic) double execTime;
@property (nonatomic) unsigned int lifecycleActionType;

- (double)watchdogExtension;
- (void)setWatchdogExtension:(double)arg0;
- (char)runWatchdogIndependently;
- (char)allowCPUThrottling;
- (void)setAllowCPUThrottling:(char)arg0;
- (void)setRunWatchdogIndependently:(char)arg0;
- (char)isUISubclass;
- (NSDictionary *)payload;
- (void)_setLifecycleActionType:(unsigned int)arg0;
- (unsigned int)_lifecycleActionType;
- (char)forTesting;
- (double)userLaunchEventTime;
- (double)execTime;
- (char)safeMode;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (void)setPayload:(NSDictionary *)arg0;
- (void)setForTesting:(char)arg0;
- (void)setSafeMode:(char)arg0;
- (void)setUserLaunchEventTime:(double)arg0;
- (void)setExecTime:(double)arg0;

@end

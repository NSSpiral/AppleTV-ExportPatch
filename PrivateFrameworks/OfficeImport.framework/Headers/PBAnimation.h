/* Runtime dump - PBAnimation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBAnimation : NSObject

+ (char)hasPpt10Animations:(id)arg0;
+ (void)parsePpt10Animation:(NSObject *)arg0 timings:(NSDictionary *)arg1 state:(NSObject *)arg2;
+ (void)generatePpt10AnimationFromState:(NSObject *)arg0 timings:(NSDictionary *)arg1;
+ (void)mapAnimationsFromSlide:(id)arg0 tgtSlide:(id)arg1 state:(NSObject *)arg2;
+ (void)parseTimeNodeContainer:(NSObject *)arg0 siblings:(NSArray *)arg1 state:(NSObject *)arg2;
+ (void)parseBuildList:(NSArray *)arg0 buildMap:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)parseAnimateBehaviorContainer:(NSObject *)arg0 animBehavior:(id)arg1 timeNode:(struct _xmlNode *)arg2;
+ (void)parseColorBehaviorContainer:(NSObject *)arg0 colorBehavior:(PDAnimateColorBehavior *)arg1 timeNode:(struct _xmlNode *)arg2;
+ (void)parseEffectBehaviorContainer:(NSObject *)arg0 effectBehavior:(PDAnimateEffectBehavior *)arg1 timeNode:(struct _xmlNode *)arg2;
+ (void)parseMotionBehaviorContainer:(NSObject *)arg0 motionBehavior:(PDAnimateMotionBehavior *)arg1 timeNode:(struct _xmlNode *)arg2;
+ (void)parseRotationBehaviorContainer:(NSObject *)arg0 rotationBehavior:(id)arg1 timeNode:(struct _xmlNode *)arg2;
+ (void)parseCmdBehaviorContainer:(NSObject *)arg0 cmdBehavior:(PDCmdBehavior *)arg1 timeNode:(struct _xmlNode *)arg2;
+ (void)parseTargetContainerHolder:(id)arg0 setTargetObj:(id)arg1 state:(NSObject *)arg2;
+ (NSObject *)parseBehaviorContainer:(NSObject *)arg0 timeNode:(struct _xmlNode *)arg1 state:(NSObject *)arg2;
+ (NSObject *)parseMediaContainer:(NSObject *)arg0 timeNode:(struct _xmlNode *)arg1 state:(NSObject *)arg2;
+ (void)parseTimeNodeVariants:(id)arg0 commonData:(NSData *)arg1;
+ (void)parseTimeConditionsHolder:(id)arg0 commonData:(NSData *)arg1;
+ (UIColor *)newColorFromBehaviorColor:(struct PptAnimColorBehavior_Color_Struct *)arg0;
+ (unsigned int)paragraphIndexFromCharacterIndex:(unsigned int)arg0 srcDrawable:(id)arg1;
+ (PBAnimation *)newParaBuild:(id)arg0;
+ (PBAnimation *)newChartBuild:(PDChartBuild *)arg0;

@end

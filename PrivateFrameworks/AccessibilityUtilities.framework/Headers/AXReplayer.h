/* Runtime dump - AXReplayer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXReplayer : NSObject

+ (CALayer *)replayer;

- (void)replayWithName:(NSString *)arg0 attempts:(int)arg1 interval:(double)arg2 async:(char)arg3 queue:(NSObject *)arg4 replayBlock:(id /* block */)arg5 completion:(/* block */ id)arg6;

@end

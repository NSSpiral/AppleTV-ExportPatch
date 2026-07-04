/* Runtime dump - CMMotionUtils
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionUtils : NSObject

+ (CMMotionUtils *)sendMessageWithReplySync:(struct CLConnectionMessage *)arg0;
+ (void)tccServiceMotionAccess;
+ (void)setUpCMLogging;
+ (CMMotionUtils *)logDirectory;

@end

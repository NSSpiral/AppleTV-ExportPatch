/* Runtime dump - SBFScheduler
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFScheduler : NSObject

+ (SBFScheduler *)globalAsyncScheduler;
+ (SBFScheduler *)mainScheduler;
+ (SBFScheduler *)immediateScheduler;

@end

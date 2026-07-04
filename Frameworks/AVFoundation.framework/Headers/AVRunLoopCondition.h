/* Runtime dump - AVRunLoopCondition
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRunLoopCondition : NSCondition
{
    NSMutableArray * _runLoopStateList;
}

- (void)waitInMode:(id)arg0;
- (char)waitUntilDate:(NSDate *)arg0 inMode:(id)arg1;
- (char)_waitInMode:(id)arg0 untilDate:(NSDate *)arg1;
- (void)_signalRunLoopWithState:(NSObject *)arg0;
- (void)dealloc;
- (AVRunLoopCondition *)init;
- (void)signal;
- (char)waitUntilDate:(NSDate *)arg0;
- (void)broadcast;
- (void)wait;

@end

/* Runtime dump - AXPostConnectionTask
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXPostConnectionTask : NSObject
{
    char _didTimeout;
    id _postConnectionBlock;
    AXTimer * _timeoutTimer;
}

@property (copy, nonatomic) id postConnectionBlock;
@property (retain, nonatomic) AXTimer * timeoutTimer;
@property (nonatomic) char didTimeout;

- (void)dealloc;
- (void)setPostConnectionBlock:(id /* block */)arg0;
- (void)setTimeoutTimer:(AXTimer *)arg0;
- (AXTimer *)timeoutTimer;
- (void)setDidTimeout:(char)arg0;
- (void)_performTask;
- (id /* block */)postConnectionBlock;
- (char)didTimeout;
- (AXPostConnectionTask *)initWithConnectBlock:(id /* block */)arg0 timeout:(/* block */ id)arg1 accessQueue:(double)arg2;
- (void)performTask;

@end

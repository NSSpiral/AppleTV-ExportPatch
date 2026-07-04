/* Runtime dump - AXThreadTimerTask
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXThreadTimerTask : NSObject
{
    char cancel;
    char finished;
    char active;
    id _block;
}

@property (copy, nonatomic) id block;
@property (nonatomic) char cancel;
@property (nonatomic) char finished;
@property (nonatomic) char active;

- (void)dealloc;
- (char)isActive;
- (char)isCancelled;
- (void)run;
- (void)setActive:(char)arg0;
- (char)isFinished;
- (void)runAfterDelay:(float)arg0;
- (void)setCancel:(char)arg0;
- (void)setFinished:(char)arg0;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;

@end

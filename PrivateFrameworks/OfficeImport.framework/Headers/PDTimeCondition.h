/* Runtime dump - PDTimeCondition
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTimeCondition : NSObject
{
    char mHasDelay;
    int mDelay;
    int mTriggerEvent;
    PDAnimationTarget * mTarget;
}

- (void)dealloc;
- (PDTimeCondition *)init;
- (void)setDelay:(int)arg0;
- (void)setTarget:(NSObject *)arg0;
- (int)delay;
- (NSObject *)target;
- (char)hasDelay;
- (int)triggerEvent;
- (void)setTriggerEvent:(int)arg0;

@end

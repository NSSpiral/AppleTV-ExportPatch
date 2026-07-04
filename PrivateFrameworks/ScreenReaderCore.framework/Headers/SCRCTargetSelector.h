/* Runtime dump - SCRCTargetSelector
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCTargetSelector : NSObject
{
    id _target;
    SEL _selector;
}

+ (NSObject *)targetSelectorWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

- (void)dealloc;
- (NSObject *)target;
- (SEL)selector;
- (SCRCTargetSelector *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end

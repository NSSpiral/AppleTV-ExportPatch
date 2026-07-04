/* Runtime dump - UIStoryboardUnwindSegueTemplate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate
{
    NSString * _action;
}

@property (copy, nonatomic) NSString * action;

- (void)dealloc;
- (UIStoryboardUnwindSegueTemplate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)action;
- (void)setAction:(NSString *)arg0;
- (void)_perform:(id)arg0;
- (NSString *)_unwindTargetForSelector:(SEL)arg0 withSender:(NSObject *)arg1;
- (NSObject *)_unwindExecutorForTarget:(NSObject *)arg0;

@end

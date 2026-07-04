/* Runtime dump - UIStoryboardShowSegueTemplate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardShowSegueTemplate : UIStoryboardSegueTemplate
{
    NSString * _action;
}

@property (copy, nonatomic) NSString * action;

- (void)dealloc;
- (UIStoryboardShowSegueTemplate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)action;
- (void)setAction:(NSString *)arg0;
- (NSObject *)segueWithDestinationViewController:(BRController *)arg0;
- (NSString *)defaultSegueClassName;

@end

/* Runtime dump - UIStoryboardEmbedSegueTemplate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate
{
    UIView * _containerView;
}

@property (retain, nonatomic) UIView * containerView;

- (void)dealloc;
- (UIStoryboardEmbedSegueTemplate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIView *)containerView;
- (void)setContainerView:(UIView *)arg0;
- (NSObject *)segueWithDestinationViewController:(BRController *)arg0;
- (NSString *)defaultSegueClassName;

@end

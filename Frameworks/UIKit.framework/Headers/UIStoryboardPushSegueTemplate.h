/* Runtime dump - UIStoryboardPushSegueTemplate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate
{
    int _destinationContainmentContext;
    int _splitViewControllerIndex;
}

@property (nonatomic) int destinationContainmentContext;
@property (nonatomic) int splitViewControllerIndex;

- (UIStoryboardPushSegueTemplate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject *)segueWithDestinationViewController:(BRController *)arg0;
- (NSString *)defaultSegueClassName;
- (int)destinationContainmentContext;
- (int)splitViewControllerIndex;
- (void)setDestinationContainmentContext:(int)arg0;
- (void)setSplitViewControllerIndex:(int)arg0;

@end

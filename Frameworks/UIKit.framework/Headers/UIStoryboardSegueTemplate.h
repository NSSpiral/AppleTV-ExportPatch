/* Runtime dump - UIStoryboardSegueTemplate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardSegueTemplate : NSObject <NSCoding>
{
    NSString * _identifier;
    NSString * _segueClassName;
    UIViewController * _viewController;
    NSString * _destinationViewControllerIdentifier;
    char _performOnViewLoad;
}

@property (readonly, nonatomic) NSString * identifier;
@property (nonatomic) UIViewController * viewController;
@property (nonatomic) char performOnViewLoad;

- (void)dealloc;
- (UIStoryboardSegueTemplate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)identifier;
- (void)perform:(id)arg0;
- (void)setViewController:(UIViewController *)arg0;
- (UIViewController *)viewController;
- (char)performOnViewLoad;
- (void)_perform:(id)arg0;
- (NSObject *)segueWithDestinationViewController:(BRController *)arg0;
- (NSString *)defaultSegueClassName;
- (Class)effectiveSegueClass;
- (void)setPerformOnViewLoad:(char)arg0;

@end

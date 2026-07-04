/* Runtime dump - UIStoryboardPopoverPresentationSegueTemplate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate
{
    unsigned int _permittedArrowDirections;
    NSArray * _passthroughViews;
    UIView * _anchorView;
    UIBarButtonItem * _anchorBarButtonItem;
}

@property (nonatomic) unsigned int permittedArrowDirections;
@property (copy, nonatomic) NSArray * passthroughViews;
@property (retain, nonatomic) UIView * anchorView;
@property (retain, nonatomic) UIBarButtonItem * anchorBarButtonItem;

- (void)dealloc;
- (UIStoryboardPopoverPresentationSegueTemplate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIView *)anchorView;
- (UIBarButtonItem *)anchorBarButtonItem;
- (unsigned int)permittedArrowDirections;
- (void)setPermittedArrowDirections:(unsigned int)arg0;
- (NSArray *)passthroughViews;
- (void)setPassthroughViews:(NSArray *)arg0;
- (void)setAnchorBarButtonItem:(UIBarButtonItem *)arg0;
- (void)setAnchorView:(UIView *)arg0;
- (NSObject *)segueWithDestinationViewController:(BRController *)arg0;
- (NSString *)defaultSegueClassName;

@end

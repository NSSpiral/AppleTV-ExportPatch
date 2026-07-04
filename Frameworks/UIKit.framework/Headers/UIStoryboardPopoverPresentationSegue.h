/* Runtime dump - UIStoryboardPopoverPresentationSegue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPopoverPresentationSegue : UIStoryboardSegue <UIPopoverPresentationControllerDelegate>
{
    NSArray * _passthroughViews;
    unsigned int _permittedArrowDirections;
    UIBarButtonItem * _anchorBarButtonItem;
    UIView * _anchorView;
    struct CGRect _anchorRect;
}

@property (copy, nonatomic) NSArray * passthroughViews;
@property (nonatomic) unsigned int permittedArrowDirections;
@property (retain, nonatomic) UIBarButtonItem * anchorBarButtonItem;
@property (retain, nonatomic) UIView * anchorView;
@property (nonatomic) struct CGRect anchorRect;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)_prepare;
- (struct CGRect)anchorRect;
- (UIView *)anchorView;
- (UIBarButtonItem *)anchorBarButtonItem;
- (unsigned int)permittedArrowDirections;
- (void)setPermittedArrowDirections:(unsigned int)arg0;
- (void)perform;
- (NSArray *)passthroughViews;
- (void)setPassthroughViews:(NSArray *)arg0;
- (void)setAnchorBarButtonItem:(UIBarButtonItem *)arg0;
- (void)setAnchorView:(UIView *)arg0;
- (void)setAnchorRect:(struct CGRect)arg0;

@end

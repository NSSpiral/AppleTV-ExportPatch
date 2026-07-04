/* Runtime dump - UIStoryboardPopoverSegue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPopoverSegue : UIStoryboardSegue
{
    UIPopoverController * _popoverController;
    NSArray * _passthroughViews;
    unsigned int _permittedArrowDirections;
    UIView * _anchorView;
    UIBarButtonItem * _anchorBarButtonItem;
    struct CGRect _anchorRect;
}

@property (readonly, retain, nonatomic) UIPopoverController * popoverController;
@property (copy, nonatomic) NSArray * _passthroughViews;
@property (nonatomic) unsigned int _permittedArrowDirections;
@property (retain, nonatomic) UIBarButtonItem * _anchorBarButtonItem;
@property (retain, nonatomic) UIView * _anchorView;
@property (nonatomic) struct CGRect _anchorRect;

- (void)dealloc;
- (NSArray *)_passthroughViews;
- (void)perform;
- (unsigned int)_permittedArrowDirections;
- (UIBarButtonItem *)_anchorBarButtonItem;
- (UIView *)_anchorView;
- (struct CGRect)_anchorRect;
- (UIPopoverController *)popoverController;
- (void)_setPassthroughViews:(id)arg0;
- (void)_setPermittedArrowDirections:(unsigned int)arg0;
- (void)_setAnchorBarButtonItem:(NSObject *)arg0;
- (void)_setAnchorView:(NSObject *)arg0;
- (void)_setAnchorRect:(struct CGRect)arg0;

@end

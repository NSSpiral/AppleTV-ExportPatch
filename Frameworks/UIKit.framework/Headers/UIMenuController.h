/* Runtime dump - UIMenuController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMenuController : NSObject <UICalloutBarDelegate>
{
    struct CGRect _targetRect;
    int _arrowDirection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char menuVisible;
@property (nonatomic) int arrowDirection;
@property (copy, nonatomic) NSArray * menuItems;
@property (readonly, nonatomic) struct CGRect menuFrame;

+ (UIMenuController *)sharedMenuController;

- (void)dealloc;
- (UIMenuController *)init;
- (void)_setTargetRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2;
- (char)isMenuVisible;
- (void)setMenuVisible:(char)arg0 animated:(char)arg1;
- (void)setTargetRect:(struct CGRect)arg0 inView:(struct CGSize)arg1;
- (void)update;
- (int)arrowDirection;
- (void)setArrowDirection:(int)arg0;
- (void)calloutBar:(UICalloutBar *)arg0 willStartAnimation:(NSObject *)arg1;
- (void)calloutBar:(UICalloutBar *)arg0 didFinishAnimation:(NSObject *)arg1;
- (char)_updateAnimated:(char)arg0 checkVisible:(char)arg1;
- (void)_windowWillRotate:(id)arg0;
- (char)_menuHidden;
- (void)setMenuVisible:(char)arg0;
- (void)setMenuItems:(NSArray *)arg0;
- (NSArray *)menuItems;
- (struct CGRect)menuFrame;

@end

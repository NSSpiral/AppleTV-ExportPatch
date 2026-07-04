/* Runtime dump - ABPasteboardControl
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPasteboardControl : UIControl

- (void)menuControllerWillShow:(id)arg0;
- (void)menuControllerWillHide:(id)arg0;
- (char)abShouldShowMenu;
- (void)abMenuControllerWillShow:(id)arg0;
- (void)abMenuControllerWillHide;
- (ABPasteboardControl *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)longPress:(id)arg0;

@end

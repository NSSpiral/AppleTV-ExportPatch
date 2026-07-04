/* Runtime dump - ABPopoverManager
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPopoverManager : NSObject <UIPopoverControllerDelegate, UIActionSheetDelegate>
{
    UIView * _autorotateView;
    UIResponder * _autorotateResponder;
    UIBarButtonItem * _autorotateBarButtonItem;
    unsigned int _autorotateDirections;
    UIPopoverController * _autorotatePopoverController;
    UIActionSheet * _autorotateActionSheet;
    <ABPopoverRepresentDelegate> * _representDelegate;
    id _realDelegate;
    char _rotating;
}

@property (retain, nonatomic) UIView * autorotateView;
@property (retain, nonatomic) UIBarButtonItem * autorotateBarButtonItem;
@property (nonatomic) unsigned int autorotateDirrections;
@property (retain, nonatomic) UIPopoverController * autorotatePopoverController;
@property (retain, nonatomic) UIActionSheet * autorotateActionSheet;
@property (retain, nonatomic) <ABPopoverRepresentDelegate> * representDelegate;
@property (retain, nonatomic) id realDelegate;
@property (readonly, nonatomic) UIWindow * observedWindow;
@property (retain, nonatomic) UIResponder * autorotateResponder;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)popoverController:(BRController *)arg0 dismissPopoverAnimated:(char)arg1;
+ (void)popoverController:(BRController *)arg0 presentPopoverFromView:(NSObject *)arg1 permittedArrowDirections:(unsigned int)arg2 animated:(char)arg3 representDelegate:(<ABPopoverRepresentDelegate> *)arg4;
+ (void)stopAutorotatePresenter:(id)arg0;
+ (void)actionSheet:(UIActionSheet *)arg0 showFromView:(NSObject *)arg1 animated:(char)arg2 direction:(unsigned int)arg3 autorotate:(char)arg4;
+ (void)actionSheet:(UIActionSheet *)arg0 showFromBarButtonItem:(NSObject *)arg1 animated:(char)arg2 autorotate:(char)arg3;
+ (void)actionSheet:(UIActionSheet *)arg0 showFromView:(NSObject *)arg1 animated:(char)arg2 autorotate:(char)arg3;
+ (void)actionSheet:(UIActionSheet *)arg0 showFromRect:(struct CGRect)arg1 inView:(struct CGSize)arg2 animated:(char)arg3 direction:(TDThemeDirection *)arg4 autorotate:(char)arg5;
+ (char)resignFirstResponderIfNeeded;
+ (void)actionSheet:(UIActionSheet *)arg0 showFromRect:(struct CGRect)arg1 inView:(struct CGSize)arg2 direction:(TDThemeDirection *)arg3 animated:(char)arg4;
+ (ABPopoverManager *)managerForPresenter:(id)arg0;
+ (void)actionSheet:(UIActionSheet *)arg0 showFromBarButtonItem:(NSObject *)arg1 animated:(char)arg2;
+ (void)removeManagerForPresenter:(id)arg0;
+ (void)popoverController:(BRController *)arg0 presentPopoverFromRect:(struct CGRect)arg1 inView:(struct CGSize)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(char)arg4;
+ (void)actionSheet:(UIActionSheet *)arg0 showFromRect:(struct CGRect)arg1 inView:(struct CGSize)arg2 animated:(char)arg3;
+ (void)actionSheet:(UIActionSheet *)arg0 dismissWithClickedButtonIndex:(int)arg1 animated:(char)arg2;
+ (void)dismissPopoverForActionSheet:(NSObject *)arg0;

- (UIPopoverController *)autorotatePopoverController;
- (UIView *)autorotateView;
- (unsigned int)autorotateDirrections;
- (void)setAutorotateResponder:(UIResponder *)arg0;
- (UIResponder *)autorotateResponder;
- (<ABPopoverRepresentDelegate> *)representDelegate;
- (UIWindow *)observedWindow;
- (UIBarButtonItem *)autorotateBarButtonItem;
- (void)stopAutorotate;
- (void)setRealDelegate:(NSObject *)arg0;
- (void)setAutorotateView:(UIView *)arg0;
- (void)setAutorotateDirrections:(unsigned int)arg0;
- (void)setAutorotatePopoverController:(UIPopoverController *)arg0;
- (void)setRepresentDelegate:(<ABPopoverRepresentDelegate> *)arg0;
- (void)startObservingRotationOfWindow:(NSObject *)arg0;
- (NSObject *)delegateOwner;
- (NSObject *)realDelegate;
- (void)stopObservingRotation;
- (void)revertDelegate;
- (void)setAutorotateBarButtonItem:(UIBarButtonItem *)arg0;
- (void)setAutorotateActionSheet:(UIActionSheet *)arg0;
- (void)startAutorotateActionSheet:(NSObject *)arg0 fromView:(UIView *)arg1;
- (void)startAutorotateActionSheet:(NSObject *)arg0 fromBarButtonItem:(NSObject *)arg1;
- (void)startAutorotatePopoverController:(BRController *)arg0 showFromView:(NSObject *)arg1 permittedArrowDirections:(unsigned int)arg2 representDelegate:(<ABPopoverRepresentDelegate> *)arg3;
- (UIActionSheet *)autorotateActionSheet;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (ABPopoverManager *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;
- (char)autorotates;
- (void)keyboardDidShow:(id)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)keyboardDidHide:(id)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void)windowDidRotate:(id)arg0;
- (void)windowWillRotate:(id)arg0;

@end

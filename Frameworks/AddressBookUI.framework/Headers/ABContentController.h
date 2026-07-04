/* Runtime dump - ABContentController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContentController : NSObject <ABContentControllerProtocol>
{
    void * _addressBook;
    id _contentControllerDelegate;
    UIView * _contentLayer;
}

@property (nonatomic) void * addressBook;

- (ABContentController *)initWithContentControllerDelegate:(NSObject *)arg0 addressBook:(void *)arg1;
- (void)back:(char)arg0 save:(char)arg1;
- (NSObject *)contentControllerDelegate;
- (void)setContentControllerDelegate:(NSObject *)arg0;
- (void)cleanUpContentLayer;
- (char)contentViewIsVisible;
- (void)preloadController;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (ABContentController *)init;
- (void)reload;
- (UIView *)contentView;
- (void)displayScrollerIndicators;
- (void *)addressBook;

@end

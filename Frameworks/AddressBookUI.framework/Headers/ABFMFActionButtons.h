/* Runtime dump - ABFMFActionButtons
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate>
{
    ABUnknownPersonViewController * _upvc;
    UIButton * _messageButton;
    UIButton * _facetimeButton;
    UIButton * _callButton;
}

@property (nonatomic) void * displayedPerson;
@property (readonly, nonatomic) char hasTelephonyCapability;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)hasTelephonyCapability;
- (void)setDisplayedPerson:(void *)arg0;
- (void *)displayedPerson;
- (void)showFMFMessageButton:(char)arg0 withAction:(NSObject *)arg1;
- (void)showFMFFacetimeButton:(char)arg0 withAction:(NSObject *)arg1;
- (void)showFMFCallButton:(char)arg0 withAction:(NSObject *)arg1;
- (ABFMFActionButtons *)initWithMessageButton:(UIButton *)arg0 facetimeButton:(UIButton *)arg1 callButton:(UIButton *)arg2;
- (void)dealloc;
- (ABFMFActionButtons *)init;

@end

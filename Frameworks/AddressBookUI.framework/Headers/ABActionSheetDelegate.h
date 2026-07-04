/* Runtime dump - ABActionSheetDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABActionSheetDelegate : NSObject <UIActionSheetDelegate>
{
    id _target;
    SEL _action;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABActionSheetDelegate *)initWithActionSheetTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;

@end

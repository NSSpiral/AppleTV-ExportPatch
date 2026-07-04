/* Runtime dump - ABPeoplePickerNavigationControllerPromptHandler
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject
{
    ABPeoplePickerNavigationController * _ppnc;
    NSMutableArray * _prompts;
}

- (NSObject *)promptForViewControllerType:(int)arg0 orientation:(int)arg1;
- (ABPeoplePickerNavigationControllerPromptHandler *)initWithNavigationController:(UINavigationController *)arg0;
- (void)setPrompt:(NSString *)arg0 forViewControllerType:(int)arg1;
- (char)_shouldShowPromptForOrientation:(int)arg0;
- (unsigned int)indexForViewControllerType:(int)arg0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;

@end

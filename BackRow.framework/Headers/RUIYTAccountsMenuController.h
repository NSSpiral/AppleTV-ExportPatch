/* Runtime dump - RUIYTAccountsMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRController, BRListControl, BRMenuItem;
@interface RUIYTAccountsMenuController : BRViewController
{
    char _lingerOn;
    NSArray * _accounts;
    BRController * _swappingController;
    BRController * _parentController;
}

@property (retain) BRController * swappingController;
@property (retain) BRController * parentController;

- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (char)isNetworkDependent;
- (void)_pushAuthenticationControllerWithAccount:(NSObject *)arg0;
- (void)_reloadItems;
- (void)_logInToNewAccount;
- (void)_removeAccount;
- (void)_logInToSelectedAccount:(unsigned int)arg0;
- (BRController *)swappingController;
- (void)setSwappingController:(BRController *)arg0;
- (RUIYTAccountsMenuController *)init;
- (NSString *)identifier;
- (void).cxx_destruct;
- (void)setParentController:(BRController *)arg0;
- (BRController *)parentController;

@end

/* Runtime dump - RUIYTRemoveAccountMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface RUIYTRemoveAccountMenuController : BRViewController
{
    NSArray * _accounts;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (RUIYTRemoveAccountMenuController *)init;
- (void).cxx_destruct;

@end

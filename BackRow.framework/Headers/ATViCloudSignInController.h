/* Runtime dump - ATViCloudSignInController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface ATViCloudSignInController : BRViewController
{
    char _suppressSignInDialog;
    char _canDisplay;
    char _haveAppleID;
    int _response;
}

@property (nonatomic) int response;
@property (nonatomic) char suppressSignInDialog;
@property (nonatomic) char canDisplay;
@property (nonatomic) char haveAppleID;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (char)suppressSignInDialog;
- (void)setSuppressSignInDialog:(char)arg0;
- (char)canDisplay;
- (void)setCanDisplay:(char)arg0;
- (char)haveAppleID;
- (void)setHaveAppleID:(char)arg0;
- (ATViCloudSignInController *)init;
- (int)response;
- (void)_dismiss;
- (void)setResponse:(int)arg0;

@end

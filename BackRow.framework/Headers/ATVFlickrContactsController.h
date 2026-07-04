/* Runtime dump - ATVFlickrContactsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaMenuController.h>

@class ATVInternetPhotosAccount;
@interface ATVFlickrContactsController : BRMediaMenuController
{
    ATVInternetPhotosAccount * _account;
    int _mode;
    id _screenSaverSelectionBlock;
    id _photoSelectionBlock;
}

@property (copy, nonatomic) id screenSaverSelectionBlock;
@property (copy, nonatomic) id photoSelectionBlock;

- (char)isNetworkDependent;
- (void)setPhotoSelectionBlock:(id /* block */)arg0;
- (void)_providerUpdated:(id)arg0;
- (ATVFlickrContactsController *)initWithMode:(int)arg0 forAccount:(NSObject *)arg1;
- (id /* block */)screenSaverSelectionBlock;
- (void)setScreenSaverSelectionBlock:(id /* block */)arg0;
- (id /* block */)photoSelectionBlock;
- (void)_handleReturnToFlickrSelection:(id)arg0;
- (void)_handleAccountSelection:(id)arg0;
- (void)dealloc;

@end

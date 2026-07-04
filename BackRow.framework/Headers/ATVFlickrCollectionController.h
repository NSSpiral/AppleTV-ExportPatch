/* Runtime dump - ATVFlickrCollectionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaMenuController.h>

@class ATVInternetPhotosAccount, BREvent;
@interface ATVFlickrCollectionController : BRMediaMenuController
{
    int _mode;
    ATVInternetPhotosAccount * _account;
    id _screenSaverSelectionBlock;
    id _photoSelectionBlock;
}

@property (copy, nonatomic) id screenSaverSelectionBlock;
@property (copy, nonatomic) id photoSelectionBlock;

- (char)brEventAction:(BREvent *)arg0;
- (char)isNetworkDependent;
- (long)defaultIndex;
- (void)setPhotoSelectionBlock:(id /* block */)arg0;
- (void)_handleCollectionSelection:(id)arg0;
- (void)_handleRemoveSelection:(id)arg0;
- (void)_handleAddSelection:(id)arg0;
- (void)_handleContactsSelection:(id)arg0;
- (void)_providerUpdated:(id)arg0;
- (ATVFlickrCollectionController *)initWithMode:(int)arg0 forAccount:(NSObject *)arg1;
- (id /* block */)screenSaverSelectionBlock;
- (void)setScreenSaverSelectionBlock:(id /* block */)arg0;
- (id /* block */)photoSelectionBlock;
- (void)dealloc;

@end

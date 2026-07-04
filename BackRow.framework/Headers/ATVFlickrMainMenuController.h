/* Runtime dump - ATVFlickrMainMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaMenuController.h>

@protocol BRTextFieldDelegate;

@class ATVFlickrProvider, ATVFlickrSearchAgent, BREvent;
@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate>
{
    int _mode;
    ATVFlickrSearchAgent * _searchAgent;
    char _searching;
    NSString * _activeSearchTerm;
    ATVFlickrProvider * _persistentAccountProvider;
    id _screenSaverSelectionBlock;
    id _photoSelectionBlock;
}

@property (copy, nonatomic) id screenSaverSelectionBlock;
@property (copy, nonatomic) id photoSelectionBlock;

+ (void)initialize;

- (char)brEventAction:(BREvent *)arg0;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (char)isNetworkDependent;
- (long)defaultIndex;
- (void)setPhotoSelectionBlock:(id /* block */)arg0;
- (ATVFlickrMainMenuController *)initWithMode:(int)arg0;
- (void)_handleAddSelection:(id)arg0;
- (id /* block */)screenSaverSelectionBlock;
- (void)setScreenSaverSelectionBlock:(id /* block */)arg0;
- (id /* block */)photoSelectionBlock;
- (void)_handleAccountSelection:(id)arg0;
- (void)_handleSearchSelection:(id)arg0;
- (void)_handleSavedSearchCollectionSelection:(id)arg0;
- (void)_searchTermRemoved:(id)arg0;
- (void)_searchComplete:(id)arg0;
- (void)_accountLoaded:(id)arg0;
- (float)listVerticalOffset;
- (void)dealloc;
- (ATVFlickrMainMenuController *)init;
- (NSString *)accessibilityLabel;
- (void)textDidChange:(id /* <BRTextField> */)arg0;

@end

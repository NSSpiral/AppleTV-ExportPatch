/* Runtime dump - ATVRecentSearchesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaMenuController.h>

@protocol BRMenuListItemProvider;

@class ATVSearchAgent, BRControl;
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider>
{
    NSArray * _recentSearches;
    ATVSearchAgent * _searchAgent;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVRecentSearchesController *)initWithSearchAgent:(ATVSearchAgent *)arg0;
- (float)heightForRow:(long)arg0;
- (char)rowSelectable:(long)arg0;
- (BRControl *)itemForRow:(long)arg0;
- (void)itemSelected:(long)arg0;
- (void)_populateRecentSearchesList;
- (NSObject *)previewControlForItem:(long)arg0;
- (void)dealloc;
- (NSString *)titleForRow:(long)arg0;
- (long)itemCount;

@end

/* Runtime dump - ATVFeedSearchViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSearchViewController.h>

@class ATVFeedDocument, ATVFeedElement, ATVFeedSearchResultsLoader, ATVMerchant, BRControl, BRListControl, BRMenuItem;
@interface ATVFeedSearchViewController : ATVSearchViewController
{
    ATVMerchant * _merchant;
    ATVFeedSearchResultsLoader * _searchResultsLoader;
    NSString * _baseURLString;
    NSDictionary * _results;
    NSMutableDictionary * _headerCache;
    char _searchesEmptyString;
    ATVFeedDocument * _resultsFeedDocument;
}

@property (retain, nonatomic) ATVFeedDocument * resultsFeedDocument;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (long)_numberOfSections;
- (void)_cancelPreviousSearch;
- (char)_search:(SASmsRecipientSearch *)arg0;
- (void)_updateSearchResults:(NSArray *)arg0 searchString:(NSString *)arg1;
- (ATVFeedSearchViewController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (char)_searchesEmptyString;
- (NSString *)_elementAtIndexPath:(NSIndexPath *)arg0;
- (void)_searchResultsReady:(id)arg0;
- (void)setResultsFeedDocument:(ATVFeedDocument *)arg0;
- (NSObject *)_indexPathForFirstItem;
- (long)_numberOfRowsInSection:(long)arg0;
- (ATVFeedDocument *)resultsFeedDocument;
- (NSString *)_itemAtIndexPath:(NSIndexPath *)arg0;
- (void)dealloc;
- (ATVFeedSearchViewController *)initWithDictionary:(NSDictionary *)arg0;

@end

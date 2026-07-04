/* Runtime dump - RUIYTSearchController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSearchViewController.h>

@protocol RUIYTDocumentLoaderDelegate;
@protocol RUIYTListDataSourceAspectDelegate;

@class ATVSearchView, RUIYTDocument, RUIYTDocumentLoader, RUIYTListDataSourceAspect, RUIYTSearchResultsLoader;
@interface RUIYTSearchController : ATVSearchViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate>
{
    RUIYTDocumentLoader * _documentLoader;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
    RUIYTSearchResultsLoader * _searchResultsLoader;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)_cancelPreviousSearch;
- (char)_search:(SASmsRecipientSearch *)arg0;
- (void)_updateSearchResults:(NSArray *)arg0 searchString:(NSString *)arg1;
- (char)isNetworkDependent;
- (void)searchView:(ATVSearchView *)arg0 focusDidChangeToControl:(int)arg1;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (char)listDataSourceAspect:(RUIYTListDataSourceAspect *)arg0 loadMoreItemsForSection:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_searchResultsDidLoad:(id)arg0;
- (void)dealloc;
- (RUIYTSearchController *)init;
- (void).cxx_destruct;

@end

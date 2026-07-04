/* Runtime dump - ATVSearchViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVSearchViewDelegate;
@protocol BRTextFieldDelegate;

@class ATVSearchView;
@interface ATVSearchViewController : BRViewController <ATVSearchViewDelegate, BRTextFieldDelegate>
{
    NSTimer * _delayedLoadTimer;
    NSCache * _resultsCache;
    NSString * _latestSearchString;
    char _textDidEndEditing;
    NSString * _latestSearchStringWithResults;
}

@property (readonly) ATVSearchView * searchView;
@property (readonly) NSString * latestSearchStringWithResults;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)textDidEndEditing:(char)arg0;
- (ATVSearchView *)searchView;
- (void)_setResults:(NSArray *)arg0 forSearch:(SASmsRecipientSearch *)arg1;
- (void)searchView:(ATVSearchView *)arg0 focusDidChangeToControl:(int)arg1;
- (void)_setDelayedLoadTimer:(NSObject *)arg0;
- (void)_startSearchWithSearchString:(NSString *)arg0;
- (char)_searchesEmptyString;
- (void)_restoreLatestSearchStringWithResults;
- (NSArray *)_latestSearchStringWithResults;
- (NSString *)_latestSearchString;
- (void)_updateLatestSearchStringWithResults:(NSArray *)arg0;
- (NSString *)latestSearchStringWithResults;
- (void)_handleDelayedLoad:(id)arg0;
- (void)_resetLatestSearchString;
- (void)searchWithString:(NSString *)arg0;
- (void)dealloc;
- (ATVSearchViewController *)init;
- (void)textDidChange:(id /* <BRTextField> */)arg0;

@end

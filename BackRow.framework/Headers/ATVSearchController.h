/* Runtime dump - ATVSearchController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol BRTextFieldDelegate;

@class ATVSearchAgent, BRControl, BREvent, BRImageControl, BRMediatorProvider, BRTextEntryControl;
@interface ATVSearchController : BRMenuController <BRTextFieldDelegate>
{
    BRTextEntryControl * _editor;
    BRImageControl * _verticalDividerImage;
    ATVSearchAgent * _agent;
    BRMediatorProvider * _recentSearchesProvider;
    NSString * _activeSearchRequest;
    NSString * _textEntryHistoryClient;
    NSString * _textEntryHistoryBehavior;
    BRControl * _alertControl;
    NSArray * _resultsProviderPresentationOrder;
    NSTimer * _textTimer;
}

@property (copy, nonatomic) NSArray * resultsProviderPresentationOrder;
@property (retain, nonatomic) BRControl * alertControl;
@property (retain, nonatomic) NSTimer * textTimer;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)setTextEntryHistoryClient:(NSString *)arg0 textEntryBehavior:(id)arg1;
- (void)displayTextEntryHistoryForClients:(id)arg0 textEntryBehaviors:(NSArray *)arg1;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (NSArray *)providersForContextMenu;
- (void)_handleContextMenuSelection:(id /* block */)arg0;
- (char)isNetworkDependent;
- (long)defaultIndex;
- (char)_shouldSetFocusToListForEvent:(NSObject *)arg0;
- (void)_networkStateChanged;
- (ATVSearchController *)initWithSearchAgent:(ATVSearchAgent *)arg0;
- (void)setSearchFieldLabel:(NSString *)arg0;
- (void)_searchComplete:(id)arg0;
- (void)setResultsProviderPresentationOrder:(NSArray *)arg0;
- (id)searchAgent;
- (void)_recentSearchTermSelected:(id)arg0;
- (NSTimer *)textTimer;
- (BRControl *)alertControl;
- (void)_performSearchWithString:(NSString *)arg0;
- (void)_performDelayedSearch:(id)arg0;
- (void)setTextTimer:(NSTimer *)arg0;
- (char)isValidAfterDataUpdate;
- (void)setKeyboardTextEntryStyle:(int)arg0;
- (BRControl *)controlToDim;
- (void)setAlertControl:(BRControl *)arg0;
- (NSArray *)resultsProviderPresentationOrder;
- (void)searchWithString:(NSString *)arg0;
- (void)dealloc;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void)setHeaderTitle:(NSString *)arg0;

@end

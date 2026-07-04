/* Runtime dump - RUIYTHistoryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol RUIYTDocumentLoaderDelegate;

@class RUIYTDocument, RUIYTDocumentLoader, RUIYTHistoryManager, RUIYTListDataSourceAspect;
@interface RUIYTHistoryController : BRViewController <RUIYTDocumentLoaderDelegate>
{
    RUIYTHistoryManager * _historyManager;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
    NSMutableArray * _assets;
    RUIYTDocumentLoader * _documentLoader;
}

@property (retain, nonatomic) NSMutableArray * assets;
@property (retain, nonatomic) RUIYTDocumentLoader * documentLoader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (char)isNetworkDependent;
- (void)_setupView;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (void)_assetWasPlayedNotification:(NSNotification *)arg0;
- (RUIYTDocumentLoader *)documentLoader;
- (void)setDocumentLoader:(RUIYTDocumentLoader *)arg0;
- (RUIYTHistoryController *)initWithHistoryManager:(RUIYTHistoryManager *)arg0;
- (void)_reloadList:(NSArray *)arg0;
- (void)_clearHistory;
- (void)dealloc;
- (NSString *)identifier;
- (NSArray *)_sections;
- (void).cxx_destruct;
- (NSMutableArray *)assets;
- (void)setAssets:(NSMutableArray *)arg0;

@end

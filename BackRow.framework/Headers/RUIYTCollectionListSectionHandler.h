/* Runtime dump - RUIYTCollectionListSectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTDocumentLoaderDelegate;
@protocol RUIYTListSectionHandling;

@class BRControl, BRControllerStack, RUIYTDocument, RUIYTDocumentLoader, RUIYTListDataSourceAspect;
@interface RUIYTCollectionListSectionHandler : NSObject <RUIYTListSectionHandling, RUIYTDocumentLoaderDelegate>
{
    RUIYTDocumentLoader * _documentLoader;
    NSMutableArray * _resultsBeingLoaded;
    NSCache * _resultsCache;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
    BRControllerStack * _controllerStack;
}

@property (readonly, weak, nonatomic) RUIYTListDataSourceAspect * listDataSourceAspect;
@property (readonly, weak) BRControllerStack * controllerStack;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_invalidateFavoritesNotification:(NSNotification *)arg0;
- (RUIYTListDataSourceAspect *)listDataSourceAspect;
- (NSObject *)_cachedResultsForItem:(NSObject *)arg0 resultsFound:(char *)arg1;
- (char)_loadResultsForItem:(NSObject *)arg0;
- (void)_clearCachedResultsForItem:(NSObject *)arg0;
- (void)_showError;
- (void)_showErrorWithText:(NSString *)arg0;
- (BRControllerStack *)controllerStack;
- (void)_setCachedResults:(NSArray *)arg0 forItem:(NSObject *)arg1 timeInterval:(double)arg2;
- (char)itemSelectedAtIndex:(NSIndexPath *)arg0 action:(int)arg1 defer:(char *)arg2;
- (NSString *)itemIDForIndex:(NSIndexPath *)arg0;
- (BRControl *)previewForIndex:(NSIndexPath *)arg0 defer:(char *)arg1;
- (char)isItemPlayableAtIndex:(NSIndexPath *)arg0;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (RUIYTCollectionListSectionHandler *)initWithListDataSourceAspect:(RUIYTListDataSourceAspect *)arg0 controllerStack:(BRControllerStack *)arg1;
- (NSObject *)_cacheItemForItem:(NSObject *)arg0;
- (BRControl *)itemForIndex:(NSIndexPath *)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end

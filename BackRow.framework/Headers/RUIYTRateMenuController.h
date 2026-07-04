/* Runtime dump - RUIYTRateMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRSecureResource;
@protocol RUIYTDocumentLoaderDelegate;

@class BRAuthenticator, BRListControl, BRMenuItem, RUIYTDocument, RUIYTDocumentLoader, RUIYTMediaAsset;
@interface RUIYTRateMenuController : BRViewController <RUIYTDocumentLoaderDelegate, BRSecureResource>
{
    RUIYTMediaAsset * _origAsset;
    RUIYTDocumentLoader * _documentLoader;
    char _itemPreviouslySelected;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRAuthenticator *)secureResourceAuthenticator;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (char)isNetworkDependent;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (RUIYTRateMenuController *)initWithOriginalAsset:(NSSet *)arg0 blurImage:(UIImage *)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end

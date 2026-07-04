/* Runtime dump - RUIYTOptionsMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRSecureResource;
@protocol RUIYTDocumentLoaderDelegate;

@class BRAuthenticator, BRListControl, BRMenuItem, RUIYTDocument, RUIYTDocumentLoader, RUIYTMediaAsset;
@interface RUIYTOptionsMenuController : BRViewController <RUIYTDocumentLoaderDelegate, BRSecureResource>
{
    RUIYTDocumentLoader * _documentLoader;
    RUIYTMediaAsset * _origAsset;
    char _rated;
    char _flagged;
    char _faving;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRAuthenticator *)secureResourceAuthenticator;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasExhumed;
- (char)isNetworkDependent;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (void)_handleRated;
- (void)_playNoopSound;
- (void)_removeFromFavorites;
- (void)_saveToFavorites;
- (void)_flag;
- (void)_favingDoneBySaving:(char)arg0 error:(NSError *)arg1;
- (RUIYTOptionsMenuController *)initWithOriginalAsset:(NSSet *)arg0 blurImage:(UIImage *)arg1;
- (void)_rate;
- (void)dealloc;
- (void).cxx_destruct;

@end

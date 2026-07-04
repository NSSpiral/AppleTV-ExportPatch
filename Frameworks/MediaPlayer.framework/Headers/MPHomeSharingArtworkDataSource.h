/* Runtime dump - MPHomeSharingArtworkDataSource
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
    HSHomeSharingLibrary * _library;
}

@property (retain, nonatomic) HSHomeSharingLibrary * library;

- (char)areRepresentationsAvailableForCatalog:(id)arg0;
- (void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)supportedSizesForCatalog:(id)arg0;
- (id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize)arg1;
- (NSURLRequest *)requestForCatalog:(id)arg0 size:(struct CGSize)arg1;
- (char)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (void).cxx_destruct;
- (HSHomeSharingLibrary *)library;
- (void)setLibrary:(HSHomeSharingLibrary *)arg0;

@end

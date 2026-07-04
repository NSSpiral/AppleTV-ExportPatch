/* Runtime dump - ATVStoreFavoriteRefreshTask
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVStoreFavorite, ATVURLDocument;
@interface ATVStoreFavoriteRefreshTask : ATVBackgroundTask
{
    ATVStoreFavorite * _favorite;
    ATVURLDocument * _curDocumentBeingFetched;
}

- (ATVStoreFavoriteRefreshTask *)initWithFavorite:(ATVStoreFavorite *)arg0;
- (void)_catalogControlRequestProcessed:(id)arg0;
- (void)_finalizePageRefresh:(id)arg0;
- (void)dealloc;
- (void)stop;
- (char)perform;

@end

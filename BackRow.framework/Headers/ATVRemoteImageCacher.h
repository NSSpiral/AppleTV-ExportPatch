/* Runtime dump - ATVRemoteImageCacher
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRemoteImageCacher : NSObject
{
    int _requiredURLLoadIndex;
    NSArray * _requiredURLImageProxies;
    NSArray * _requiredURLImageIDs;
    char _cancelled;
    char _anyImageFailures;
    id _completionHandler;
}

- (void)cacheImageURLs:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)_loadNextRequiredURL;
- (void)_requiredImageLoaded:(id)arg0;
- (void)_requiredImageLoadFailed:(id)arg0;
- (void)cancel;
- (void)dealloc;
- (void)_resetState;

@end

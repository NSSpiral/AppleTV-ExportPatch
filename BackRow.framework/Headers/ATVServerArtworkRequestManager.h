/* Runtime dump - ATVServerArtworkRequestManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVServerArtworkRequestManager : NSObject
{
    NSMutableDictionary * _inflightArtworkRequests;
}

- (void)_imageUpdated:(id)arg0;
- (void)_imageUnavailable:(id)arg0;
- (void)startArtworkRequestForImageProxy:(NSObject *)arg0 withServerRequest:(struct ATVServerRequest *)arg1 scaledToSize:(struct CGSize)arg2;
- (char)_startScalingIfNessecary:(id)arg0;
- (void)_completeArtworkRequest:(NSURLRequest *)arg0;
- (void)startArtworkRequestForImageProxy:(NSObject *)arg0 withServerRequest:(struct ATVServerRequest *)arg1;
- (void)cancelAllRequests;
- (void)dealloc;
- (ATVServerArtworkRequestManager *)init;
- (void).cxx_destruct;

@end

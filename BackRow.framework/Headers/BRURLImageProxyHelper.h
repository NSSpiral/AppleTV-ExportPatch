/* Runtime dump - BRURLImageProxyHelper
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRURLImageProxy;
@interface BRURLImageProxyHelper : NSObject
{
    id _completionBlock;
    NSString * _imageID;
    BRURLImageProxy * _imageProxy;
}

- (void)_imageUpdated:(id)arg0;
- (void)_imageNotAvailable:(id)arg0;
- (BRURLImageProxyHelper *)initWithURLString:(NSString *)arg0 withCompletionBlock:(id /* block */)arg1;
- (BRURLImageProxyHelper *)initWithURL:(NSURL *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_imageLoadFinished:(id)arg0 wasCancelled:(char)arg1;
- (void)cancel;
- (void)dealloc;
- (void)load;
- (void).cxx_destruct;

@end

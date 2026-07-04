/* Runtime dump - MKAppImageManager
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAppImageManager : NSObject <NSURLConnectionDataDelegate>
{
    NSCache * _iconCache;
    NSMapTable * _containers;
    NSMutableDictionary * _urlConnections;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MKAppImageManager *)sharedImageManager;

- (void)clearImageCache;
- (void)loadAppImageAtURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)cancelLoadAppImageAtURL:(NSURL *)arg0;
- (MKAppImageManager *)init;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(NSData *)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void).cxx_destruct;

@end

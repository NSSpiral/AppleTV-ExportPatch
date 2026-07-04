/* Runtime dump - ATVFlickrAssetLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVImageLoader;
@interface ATVFlickrAssetLoader : NSObject <ATVImageLoader>
{
    NSOperationQueue * _queue;
}

@property (retain, nonatomic) NSOperationQueue * queue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURL *)loadFlickrURL:(NSURL *)arg0;

- (ATVFlickrAssetLoader *)init;
- (void).cxx_destruct;
- (NSString *)imageKeyForObject:(NSObject *)arg0;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;
- (NSOperationQueue *)queue;
- (void)setQueue:(NSOperationQueue *)arg0;

@end

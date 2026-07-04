/* Runtime dump - ATVFeedImageLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVImageLoader;
@interface ATVFeedImageLoader : NSObject <ATVImageLoader>
{
    NSString * _merchantIdentifier;
}

@property (retain, nonatomic) NSString * merchantIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)merchantIdentifier;
- (ATVFeedImageLoader *)initWithMerchantIdentifier:(NSString *)arg0;
- (struct CGSize)_imageAssetSize:(NSObject *)arg0;
- (void)setMerchantIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)imageKeyForObject:(NSObject *)arg0;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;

@end

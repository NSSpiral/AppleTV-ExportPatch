/* Runtime dump - ATVFeedImageAssetProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;

@class ATVMerchant;
@interface ATVFeedImageAssetProxy : NSObject <BRImageProxy>
{
    char _imageIsScaledToFill;
    id _object;
    NSArray * _imageAssets;
    ATVMerchant * _merchant;
}

@property (retain, nonatomic) id object;
@property (copy, nonatomic) NSArray * imageAssets;
@property (retain, nonatomic) ATVMerchant * merchant;
@property (nonatomic) char imageIsScaledToFill;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVMerchant *)merchant;
- (void)setMerchant:(ATVMerchant *)arg0;
- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (ATVFeedImageAssetProxy *)initWithObject:(NSObject *)arg0 imageAssets:(NSArray *)arg1 merchant:(ATVMerchant *)arg2;
- (void)setImageIsScaledToFill:(char)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (void)setImageAssets:(NSArray *)arg0;
- (NSObject *)_imageIDForImageSize:(int)arg0 imageAsset:(id *)arg1;
- (NSArray *)imageAssets;
- (char)imageIsScaledToFill;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;
- (void).cxx_destruct;

@end

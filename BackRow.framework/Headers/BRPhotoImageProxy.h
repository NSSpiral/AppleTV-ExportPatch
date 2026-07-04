/* Runtime dump - BRPhotoImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;

@class BRPhotoMediaAsset, BRPhotoMediaCollection;
@interface BRPhotoImageProxy : NSObject <BRImageProxy>
{
    BRPhotoMediaAsset * _asset;
    BRPhotoMediaCollection * _collection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)imageProxyWithAsset:(BRPhotoMediaAsset *)arg0;
+ (BRPhotoImageProxy *)imageProxyWithCollection:(BRPhotoMediaCollection *)arg0;

- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (BRPhotoImageProxy *)initWithCollection:(BRPhotoMediaCollection *)arg0;
- (void)dealloc;
- (NSObject *)object;
- (BRPhotoImageProxy *)initWithAsset:(BRPhotoMediaAsset *)arg0;
- (BRPhotoMediaAsset *)asset;

@end

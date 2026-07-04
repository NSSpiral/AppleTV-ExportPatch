/* Runtime dump - ATVFlickrImageProxy
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRImageProxy;

@class BRPhotoMediaAsset;
@interface ATVFlickrImageProxy : NSObject <BRImageProxy>
{
    BRPhotoMediaAsset * _asset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)imageProxyForAsset:(NSSet *)arg0;

- (ATVImage *)imageForImageSize:(int)arg0;
- (ATVImage *)defaultImageForImageSize:(int)arg0;
- (NSString *)imageIDForImageSize:(int)arg0;
- (void)cancelImageRequestsForImageSizes:(int)arg0;
- (char)supportsImageForImageSize:(int)arg0;
- (void)dealloc;
- (NSObject *)object;
- (ATVFlickrImageProxy *)initWithAsset:(BRPhotoMediaAsset *)arg0;

@end

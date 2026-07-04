/* Runtime dump - BRPhotoMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaAsset.h>

@class BRImageManager, BRMediaType;
@interface BRPhotoMediaAsset : BRBaseMediaAsset
{
    NSString * _thumbURL;
    NSString * _coverArtURL;
    NSString * _fullURL;
    NSString * _artID;
    double _dateTakenTimerInterval;
    char _isLocal;
    NSString * _title;
}

@property (readonly) BRImageManager * preferredImageManager;

- (NSString *)assetID;
- (id /* <BRMediaCollection> */)primaryCollection;
- (void)setThumbURL:(NSString *)arg0;
- (void)setCoverArtURL:(NSString *)arg0;
- (void)setFullURL:(NSString *)arg0;
- (NSDictionary *)coverArt;
- (void)setDateTaken:(id)arg0;
- (id)thumbnailArt;
- (NSObject *)thumbnailArtID;
- (NSObject *)coverArtID;
- (NSObject *)fullSizeArtID;
- (id)fullSizeArt;
- (NSString *)thumbURL;
- (NSString *)coverArtURL;
- (void)setArtID:(NSString *)arg0;
- (id)dateTaken;
- (NSString *)fullURL;
- (NSString *)artID;
- (struct CGRect)faceRectForFaceCollectionID:(NSObject *)arg0;
- (NSObject *)subImageProxyWithRect:(struct CGRect)arg0;
- (BRImageManager *)preferredImageManager;
- (char)isLocal;
- (void)setIsLocal:(char)arg0;
- (void)dealloc;
- (BRPhotoMediaAsset *)init;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)title;
- (id /* <BRImageProxy> */)imageProxy;
- (NSSet *)faces;
- (BRMediaType *)mediaType;

@end

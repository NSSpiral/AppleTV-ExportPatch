/* Runtime dump - BRStreamingPhotoAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaAsset.h>

@protocol BRATVMediaItem;

@class BRImageManager, BRMediaType;
@interface BRStreamingPhotoAsset : BRPhotoMediaAsset <BRATVMediaItem>
{
    BRImageManager * _preferredImageManager;
    char _useForScreenSaver;
    ATVDataClient * _dataClient;
    ATVDataItem * _mediaItem;
    ATVDataCollection * _mediaCollection;
}

@property (nonatomic) char useForScreenSaver;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataItem * mediaItem;
@property (retain, nonatomic) ATVDataCollection * mediaCollection;

+ (NSSet *)newImageProxyForStreamingPhotoAsset:(NSSet *)arg0 withGroupType:(int)arg1;
+ (NSObject *)assetWithATVMediaItem:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;

- (ATVDataItem *)mediaItemRef;
- (BRStreamingPhotoAsset *)initWithATVMediaItem:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;
- (char)hasVideoContent;
- (BRStreamingPhotoAsset *)initWithATVMediaCollection:(id)arg0 dataClient:(ATVDataClient *)arg1;
- (void)setUseForScreenSaver:(char)arg0;
- (id)dateTaken;
- (NSString *)artID;
- (struct CGRect)faceRectForFaceCollectionID:(NSObject *)arg0;
- (NSObject *)subImageProxyWithRect:(struct CGRect)arg0;
- (BRImageManager *)preferredImageManager;
- (struct CGRect)_paddedFaceRectFromFaceRect:(NSObject *)arg0;
- (char)useForScreenSaver;
- (char)isLocal;
- (void)dealloc;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (id /* <BRImageProxy> */)imageProxy;
- (void)setMediaItem:(ATVDataItem *)arg0;
- (ATVDataItem *)mediaItem;
- (NSSet *)faces;
- (BRMediaType *)mediaType;
- (NSString *)mediaURL;
- (ATVDataCollection *)mediaCollection;
- (void)setMediaCollection:(ATVDataCollection *)arg0;

@end

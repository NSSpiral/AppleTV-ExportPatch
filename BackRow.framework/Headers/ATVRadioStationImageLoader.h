/* Runtime dump - ATVRadioStationImageLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioStation, BRURLImageProxy;
@interface ATVRadioStationImageLoader : NSObject
{
    <ATVRadioStationImageLoaderDelegate> * _delegate;
    NSURL * _artworkURL;
    unsigned int _style;
    BRURLImageProxy * _originalImageProxy;
    NSOperation * _decorationOperation;
}

@property (weak, nonatomic) <ATVRadioStationImageLoaderDelegate> * delegate;
@property (retain) NSURL * artworkURL;
@property unsigned int style;
@property (retain, nonatomic) BRURLImageProxy * originalImageProxy;
@property (retain, nonatomic) NSOperation * decorationOperation;

+ (NSObject *)_attributesForImageAtIndex:(unsigned int)arg0 withStyle:(unsigned int)arg1;
+ (UIImage *)_decorateOriginalImage:(UIImage *)arg0 withStyle:(unsigned int)arg1 forItemAtIndex:(unsigned int)arg2;
+ (NSOperationQueue *)processingQueue;

- (ATVRadioStationImageLoader *)initWithStation:(ATVRadioStation *)arg0 style:(unsigned int)arg1;
- (void)stopLoadingImages;
- (void)startLoadingImages;
- (void)_imageUpdated:(id)arg0;
- (void)_imageNotAvailable:(id)arg0;
- (NSObject *)_decoratedImagesFromCacheForOperation:(NSObject *)arg0;
- (void)_didLoadImages:(id)arg0;
- (void)_loadOriginalImage;
- (BRURLImageProxy *)originalImageProxy;
- (void)setOriginalImageProxy:(BRURLImageProxy *)arg0;
- (NSOperation *)decorationOperation;
- (void)setDecorationOperation:(NSOperation *)arg0;
- (void)_createStackImagesWithOriginalImage:(UIImage *)arg0;
- (unsigned int)_numberOfImages;
- (NSObject *)_nameForDecoratedImageAtIndex:(unsigned int)arg0;
- (void)setArtworkURL:(NSURL *)arg0;
- (NSURL *)artworkURL;
- (void)dealloc;
- (void)setDelegate:(<ATVRadioStationImageLoaderDelegate> *)arg0;
- (<ATVRadioStationImageLoaderDelegate> *)delegate;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg0;
- (void).cxx_destruct;

@end

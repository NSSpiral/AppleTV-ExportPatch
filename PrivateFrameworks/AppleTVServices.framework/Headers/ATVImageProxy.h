/* Runtime dump - ATVImageProxy
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVImageProxy : NSObject
{
    char _cropped;
    char _cacheOnLoad;
    char _imageAvailable;
    char _loadSynchronously;
    char _isLoading;
    <ATVImageDecorator> * _decorator;
    id _completionHandler;
    id _writeCompletionHandler;
    id _object;
    id _imageLoader;
    int _groupType;
    id _requestToken;
    ATVDecoratorRequest * _decoratorRequestToken;
    struct CGSize _scaledToSize;
}

@property (nonatomic) struct CGSize scaledToSize;
@property (nonatomic) char cropped;
@property (nonatomic) char cacheOnLoad;
@property (retain, nonatomic) <ATVImageDecorator> * decorator;
@property (copy, nonatomic) id completionHandler;
@property (copy, nonatomic) id writeCompletionHandler;
@property (nonatomic) char imageAvailable;
@property (nonatomic) char loadSynchronously;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) id imageLoader;
@property (nonatomic) int groupType;
@property (retain, nonatomic) id requestToken;
@property (retain, nonatomic) ATVDecoratorRequest * decoratorRequestToken;
@property (nonatomic) char isLoading;

+ (NSOperationQueue *)_imageDecoratorQueue;

- (void)cancel;
- (void)dealloc;
- (NSObject *)object;
- (id /* block */)completionHandler;
- (void)setObject:(NSObject *)arg0;
- (char)isLoading;
- (void)load;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (ATVImageProxy *)initWithObject:(NSObject *)arg0 imageLoader:(ATVXMLImageLoader *)arg1 groupType:(int)arg2;
- (int)groupType;
- (ATVRadioStationImageLoader *)imageLoader;
- (<ATVImageDecorator> *)decorator;
- (NSString *)_scaleIdentifier;
- (NSString *)_assetKeyWithImageKey:(NSString *)arg0 scaleKey:(NSString *)arg1 decoratorKey:(NSString *)arg2;
- (id /* block */)writeCompletionHandler;
- (void)setDecorator:(<ATVImageDecorator> *)arg0;
- (void)_decorateAndWriteImage:(UIImage *)arg0 imagePath:(NSString *)arg1 assetKey:(NSString *)arg2 expiryDate:(NSDate *)arg3;
- (struct CGSize)scaledToSize;
- (void)setRequestToken:(NSString *)arg0;
- (void)_imageDidWriteHandler:(id /* block */)arg0;
- (UIImage *)_extensionForImage:(UIImage *)arg0;
- (void)setDecoratorRequestToken:(ATVDecoratorRequest *)arg0;
- (NSString *)requestToken;
- (ATVDecoratorRequest *)decoratorRequestToken;
- (char)isImageAvailable;
- (void)setScaledToSize:(struct CGSize)arg0;
- (char)cacheOnLoad;
- (void)setCacheOnLoad:(char)arg0;
- (void)setWriteCompletionHandler:(id /* block */)arg0;
- (void)setImageAvailable:(char)arg0;
- (char)loadSynchronously;
- (void)setLoadSynchronously:(char)arg0;
- (void)setImageLoader:(BRImageLoader *)arg0;
- (void)setGroupType:(int)arg0;
- (void)setIsLoading:(char)arg0;
- (void)setCropped:(char)arg0;
- (char)cropped;

@end

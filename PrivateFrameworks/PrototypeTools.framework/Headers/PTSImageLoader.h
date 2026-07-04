/* Runtime dump - PTSImageLoader
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImageLoader : NSObject
{
    NSString * _path;
    char _loading;
    <PTSImageLoaderDelegate> * _delegate;
}

@property (weak, nonatomic) <PTSImageLoaderDelegate> * delegate;
@property char loading;

- (void)startLoading;
- (void)setDelegate:(<PTSImageLoaderDelegate> *)arg0;
- (<PTSImageLoaderDelegate> *)delegate;
- (char)isLoading;
- (void)stopLoading;
- (PTSImageLoader *)initWithPath:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setLoading:(char)arg0;

@end

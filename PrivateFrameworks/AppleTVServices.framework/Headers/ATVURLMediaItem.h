/* Runtime dump - ATVURLMediaItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVURLMediaItem : ATVBaseMediaItem
{
    NSURL * _url;
    NSSet * _traits;
}

@property (copy, nonatomic) NSURL * url;
@property (copy, nonatomic) NSSet * traits;

- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (NSSet *)traits;
- (void).cxx_destruct;
- (NSURL *)mediaItemURL;
- (char)isEqualToMediaItem:(NSObject *)arg0;
- (char)hasTrait:(UIKBRenderFactoryiPadHWR_Portrait *)arg0;
- (ATVURLMediaItem *)initWithURL:(NSURL *)arg0 traits:(NSSet *)arg1;
- (void)setTraits:(NSSet *)arg0;

@end

/* Runtime dump - ATVBundleFeedResource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVReadOnlyFeedResource;
@interface ATVBundleFeedResource : NSObject <ATVReadOnlyFeedResource>
{
    NSString * _basePath;
    NSBundle * _bundle;
}

@property (readonly, copy, nonatomic) NSString * path;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (id)feedResourceNamed:(NSString *)arg0;
- (void)dealloc;
- (NSString *)path;
- (ATVBundleFeedResource *)initWithBundlePath:(NSBundle *)arg0;

@end

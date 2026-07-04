/* Runtime dump - ATVFlickrDisplayInfoLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRDisplayInfoLoader;
@interface ATVFlickrDisplayInfoLoader : NSObject <BRDisplayInfoLoader>
{
    id _object;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)displayInfoLoaderWithForObject:(NSObject *)arg0;

- (ATVImage *)defaultImage;
- (void)loadDisplayInfo;
- (void)cancelLoadDisplayInfo;
- (void)dealloc;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;

@end

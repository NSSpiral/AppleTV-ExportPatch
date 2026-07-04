/* Runtime dump - ATVAirTunesImageLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVImageLoader;
@interface ATVAirTunesImageLoader : NSObject <ATVImageLoader>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)imageKeyForObject:(NSObject *)arg0;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;

@end

/* Runtime dump - ATVAVMetadataItemImageLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAVMetadataItemImageLoader : NSObject <ATVImageLoader>
{
    NSString * _identifier;
}

@property (copy, nonatomic) NSString * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVAVMetadataItemImageLoader *)init;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (NSObject *)imageKeyForObject:(NSObject *)arg0;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;

@end

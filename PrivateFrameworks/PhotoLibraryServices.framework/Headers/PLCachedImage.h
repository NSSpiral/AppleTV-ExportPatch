/* Runtime dump - PLCachedImage
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCachedImage : UIImage
{
    NSDictionary * _metadata;
    int _format;
    PLLoadRequestKey * _cacheKey;
}

@property (nonatomic) int format;
@property (retain, nonatomic) NSDictionary * metadata;
@property (copy, nonatomic) PLLoadRequestKey * cacheKey;

- (void)dealloc;
- (NSString *)description;
- (PLLoadRequestKey *)cacheKey;
- (void)setCacheKey:(PLLoadRequestKey *)arg0;
- (int)format;
- (void)setMetadata:(NSDictionary *)arg0;
- (void)setFormat:(int)arg0;
- (NSDictionary *)metadata;

@end

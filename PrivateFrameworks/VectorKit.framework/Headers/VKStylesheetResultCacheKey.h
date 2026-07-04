/* Runtime dump - VKStylesheetResultCacheKey
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKStylesheetResultCacheKey : NSObject <NSCopying>
{
    GEOFeatureStyleAttributes * _featureAttributes;
    struct ? _clientAttributes;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (VKStylesheetResultCacheKey *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (VKStylesheetResultCacheKey *)initWithFeatureAttributes:(GEOFeatureStyleAttributes *)arg0 clientAttributes:(struct ? *)arg1;

@end

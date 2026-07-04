/* Runtime dump - VKMockRasterTileRequester
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMockRasterTileRequester : GEOTileRequester

+ (unsigned char)tileProviderIdentifier;

- (void)start;
- (NSString *)_urlForTileKey:(struct _GEOTileKey *)arg0;

@end

/* Runtime dump - VKMockVectorTileRequester
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMockVectorTileRequester : GEOTileRequester

+ (unsigned char)tileProviderIdentifier;

- (void)start;
- (NSData *)getTileData:(NSData *)arg0;
- (void)fakeLoadTile;

@end

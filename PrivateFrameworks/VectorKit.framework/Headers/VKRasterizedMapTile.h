/* Runtime dump - VKRasterizedMapTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterizedMapTile : VKRasterTile

- (void)buildTexture;
- (VKRasterizedMapTile *)initWithKey:(struct VKTileKey *)arg0 gglTexture:(struct VKTileKey)arg1 styleManager:(struct shared_ptr<ggl::Texture2D> *)arg2;
- (void)gglBuildTexture;

@end

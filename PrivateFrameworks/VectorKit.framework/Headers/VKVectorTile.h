/* Runtime dump - VKVectorTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVectorTile : VKTile
{
    GEOVectorTile * _modelTile;
    float _contentScale;
    float _maximumStyleZ;
    float _textureScale;
    VKStyleManager * _styleManager;
    VKSharedResources * _sharedResources;
    VKMapTileList * _fragments;
}

@property (retain, nonatomic) GEOVectorTile * modelTile;
@property (retain, nonatomic) VKStyleManager * styleManager;
@property (retain, nonatomic) VKSharedResources * sharedResources;
@property (readonly, nonatomic) int vectorType;
@property (nonatomic) float contentScale;
@property (nonatomic) float maximumStyleZ;
@property (nonatomic) float textureScale;
@property (readonly, nonatomic) VKMapTileList * fragments;

- (void)dealloc;
- (void)setContentScale:(float)arg0;
- (float)contentScale;
- (VKVectorTile *)initWithKey:(struct VKTileKey *)arg0;
- (VKStyleManager *)styleManager;
- (void)setStyleManager:(VKStyleManager *)arg0;
- (VKSharedResources *)sharedResources;
- (void)setSharedResources:(VKSharedResources *)arg0;
- (VKMapTileList *)fragments;
- (float)maximumStyleZ;
- (void)setMaximumStyleZ:(float)arg0;
- (void)setModelTile:(GEOVectorTile *)arg0;
- (VKVectorTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1 styleManager:(VKStyleManager *)arg2 sharedResources:(VKSharedResources *)arg3 contentScale:(float)arg4 device:(float)arg5;
- (int)vectorType;
- (GEOVectorTile *)modelTile;
- (float)textureScale;
- (void)setTextureScale:(float)arg0;

@end

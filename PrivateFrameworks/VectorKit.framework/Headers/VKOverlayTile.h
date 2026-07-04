/* Runtime dump - VKOverlayTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayTile : VKTile
{
    NSMutableArray * _overlays;
    VKVectorTile * _roadTile;
    NSMapTable * _tileForOverlay;
    float _maximumStyleZ;
}

@property (readonly, nonatomic) NSArray * overlays;
@property (retain, nonatomic) VKVectorTile * roadTile;
@property (readonly, nonatomic) float maximumStyleZ;

- (void)dealloc;
- (void)updateViewDependentStateWithContext:(NSObject *)arg0;
- (NSArray *)overlays;
- (void)addOverlay:(NSObject *)arg0;
- (float)maximumStyleZ;
- (void)setRoadTile:(VKVectorTile *)arg0;
- (void)setTile:(VKLabelTile *)arg0 forOverlay:(NSObject *)arg1;
- (NSObject *)tileForOverlay:(NSMapTable *)arg0;
- (VKVectorTile *)roadTile;

@end

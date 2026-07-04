/* Runtime dump - VKAttributesTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAttributesTile : VKTile
{
    int _metroArea;
}

@property (readonly, nonatomic) int metroArea;

- (int)metroArea;
- (VKAttributesTile *)initWithKey:(struct VKTileKey *)arg0 modelTile:(struct VKTileKey)arg1;

@end

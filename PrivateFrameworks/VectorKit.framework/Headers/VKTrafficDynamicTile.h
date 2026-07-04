/* Runtime dump - VKTrafficDynamicTile
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficDynamicTile : VKTile
{
    struct _GEOTileKey _downloadKey;
    struct shared_ptr<zilch::TrafficDynamicTile> _tile;
    struct /* ? */ _flows;
}

@property (readonly, nonatomic) long long updateTime;
@property (readonly, nonatomic) unsigned long incidentCount;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (int)flowForRoadId:(long long)arg0 buffer:(struct Flow * *)arg1 maxSize:(struct Flow *)arg2;
- (unsigned long)incidentCount;
- (struct Incident *)incidentAtIndex:(NSObject *)arg0;
- (long long)updateTime;
- (VKTrafficDynamicTile *)initWithKey:(struct VKTileKey *)arg0 downloadKey:(struct VKTileKey)arg1 data:(struct _GEOTileKey *)arg2;

@end

/* Runtime dump - VKTileSelection
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSelection : NSObject
{
    int _tileSize;
    char _bootstrap;
    unsigned int _maxZ;
    double _lodBias;
}

@property (nonatomic) int tileSize;
@property (nonatomic) char bootstrap;
@property (nonatomic) unsigned int maxZ;
@property (nonatomic) double lodBias;

- (VKTileSelection *)init;
- (void)setTileSize:(int)arg0;
- (int)tileSize;
- (void)setLodBias:(double)arg0;
- (double)lodBias;
- (unsigned int)maxZ;
- (void)setMaxZ:(unsigned int)arg0;
- (NSString *)keysForContext:(NSObject *)arg0 neighbors:(NSMutableArray *)arg1 selectionScale:(float)arg2;
- (struct ?)relevantTilesForContext:(NSObject *)arg0;
- (char)bootstrap;
- (void)setBootstrap:(char)arg0;

@end

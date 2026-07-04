/* Runtime dump - VKAnchorWrapper
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate>
{
    VKAnchor * _anchor;
    char _followsTerrain;
    struct CGPoint _screenPointInCanvas;
    VKLayoutContext * _lastLayoutContext;
    struct ? _lastCoordinate;
    char _isUpdating;
    double _pointsPerMeter;
    MDDisplayLayer * _displayLayer;
}

@property (readonly, nonatomic) struct ? coordinate;
@property (nonatomic) char followsTerrain;
@property (nonatomic) MDDisplayLayer * displayLayer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void).cxx_construct;
- (void)updateIfNeeded;
- (void)setDisplayLayer:(MDDisplayLayer *)arg0;
- (void)layoutWithContext:(NSObject *)arg0;
- (struct ?)coordinate;
- (char)followsTerrain;
- (void)anchorWorldPointDidChange:(void *)arg0;
- (void)setFollowsTerrain:(char)arg0;
- (NSString *)_anchorWithContext:(NSObject *)arg0;
- (void)_updateCachedPointWithContext:(NSObject *)arg0;
- (struct CGPoint)pointInLayer:(id)arg0;
- (float)pointOffsetForDistanceOffset:(double)arg0;
- (MDDisplayLayer *)displayLayer;

@end

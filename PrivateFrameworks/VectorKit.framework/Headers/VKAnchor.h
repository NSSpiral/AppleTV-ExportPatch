/* Runtime dump - VKAnchor
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnchor : NSObject
{
    struct shared_ptr<vk::Anchor> _anchor;
}

@property (readonly, nonatomic) char isMercator;
@property (readonly, nonatomic) char isGeocentric;
@property (readonly, nonatomic) char followsTerrain;
@property (readonly, nonatomic) struct VKPoint worldPoint;
@property (readonly, nonatomic) struct VKPoint mercatorPoint;
@property (nonatomic) struct ? coordinate;
@property (nonatomic) <VKAnchorDelegate> * delegate;

- (void)setDelegate:(<VKAnchorDelegate> *)arg0;
- (<VKAnchorDelegate> *)delegate;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct ?)coordinate;
- (char)isMercator;
- (char)isGeocentric;
- (char)followsTerrain;
- (void)setCoordinate:(struct ?)arg0;
- (struct VKPoint)worldPoint;
- (int)worldIndexWithContext:(NSObject *)arg0;
- (VKAnchor *)initWithAnchor:(struct shared_ptr<vk::Anchor>)arg0;
- (void)worldPointDidChange;
- (void)setMercatorPoint:(struct VKPoint)arg0;
- (struct VKPoint)mercatorPoint;

@end

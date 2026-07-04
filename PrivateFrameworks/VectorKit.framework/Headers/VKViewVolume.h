/* Runtime dump - VKViewVolume
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKViewVolume : NSObject
{
    id _corners;
}

@property (readonly, nonatomic) struct VKPoint * corners;

- (struct VKPoint *)corners;
- (void).cxx_construct;
- (void)updateWithFrustum:(struct ?)arg0 matrix:(struct ? *)arg1;
- (struct VKPoint)lerpPoint:(float *)arg0;

@end

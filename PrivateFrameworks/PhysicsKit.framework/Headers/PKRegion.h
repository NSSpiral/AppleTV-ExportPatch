/* Runtime dump - PKRegion
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKRegion : NSObject <NSCopying, NSCoding>
{
    int _shape;
    BOOL _isExclusive;
    struct vec4 _halfExtent;
    struct shared_ptr<PKCPathHolder> _path;
    int _regionOp;
    int _shape2;
    struct vec4 _halfExtent2;
    struct shared_ptr<PKCPathHolder> _path2;
}

@property (readonly, nonatomic) struct CGPath * path;

+ (NSObject *)infiniteRegion;

- (PKRegion *)initWithRadius:(float)arg0;
- (NSObject *)inverseRegion;
- (NSObject *)regionByDifferenceFromRegion:(NSObject *)arg0;
- (NSObject *)regionByUnionWithRegion:(NSObject *)arg0;
- (NSObject *)regionByIntersectionWithRegion:(NSObject *)arg0;
- (void)containsPoints:(float *)arg0 locationStride:(float)arg1 results:(int)arg2 resultsStride:(char *)arg3 count:(int)arg4;
- (PKRegion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (struct CGPath *)path;
- (PKRegion *)copyWithZone:(struct _NSZone *)arg0;
- (char)containsPoint:(struct CGPoint)arg0;
- (PKRegion *)initWithSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (PKRegion *)initWithPath:(struct CGPath *)arg0;
- (void).cxx_destruct;

@end

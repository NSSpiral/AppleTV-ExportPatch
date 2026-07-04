/* Runtime dump - SKRegion
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRegion : NSObject <NSCopying, NSCoding>
{
    PKRegion * _region;
}

@property (readonly, nonatomic) struct CGPath * path;

+ (NSObject *)infiniteRegion;

- (SKRegion *)initWithRadius:(float)arg0;
- (NSObject *)inverseRegion;
- (NSObject *)regionByDifferenceFromRegion:(NSObject *)arg0;
- (NSObject *)regionByUnionWithRegion:(PKRegion *)arg0;
- (NSObject *)regionByIntersectionWithRegion:(PKRegion *)arg0;
- (void)containsPoints:(float *)arg0 locationStride:(float)arg1 results:(int)arg2 resultsStride:(char *)arg3 count:(int)arg4;
- (SKRegion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (struct CGPath *)path;
- (SKRegion *)copyWithZone:(struct _NSZone *)arg0;
- (char)containsPoint:(struct CGPoint)arg0;
- (SKRegion *)initWithSize:(struct CGSize)arg0;
- (SKRegion *)initWithPath:(struct CGPath *)arg0;
- (void).cxx_destruct;

@end

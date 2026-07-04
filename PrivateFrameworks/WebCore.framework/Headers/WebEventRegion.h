/* Runtime dump - WebEventRegion
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebEventRegion : NSObject <NSCopying>
{
    struct CGPoint p1;
    struct CGPoint p2;
    struct CGPoint p3;
    struct CGPoint p4;
}

- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (WebEventRegion *)copyWithZone:(struct _NSZone *)arg0;
- (char)hitTest:(struct CGPoint)arg0;
- (struct FloatQuad)quad;
- (void).cxx_construct;
- (WebEventRegion *)initWithPoints:(struct CGPoint)arg0 :(struct CGPoint)arg1 :(struct CGPoint)arg2 :(struct CGPoint)arg3;
- (struct CGPoint)p1;
- (struct CGPoint)p2;
- (struct CGPoint)p3;
- (struct CGPoint)p4;

@end

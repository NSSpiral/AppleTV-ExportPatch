/* Runtime dump - PKExtendedPhysicsBody
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface PKExtendedPhysicsBody : PKPhysicsBody
{
    int _associations;
    float _areaFactor;
}

@property (nonatomic) float normalizedDensity;

+ (NSObject *)bodyWithRectangleOfSize:(struct CGSize)arg0;
+ (PKExtendedPhysicsBody *)bodyWithCircleOfRadius:(float)arg0;
+ (NSString *)bodyWithEdgeLoopFromPath:(struct CGPath *)arg0;
+ (NSObject *)bodyWithEdgeFromPoint:(struct CGPoint)arg0 toPoint:(struct CGPoint)arg1;
+ (NSString *)bodyWithPolygonFromPath:(struct CGPath *)arg0;
+ (NSString *)bodyWithEdgeChainFromPath:(struct CGPath *)arg0;

- (PKExtendedPhysicsBody *)init;
- (NSString *)description;
- (void)setNormalizedDensity:(float)arg0;
- (float)normalizedDensity;
- (char)dissociate;
- (void)associate;
- (PKExtendedPhysicsBody *)initWithRectangleOfSize:(struct CGSize)arg0;

@end

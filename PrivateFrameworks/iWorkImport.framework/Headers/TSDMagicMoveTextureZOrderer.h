/* Runtime dump - TSDMagicMoveTextureZOrderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveTextureZOrderer : NSObject
{
    NSArray * _zOrderMatches;
    NSArray * _outgoingTexturesInZOrder;
    NSArray * _incomingTexturesInZOrder;
    float * _percentTexturesTimes;
    NSArray * _percentTextures;
    unsigned int _zOrderIntersectionsCount;
}

@property (readonly, nonatomic) unsigned int zOrderIntersectionsCount;
@property (readonly, nonatomic) NSArray * flattenableAnimationMatches;

- (NSString *)p_debugDescription;
- (void)p_setupZOrderMatchesWithAnimationMatches:(NSArray *)arg0;
- (void)p_calculateTextureArraysFromIntersections;
- (void)p_addVisibleTexturesFromMatches:(id)arg0 toArray:(NSArray *)arg1 interpolatedPercent:(float)arg2;
- (void)p_adjustZOrdererMatchesZIndexByTextureType:(NSObject *)arg0;
- (unsigned int)p_bestZIndexForUnassignedMatch:(id)arg0 inMatchArray:(NSArray *)arg1;
- (id)p_arrayBySortingMatches:(id)arg0 withInterpolatedPercent:(float)arg1;
- (void)p_addFlattenableAnimationMatches:(id)arg0 toArray:(NSArray *)arg1;
- (TSDMagicMoveTextureZOrderer *)initWithAnimationMatches:(NSArray *)arg0;
- (id)texturedRectanglesAtPercent:(double)arg0;
- (unsigned int)p_zIntersectionsBetweenZOrdererMatches:(id)arg0;
- (NSArray *)flattenableAnimationMatches;
- (unsigned int)zOrderIntersectionsCount;
- (void)dealloc;

@end

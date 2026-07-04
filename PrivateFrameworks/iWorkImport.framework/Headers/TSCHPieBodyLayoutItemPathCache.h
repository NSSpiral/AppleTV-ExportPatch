/* Runtime dump - TSCHPieBodyLayoutItemPathCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieBodyLayoutItemPathCache : NSObject
{
    unsigned int seriesIndex;
    struct CGPath * pathLayoutRelative;
    struct CGPath * pathTransformRelative;
    NSArray * pathSelectionKnobs;
    struct CGPoint wedgeCenterPoint;
    struct CGRect rootedLayoutRect;
}

@property (readonly, nonatomic) unsigned int seriesIndex;
@property (readonly, nonatomic) struct CGRect rootedLayoutRect;
@property (readonly, nonatomic) struct CGPoint wedgeCenterPoint;
@property (readonly, nonatomic) struct CGPath * pathLayoutRelative;
@property (readonly, nonatomic) struct CGPath * pathTransformRelative;
@property (readonly, copy, nonatomic) NSArray * pathSelectionKnobs;

- (struct CGRect)rootedLayoutRect;
- (struct CGPath *)pathLayoutRelative;
- (struct CGPath *)pathTransformRelative;
- (struct CGPoint)wedgeCenterPoint;
- (NSArray *)pathSelectionKnobs;
- (TSCHPieBodyLayoutItemPathCache *)initWithSeriesIndex:(unsigned int)arg0 rootedLayoutRect:(struct CGRect)arg1 wedgeCenterPoint:(struct CGSize)arg2 pathLayoutRelative:(struct CGPath *)arg3 pathTransformRelative:(struct CGPoint)arg4 pathSelectionKnobs:(struct CGPath *)arg5;
- (void)dealloc;
- (unsigned int)seriesIndex;

@end

/* Runtime dump - MRTransitionTileFlip
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionTileFlip : MRTransition
{
    NSMutableArray * mSortedTiles;
    unsigned long mNumberOfTilesX;
    unsigned long mNumberOfTilesY;
    float mFlipOverlap;
    unsigned char mDirection;
    char mUseLighting;
}

- (void)setAttributes:(NSDictionary *)arg0;
- (void)cleanup;
- (MRTransitionTileFlip *)initWithTransitionID:(NSString *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)releaseByTransitioner:(id)arg0;
- (void)buildTiles;

@end

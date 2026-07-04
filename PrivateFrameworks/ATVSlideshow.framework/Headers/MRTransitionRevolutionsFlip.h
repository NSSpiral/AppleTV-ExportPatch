/* Runtime dump - MRTransitionRevolutionsFlip
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionRevolutionsFlip : MRTransition
{
    unsigned long _numberOfTilesX;
    unsigned long _numberOfTilesY;
    unsigned char _direction;
    NSMutableArray * _cubes;
    NSMutableArray * _cubeColumns;
    NSMutableArray * _cubeRows;
    int _flipDirection;
    int _horizontalCubeCount;
    int _verticalCubeCount;
    MRImage * _sourceImage;
    MRImage * _destinationImage;
    float _viewBaseWidth;
    float _viewBaseHeight;
}

- (void)setAttributes:(NSDictionary *)arg0;
- (void)cleanup;
- (MRTransitionRevolutionsFlip *)initWithTransitionID:(NSString *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)releaseByTransitioner:(id)arg0;
- (void)setFlipDirection:(int)arg0;
- (void)setupCubesWithLocalAspectRatio:(float)arg0;

@end

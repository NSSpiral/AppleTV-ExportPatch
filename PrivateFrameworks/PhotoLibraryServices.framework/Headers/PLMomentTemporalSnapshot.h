/* Runtime dump - PLMomentTemporalSnapshot
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentTemporalSnapshot : NSObject
{
    NSMutableSet * __nodes;
    double __range;
    double __distance;
}

@property (readonly, nonatomic) NSMutableSet * nodes;
@property (readonly, nonatomic) double range;
@property (readonly, nonatomic) double distance;

- (double)range;
- (NSMutableSet *)nodes;
- (PLMomentTemporalSnapshot *)initWithNodes:(NSMutableSet *)arg0 inRange:(double)arg1;
- (double)distance;

@end

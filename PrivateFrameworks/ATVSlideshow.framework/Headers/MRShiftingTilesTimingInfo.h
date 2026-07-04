/* Runtime dump - MRShiftingTilesTimingInfo
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRShiftingTilesTimingInfo : NSObject
{
    char fallLeft;
    int fallDirection;
    char isTop;
    NSArray * layouts;
    int add;
    NSIndexSet * remove;
    int slideIndex;
    NSMutableArray * additionalTimingInfo;
    double duration;
}

@property (retain, nonatomic) NSArray * layouts;
@property (retain, nonatomic) NSIndexSet * remove;
@property (retain, nonatomic) NSArray * additionalTimingInfo;

- (void)dealloc;
- (NSString *)description;
- (NSIndexSet *)remove;
- (NSArray *)layouts;
- (void)setLayouts:(NSArray *)arg0;
- (void)setRemove:(NSIndexSet *)arg0;
- (NSArray *)additionalTimingInfo;
- (void)setAdditionalTimingInfo:(NSArray *)arg0;

@end

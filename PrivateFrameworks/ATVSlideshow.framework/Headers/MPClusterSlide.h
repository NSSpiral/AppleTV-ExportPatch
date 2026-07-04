/* Runtime dump - MPClusterSlide
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPClusterSlide : NSObject <NSCopying>
{
    NSDate * mCaptureDate;
    NSString * mPath;
    int mReferenceCounter;
    NSMutableDictionary * mUsageCounterPerLayer;
    NSMutableArray * mUsableSlideClusters;
    int mIndex;
}

@property (copy) NSDate * captureDate;
@property (copy) NSString * path;
@property int referenceCounter;
@property int index;
@property (retain) NSMutableDictionary * usageCounterPerLayer;
@property (retain) NSMutableArray * usableSlideClusters;

- (void)dealloc;
- (MPClusterSlide *)init;
- (NSString *)description;
- (NSString *)path;
- (MPClusterSlide *)copyWithZone:(struct _NSZone *)arg0;
- (int)index;
- (void)setPath:(NSString *)arg0;
- (void)setIndex:(int)arg0;
- (NSMutableArray *)usableSlideClusters;
- (NSString *)usageCountDescription;
- (void)resetAllUsageCounters;
- (NSMutableDictionary *)usageCounterPerLayer;
- (void)setUsageCounterPerLayer:(NSMutableDictionary *)arg0;
- (int)overallUsageCounter;
- (void)setUsableSlideClusters:(NSMutableArray *)arg0;
- (int)referenceCounter;
- (void)setReferenceCounter:(int)arg0;
- (void)setUsageCounterForLayer:(id)arg0 to:(int)arg1;
- (void)increaseUsageCounterForLayer:(id)arg0;
- (int)usageCounterForLayer:(id)arg0;
- (void)setCaptureDate:(NSDate *)arg0;
- (NSDate *)captureDate;

@end

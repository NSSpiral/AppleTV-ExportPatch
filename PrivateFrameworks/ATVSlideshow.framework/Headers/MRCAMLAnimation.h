/* Runtime dump - MRCAMLAnimation
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRCAMLAnimation : NSObject
{
    double startTime;
    double duration;
    char removedOnCompletion;
    NSString * keyPath;
    NSArray * keyframes;
}

@property (copy, nonatomic) NSString * keyPath;
@property (retain, nonatomic) NSArray * keyframes;

- (void)dealloc;
- (NSString *)keyPath;
- (void)setKeyPath:(NSString *)arg0;
- (NSArray *)keyframes;
- (void)setKeyframes:(NSArray *)arg0;

@end

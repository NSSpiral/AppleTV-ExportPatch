/* Runtime dump - MRTouch
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTouch : NSObject
{
    NSMutableArray * _gestureRecognizers;
    unsigned int _tapCount;
    int _phase;
    struct CGPoint _location;
    double _timestamp;
}

@property (nonatomic) struct CGPoint location;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned int tapCount;
@property (nonatomic) int phase;
@property (readonly) NSArray * gestureRecognizers;

+ (NSObject *)touchWithLocation:(struct CGPoint)arg0 timestamp:(double)arg1 tapCount:(unsigned int)arg2;
+ (MRTouch *)touchWithUITouch:(id)arg0 inView:(struct CGSize)arg1;

- (void)dealloc;
- (NSString *)description;
- (void)addGestureRecognizer:(NSObject *)arg0;
- (void)removeGestureRecognizer:(NSObject *)arg0;
- (double)timestamp;
- (int)phase;
- (void)setTapCount:(unsigned int)arg0;
- (void)setPhase:(int)arg0;
- (NSArray *)gestureRecognizers;
- (void)setTimestamp:(double)arg0;
- (unsigned int)tapCount;
- (struct CGPoint)location;
- (void)setLocation:(struct CGPoint)arg0;

@end

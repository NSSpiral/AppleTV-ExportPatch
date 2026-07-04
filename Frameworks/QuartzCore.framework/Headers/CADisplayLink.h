/* Runtime dump - CADisplayLink
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayLink : NSObject
{
    void * _impl;
}

@property (readonly, nonatomic) CADisplay * display;
@property (retain, nonatomic) id userInfo;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (nonatomic) char paused;
@property (nonatomic) int frameInterval;

+ (CADisplayLink *)displayLinkWithTarget:(NSObject *)arg0 selector:(SEL)arg1;
+ (CADisplayLink *)displayLinkWithDisplay:(CADisplay *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;

- (NSObject *)_initWithDisplayLinkItem:(struct DisplayLinkItem *)arg0;
- (void)dealloc;
- (double)timestamp;
- (double)duration;
- (void)invalidate;
- (CADisplay *)display;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (void)setFrameInterval:(int)arg0;
- (void)addToRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (int)frameInterval;
- (void)setPaused:(char)arg0;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (char)isPaused;

@end

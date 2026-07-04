/* Runtime dump - BWDroppedSample
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDroppedSample : NSObject
{
    NSString * _reason;
    struct ? _pts;
}

@property (readonly) NSString * reason;
@property (readonly) struct ? pts;

+ (NSString *)newDroppedSampleWithReason:(NSString *)arg0 pts:(struct ?)arg1;

- (void)dealloc;
- (NSString *)reason;
- (struct ?)pts;
- (NSString *)_initDroppedSampleWithReason:(NSString *)arg0 pts:(struct ?)arg1;

@end

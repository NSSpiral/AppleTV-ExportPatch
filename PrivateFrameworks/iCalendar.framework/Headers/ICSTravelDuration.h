/* Runtime dump - ICSTravelDuration
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTravelDuration : ICSProperty

@property (retain, nonatomic) NSString * transparency;
@property (retain, nonatomic) ICSDuration * duration;

- (NSString *)transparency;
- (void)setTransparency:(NSString *)arg0;
- (ICSDuration *)duration;
- (void)setDuration:(ICSDuration *)arg0;
- (char)alwaysHasParametersToSerialize;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1 additionalParameters:(NSDictionary *)arg2;

@end

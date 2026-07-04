/* Runtime dump - BRTimer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRTimer : NSObject
{
    char _cancel;
    NSString * _name;
    double _interval;
}

@property char cancel;

+ (NSString *)createTimerWithName:(NSString *)arg0;

- (char)cancel;
- (void)dealloc;
- (void)reset;
- (BRTimer *)initWithName:(NSString *)arg0;
- (void)setCancel:(char)arg0;

@end

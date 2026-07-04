/* Runtime dump - MSPBTimerContext
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPBTimerContext : NSObject
{
    char _isValid;
    NSDate * _date;
}

@property (nonatomic) char isValid;
@property (retain, nonatomic) NSDate * date;

+ (NSDate *)contextWithDate:(NSDate *)arg0;

- (MSPBTimerContext *)init;
- (char)isValid;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (void).cxx_destruct;
- (void)setIsValid:(char)arg0;

@end

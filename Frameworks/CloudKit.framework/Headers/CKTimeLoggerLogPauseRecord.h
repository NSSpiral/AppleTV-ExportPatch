/* Runtime dump - CKTimeLoggerLogPauseRecord
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKTimeLoggerLogPauseRecord : NSObject
{
    NSString * _message;
    double _time;
}

@property (nonatomic) double time;
@property (retain, nonatomic) NSString * message;

- (NSString *)message;
- (void)setTime:(double)arg0;
- (double)time;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;

@end

/* Runtime dump - CKTimeLoggerLog
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKTimeLoggerLog : NSObject <NSCoding>
{
    NSString * _type;
    NSString * _beginningMessage;
    NSString * _endingMessage;
    NSMutableArray * _pauseRecords;
    double _beginTime;
    double _endTime;
}

@property (retain, nonatomic) NSString * type;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (readonly) double elapsedTime;
@property (retain, nonatomic) NSString * beginningMessage;
@property (retain, nonatomic) NSString * endingMessage;
@property (retain, nonatomic) NSMutableArray * pauseRecords;

- (void)setBeginningMessage:(NSString *)arg0;
- (void)setEndingMessage:(NSString *)arg0;
- (void)togglePauseWithTime:(double)arg0 message:(NSString *)arg1;
- (void)appendStatusReportToString:(NSString *)arg0 withIndent:(unsigned int)arg1 showingPointers:(char)arg2;
- (void)setPauseRecords:(NSMutableArray *)arg0;
- (NSString *)beginningMessage;
- (NSString *)endingMessage;
- (NSMutableArray *)pauseRecords;
- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (CKTimeLoggerLog *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKTimeLoggerLog *)init;
- (NSString *)description;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)setBeginTime:(double)arg0;
- (double)beginTime;
- (void).cxx_destruct;
- (double)elapsedTime;
- (double)endTime;

@end

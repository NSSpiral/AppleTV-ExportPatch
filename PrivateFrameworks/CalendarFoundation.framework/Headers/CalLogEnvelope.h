/* Runtime dump - CalLogEnvelope
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogEnvelope : NSObject
{
    NSString * _logName;
    int _level;
    NSString * _message;
    int _processID;
    NSString * _processName;
    unsigned int _machPort;
    double _timestamp;
    NSString * _function;
}

@property (retain, nonatomic) NSString * logName;
@property (nonatomic) int level;
@property (retain, nonatomic) NSString * message;
@property (nonatomic) int processID;
@property (retain, nonatomic) NSString * processName;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString * function;

- (unsigned int)machPort;
- (CalLogEnvelope *)init;
- (NSString *)description;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (void)setLevel:(int)arg0;
- (int)level;
- (NSString *)message;
- (NSString *)processName;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setFunction:(NSString *)arg0;
- (CalLogEnvelope *)initWithLogName:(NSString *)arg0 level:(int)arg1 message:(NSString *)arg2;
- (void)setProcessID:(int)arg0;
- (void)setMachPort:(unsigned int)arg0;
- (NSString *)logName;
- (void)setLogName:(NSString *)arg0;
- (int)processID;
- (NSString *)function;
- (void)setProcessName:(NSString *)arg0;

@end

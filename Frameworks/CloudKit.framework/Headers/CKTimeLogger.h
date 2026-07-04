/* Runtime dump - CKTimeLogger
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKTimeLogger : NSObject <NSCoding>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _childLoggers;
    NSMutableDictionary * _logs;
    CKTimeLogger * _parentLogger;
    NSString * _relationMessage;
    NSString * _observedObjectClassName;
    NSString * _observedObjectDescription;
    NSMutableDictionary * _currentSessions;
    NSString * _parentLoggerDescription;
    double _relationTime;
}

@property (readonly) NSArray * childLoggers;
@property (readonly) NSDictionary * logs;
@property (weak, nonatomic) CKTimeLogger * parentLogger;
@property (retain, nonatomic) NSString * relationMessage;
@property (nonatomic) double relationTime;
@property (retain, nonatomic) NSString * observedObjectClassName;
@property (retain, nonatomic) NSString * observedObjectDescription;
@property (retain) NSMutableDictionary * currentSessions;
@property (retain, nonatomic) NSString * parentLoggerDescription;

+ (NSObject *)loggerForObject:(NSObject *)arg0;

- (void)setCurrentSessions:(NSMutableDictionary *)arg0;
- (void)setObservedObject:(NSObject *)arg0;
- (void)setObservedObjectDescription:(NSString *)arg0;
- (void)setParentLoggerDescription:(NSString *)arg0;
- (NSString *)observedObjectDescription;
- (NSString *)parentLoggerDescription;
- (NSArray *)childLoggers;
- (NSDictionary *)logs;
- (void)setParentLogger:(CKTimeLogger *)arg0;
- (void)setRelationMessage:(NSString *)arg0;
- (void)setObservedObjectClassName:(NSString *)arg0;
- (void)removeChildLogger:(id)arg0;
- (void)addChildLogger:(id)arg0;
- (void)appendStatusReportToString:(NSString *)arg0 withIndent:(unsigned int)arg1 showingPointers:(char)arg2;
- (NSObject *)logsForType:(NSObject *)arg0;
- (NSString *)relationMessage;
- (double)relationTime;
- (void)appendStatusReportForType:(NSObject *)arg0 toString:(NSString *)arg1 withIndent:(unsigned int)arg2 showingPointers:(char)arg3;
- (void)treeTraversalWithBlock:(id /* block */)arg0;
- (void)appendBriefStatusReportToString:(NSString *)arg0;
- (void)addLog:(id)arg0 forType:(NSObject *)arg1;
- (void)intervalLoggingSessionOfType:(NSObject *)arg0 message:(NSString *)arg1;
- (void)togglePauseLoggingSessionOfType:(NSObject *)arg0 message:(NSString *)arg1;
- (void)dumpLogs;
- (void)dumpLogsForType:(NSObject *)arg0;
- (CKTimeLogger *)parentLogger;
- (void)setRelationTime:(double)arg0;
- (NSString *)observedObjectClassName;
- (void)dealloc;
- (CKTimeLogger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKTimeLogger *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (DAStatusReport *)statusReport;
- (CKTimeLogger *)initForObject:(NSObject *)arg0;
- (void)relateAsChildToParent:(NSObject *)arg0 message:(NSString *)arg1;
- (void)beginLoggingSessionOfType:(NSObject *)arg0 message:(NSString *)arg1;
- (void)endLoggingSessionOfType:(NSObject *)arg0 message:(NSString *)arg1;
- (void)addCustomLogOfType:(NSObject *)arg0 message:(NSString *)arg1 from:(double)arg2 to:(double)arg3;
- (NSMutableDictionary *)currentSessions;

@end

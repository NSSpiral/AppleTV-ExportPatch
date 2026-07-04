/* Runtime dump - BRCSyncOperationThrottle
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding>
{
    NSString * _containerID;
    int _lastErrorKind;
    double _delay;
    double _nextTry;
}

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double nextTry;
@property (readonly, nonatomic) int lastErrorKind;
@property (retain, nonatomic) NSString * containerID;

+ (char)supportsSecureCoding;

- (BRCSyncOperationThrottle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)delay;
- (void)clear;
- (void).cxx_destruct;
- (NSString *)containerID;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg0;
- (BRCSyncOperationThrottle *)initWithContainerID:(NSString *)arg0;
- (void)updateAfterSchedulingTask;
- (char)updateForClearingOutOfQuota;
- (void)updateForError:(NSError *)arg0 isSyncDown:(char)arg1;
- (double)nextTry;
- (void)setContainerID:(NSString *)arg0;
- (int)lastErrorKind;

@end

/* Runtime dump - INDiagnosticReport
 * Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

@interface INDiagnosticReport : NSObject <NSSecureCoding>
{
    char _disabled;
    NSString * _pushEnvironment;
    NSString * _pushToken;
    NSString * _pushTopic;
    NSDate * _nextHeartbeatDate;
}

@property (copy, nonatomic) NSString * pushEnvironment;
@property (copy, nonatomic) NSString * pushToken;
@property (copy, nonatomic) NSString * pushTopic;
@property (copy, nonatomic) NSDate * nextHeartbeatDate;
@property (nonatomic) char disabled;

+ (char)supportsSecureCoding;

- (INDiagnosticReport *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (void).cxx_destruct;
- (void)setPushToken:(NSString *)arg0;
- (NSString *)pushToken;
- (NSString *)pushEnvironment;
- (void)setPushEnvironment:(NSString *)arg0;
- (NSString *)pushTopic;
- (void)setPushTopic:(NSString *)arg0;
- (NSDate *)nextHeartbeatDate;
- (void)setNextHeartbeatDate:(NSDate *)arg0;

@end

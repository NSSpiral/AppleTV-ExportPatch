/* Runtime dump - AFAccount
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAccount : NSObject
{
    char _isActive;
    NSString * _identifier;
    NSString * _label;
    NSString * _assistantIdentifier;
    NSString * _speechIdentifier;
    NSString * _hostname;
    NSString * _predefinedServer;
    NSString * _aceHost;
    NSDictionary * _connectionPolicy;
    NSDate * _connectionPolicyDate;
    NSString * _connectionPolicyHostname;
    NSString * _group;
    NSDictionary * _lastSyncDates;
    NSString * _localeIdentifier;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * assistantIdentifier;
@property (copy, nonatomic) NSString * speechIdentifier;
@property (copy, nonatomic) NSString * hostname;
@property (copy, nonatomic) NSString * predefinedServer;
@property (copy, nonatomic) NSString * aceHost;
@property (copy, nonatomic) NSDictionary * connectionPolicy;
@property (copy, nonatomic) NSDate * connectionPolicyDate;
@property (copy, nonatomic) NSString * connectionPolicyHostname;
@property (copy, nonatomic) NSString * group;
@property (copy, nonatomic) NSDictionary * lastSyncDates;
@property (copy, nonatomic) NSString * localeIdentifier;
@property (readonly, nonatomic) char isActive;

- (NSString *)description;
- (char)isActive;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSString *)localeIdentifier;
- (void)setGroup:(NSString *)arg0;
- (NSString *)group;
- (void).cxx_destruct;
- (void)setAssistantIdentifier:(NSString *)arg0;
- (void)setSpeechIdentifier:(NSString *)arg0;
- (void)setPredefinedServer:(NSString *)arg0;
- (void)setAceHost:(NSString *)arg0;
- (void)setConnectionPolicyDate:(NSDate *)arg0;
- (void)setConnectionPolicyHostname:(NSString *)arg0;
- (void)setLastSyncDates:(NSDictionary *)arg0;
- (void)setLocaleIdentifier:(NSString *)arg0;
- (AFAccount *)initWithMessageDictionary:(NSDictionary *)arg0;
- (NSDictionary *)messageDictionary;
- (NSString *)assistantIdentifier;
- (NSString *)speechIdentifier;
- (NSString *)predefinedServer;
- (NSString *)aceHost;
- (NSDate *)connectionPolicyDate;
- (NSString *)connectionPolicyHostname;
- (NSDictionary *)lastSyncDates;
- (void)setHostname:(NSString *)arg0;
- (NSDictionary *)connectionPolicy;
- (void)setConnectionPolicy:(NSDictionary *)arg0;
- (NSString *)hostname;

@end

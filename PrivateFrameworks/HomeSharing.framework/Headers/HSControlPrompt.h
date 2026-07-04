/* Runtime dump - HSControlPrompt
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSControlPrompt : NSObject
{
    char _secureText;
    unsigned int _keyboardType;
    unsigned int _messageType;
    unsigned int _promptID;
    NSString * _string;
    NSString * _subText;
    NSString * _title;
    unsigned int _version;
    unsigned long long _sessionID;
}

@property (nonatomic) unsigned int keyboardType;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned int promptID;
@property (nonatomic) char secureText;
@property (nonatomic) unsigned long long sessionID;
@property (copy, nonatomic) NSString * string;
@property (copy, nonatomic) NSString * subText;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) unsigned int version;

- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (NSString *)string;
- (unsigned int)keyboardType;
- (void)setKeyboardType:(unsigned int)arg0;
- (void)setString:(NSString *)arg0;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (void).cxx_destruct;
- (unsigned long long)sessionID;
- (void)setSessionID:(unsigned long long)arg0;
- (void)setPromptID:(unsigned int)arg0;
- (void)setSecureText:(char)arg0;
- (void)setSubText:(NSString *)arg0;
- (unsigned int)promptID;
- (char)isSecureText;
- (NSString *)subText;

@end

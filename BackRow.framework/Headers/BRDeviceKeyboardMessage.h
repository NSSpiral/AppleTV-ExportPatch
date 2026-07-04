/* Runtime dump - BRDeviceKeyboardMessage
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRDeviceKeyboardMessage : NSObject
{
    NSString * _string;
    NSString * _title;
    NSString * _subText;
    unsigned long long _sessionID;
    int _msgType;
    int _keyboardType;
    int _textInputType;
    char _secureText;
    unsigned int _version;
    unsigned int _minCharacters;
    unsigned int _maxCharacters;
}

+ (unsigned long)vendNewSessionID;
+ (NSArray *)dictionaryToDictionaryArray:(NSArray *)arg0;
+ (NSDictionary *)_keyValueToDictionary:(NSDictionary *)arg0 key:(NSString *)arg1;
+ (NSDictionary *)_dictionaryArraytoDictionary:(NSDictionary *)arg0;

- (char)hasValidSessionID;
- (void)setTextInputType:(int)arg0;
- (void)setMinCharacters:(unsigned int)arg0;
- (void)setMaxCharacters:(unsigned int)arg0;
- (int)textInputType;
- (unsigned int)minCharacters;
- (unsigned int)maxCharacters;
- (char)secureText;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSDictionary *)dictionary;
- (NSString *)title;
- (NSString *)string;
- (int)keyboardType;
- (void)setKeyboardType:(int)arg0;
- (void)setString:(NSString *)arg0;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (unsigned long long)sessionID;
- (void)setSessionID:(unsigned long long)arg0;
- (void)setSecureText:(char)arg0;
- (void)setSubText:(NSString *)arg0;
- (NSString *)subText;
- (int)msgType;
- (void)setMsgType:(int)arg0;

@end

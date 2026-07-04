/* Runtime dump - IMMessageItem
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMessageItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString * _subject;
    NSString * _plainBody;
    unsigned int _error;
    NSArray * _fileTransferGUIDs;
    NSAttributedString * _body;
    NSData * _bodyData;
    NSDate * _timeRead;
    NSDate * _timeDelivered;
    NSDate * _timePlayed;
    unsigned long long _flags;
    long long _replaceID;
    long long _expireState;
}

@property (retain, nonatomic) NSString * subject;
@property (retain, nonatomic) NSAttributedString * body;
@property (retain, nonatomic) NSData * bodyData;
@property (retain, nonatomic) NSDate * timeRead;
@property (retain, nonatomic) NSDate * timeDelivered;
@property (retain, nonatomic) NSDate * timePlayed;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long expireState;
@property (retain, nonatomic) NSArray * fileTransferGUIDs;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) long long replaceID;
@property (nonatomic) char hasDataDetectorResults;
@property (readonly, nonatomic) char isDelivered;
@property (readonly, nonatomic) char isSent;
@property (readonly, nonatomic) char isRead;
@property (readonly, nonatomic) char isPlayed;
@property (readonly, nonatomic) char isFinished;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char isAlert;
@property (readonly, nonatomic) char wasDataDetected;
@property (readonly, nonatomic) char wasDowngraded;
@property (readonly, nonatomic) char isPrepared;
@property (readonly, nonatomic) char isTypingMessage;
@property (readonly, nonatomic) char isLocatingMessage;
@property (readonly, nonatomic) char isEmote;
@property (readonly, nonatomic) char isAudioMessage;
@property (readonly, nonatomic) char isExpirable;
@property (readonly, nonatomic) char isFromExternalSource;
@property (retain, nonatomic) NSString * plainBody;

- (NSDictionary *)copyDictionaryRepresentation;
- (void)setFlags:(unsigned long long)arg0;
- (NSData *)bodyData;
- (void)dealloc;
- (IMMessageItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (IMMessageItem *)initWithDictionary:(NSDictionary *)arg0;
- (IMMessageItem *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (NSAttributedString *)body;
- (<NSURLAuthenticationChallengeSender> *)sender;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (char)isFinished;
- (void)setBody:(NSAttributedString *)arg0;
- (char)isRead;
- (unsigned long long)flags;
- (char)isFromMe;
- (NSDate *)timePlayed;
- (char)isExpirable;
- (char)isAudioMessage;
- (NSString *)plainBody;
- (void)setPlainBody:(NSString *)arg0;
- (NSDate *)timeRead;
- (void)setTimeRead:(NSDate *)arg0;
- (NSDate *)timeDelivered;
- (void)setTimeDelivered:(NSDate *)arg0;
- (void)setTimePlayed:(NSDate *)arg0;
- (void)setBodyData:(NSData *)arg0;
- (NSArray *)fileTransferGUIDs;
- (void)setFileTransferGUIDs:(NSArray *)arg0;
- (long long)replaceID;
- (void)setReplaceID:(long long)arg0;
- (long long)expireState;
- (void)setExpireState:(long long)arg0;
- (void)_updateFlags:(unsigned long long)arg0;
- (void)_generateBodyTextIfNeeded;
- (void)_generateBodyDataIfNeeded;
- (IMMessageItem *)initWithDictionary:(NSDictionary *)arg0 hint:(id)arg1;
- (char)hasDataDetectorResults;
- (IMMessageItem *)initWithSenderInfo:(NSDictionary *)arg0 time:(id)arg1 timeRead:(NSDate *)arg2 timeDelivered:(NSDate *)arg3 timePlayed:(NSDate *)arg4 subject:(NSString *)arg5 body:(NSAttributedString *)arg6 bodyData:(NSData *)arg7 attributes:(NSDictionary *)arg8 fileTransferGUIDs:(NSArray *)arg9 flags:(unsigned long long)arg10 guid:(NSString *)arg11 messageID:(long long)arg12 account:(NSObject *)arg13 accountID:(NSString *)arg14 service:(NSObject *)arg15 handle:(_NSStdIOFileHandle *)arg16 roomName:(NSString *)arg17 unformattedID:(NSString *)arg18 countryCode:(NSString *)arg19 expireState:(long long)arg20 errorType:(unsigned int)arg21;
- (void)adjustIsEmptyFlag;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (void)_clearBodyData;
- (char)isSent;
- (char)isDelivered;
- (char)isPlayed;
- (char)wasDataDetected;
- (char)wasDowngraded;
- (char)isEmote;
- (id)copyWithFlags:(unsigned long long)arg0;
- (IMMessageItem *)initWithSender:(NSObject *)arg0 time:(id)arg1 body:(NSAttributedString *)arg2 attributes:(NSDictionary *)arg3 fileTransferGUIDs:(NSArray *)arg4 flags:(unsigned long long)arg5 error:(unsigned int)arg6 guid:(NSString *)arg7;
- (IMMessageItem *)initWithSender:(NSString *)arg0 time:(NSDate *)arg1 guid:(NSString *)arg2 type:(long long)arg3;
- (IMMessageItem *)initWithSenderInfo:(NSDictionary *)arg0 time:(id)arg1 guid:(NSString *)arg2 messageID:(long long)arg3 account:(NSObject *)arg4 accountID:(NSString *)arg5 service:(NSObject *)arg6 handle:(_NSStdIOFileHandle *)arg7 roomName:(NSString *)arg8 unformattedID:(NSString *)arg9 countryCode:(NSString *)arg10;
- (char)isAlert;
- (char)isPrepared;
- (char)isTypingMessage;
- (char)isLocatingMessage;
- (char)isFromExternalSource;
- (void)setHasDataDetectorResults:(char)arg0;
- (void)setWasDataDetected:(char)arg0;
- (void)setErrorCode:(unsigned int)arg0;
- (unsigned int)errorCode;

@end

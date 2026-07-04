/* Runtime dump - IMItem
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMItem : NSObject <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    NSString * _handle;
    NSString * _service;
    NSString * _account;
    NSString * _unformattedID;
    NSString * _accountID;
    NSString * _roomName;
    NSDictionary * _senderInfo;
    NSString * _guid;
    NSDate * _time;
    NSString * _countryCode;
    id _context;
    long long _messageID;
    long long _type;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString * guid;
@property (nonatomic) long long messageID;
@property (retain, nonatomic) NSString * account;
@property (retain, nonatomic) NSString * roomName;
@property (retain, nonatomic) NSString * service;
@property (retain, nonatomic) NSString * accountID;
@property (retain, nonatomic) NSDate * time;
@property (retain, nonatomic) NSString * handle;
@property (retain, nonatomic) NSString * unformattedID;
@property (retain, nonatomic) NSString * countryCode;
@property (retain, nonatomic) NSString * sender;
@property (retain, nonatomic) NSDictionary * senderInfo;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) char isFromMe;

+ (Class)classForIMItemType:(long long)arg0;

- (NSDictionary *)copyDictionaryRepresentation;
- (void)dealloc;
- (IMItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (IMItem *)initWithDictionary:(NSDictionary *)arg0;
- (void)setType:(long long)arg0;
- (long long)type;
- (IMItem *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)setTime:(NSDate *)arg0;
- (NSDate *)time;
- (NSString *)sender;
- (NSDictionary *)dictionaryRepresentation;
- (void)setSender:(NSString *)arg0;
- (NSString *)accountID;
- (void)setService:(NSString *)arg0;
- (NSString *)service;
- (NSString *)account;
- (void)setAccount:(NSString *)arg0;
- (NSString *)handle;
- (void)setHandle:(NSString *)arg0;
- (void)setGuid:(NSString *)arg0;
- (NSString *)guid;
- (NSString *)roomName;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(NSDictionary *)arg0;
- (IMItem *)initWithIMRemoteObjectSerializedDictionary:(NSDictionary *)arg0;
- (char)isFromMe;
- (IMItem *)initWithSenderInfo:(NSDictionary *)arg0 time:(NSDate *)arg1 guid:(NSString *)arg2 messageID:(long long)arg3 account:(NSString *)arg4 accountID:(NSString *)arg5 service:(NSString *)arg6 handle:(NSString *)arg7 roomName:(NSString *)arg8 unformattedID:(NSString *)arg9 countryCode:(NSString *)arg10 type:(long long)arg11;
- (NSDictionary *)senderInfo;
- (NSString *)unformattedID;
- (IMItem *)initWithSender:(NSString *)arg0 time:(NSDate *)arg1 guid:(NSString *)arg2 type:(long long)arg3;
- (void)setAccountID:(NSString *)arg0;
- (void)setSenderInfo:(NSDictionary *)arg0;
- (void)setRoomName:(NSString *)arg0;
- (void)setUnformattedID:(NSString *)arg0;
- (void)_setMessageID:(long long)arg0;
- (long long)messageID;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)countryCode;

@end

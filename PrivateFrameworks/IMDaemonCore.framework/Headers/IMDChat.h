/* Runtime dump - IMDChat
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChat : NSObject
{
    NSRecursiveLock * _lock;
    NSString * _accountID;
    NSString * _serviceName;
    NSDictionary * _properties;
    NSString * _chatIdentifier;
    NSString * _guid;
    NSString * _groupID;
    NSString * _roomName;
    NSString * _displayName;
    NSString * _lastAddressedLocalHandle;
    NSArray * _participants;
    IMMessageItem * _lastMessage;
    NSMutableDictionary * _chatInfo;
    int _state;
    unsigned char _style;
    unsigned int _unreadCount;
    long long _rowID;
    char _isArchived;
}

@property (copy) NSString * guid;
@property (copy) NSString * chatIdentifier;
@property (copy) NSString * accountID;
@property (copy) NSString * serviceName;
@property (copy) NSArray * participants;
@property unsigned char style;
@property int state;
@property unsigned int unreadCount;
@property long long rowID;
@property (copy) NSString * roomName;
@property (copy) NSString * displayName;
@property (copy) NSString * groupID;
@property (readonly, retain) IMDServiceSession * serviceSession;
@property (readonly, retain) IMDAccount * account;
@property (readonly, retain) IMDService * service;
@property (retain) NSDictionary * properties;
@property (retain) IMMessageItem * lastMessage;
@property (copy) NSString * lastAddressedLocalHandle;
@property (readonly, retain) NSDictionary * dictionaryRepresentation;
@property (readonly, retain) NSDictionary * chatProperties;
@property (readonly) char isArchived;

- (void)removeParticipant:(EKParticipant *)arg0;
- (long long)rowID;
- (void)dealloc;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (unsigned char)style;
- (void)setStyle:(unsigned char)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)displayName;
- (void)setProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (NSString *)accountID;
- (void)setDisplayName:(NSString *)arg0;
- (void)setServiceName:(NSString *)arg0;
- (void)addParticipant:(EKParticipant *)arg0;
- (NSArray *)participants;
- (void)setParticipants:(NSArray *)arg0;
- (IMDService *)service;
- (IMDAccount *)account;
- (NSString *)serviceName;
- (void)setGuid:(NSString *)arg0;
- (NSString *)guid;
- (NSString *)roomName;
- (IMMessageItem *)lastMessage;
- (void)setLastMessage:(IMMessageItem *)arg0;
- (void)setLastAddressedLocalHandle:(NSString *)arg0;
- (void)_updateCachedParticipants;
- (void)addParticipants:(id)arg0;
- (void)removeParticipants:(id)arg0;
- (NSDictionary *)copyDictionaryRepresentation:(char)arg0;
- (void)storeAndBroadcastChatChanges;
- (NSString *)lastAddressedLocalHandle;
- (IMDChat *)initWithAccountID:(NSString *)arg0 service:(IMDService *)arg1 guid:(NSString *)arg2 groupID:(NSString *)arg3 chatIdentifier:(NSString *)arg4 participants:(NSArray *)arg5 roomName:(NSString *)arg6 displayName:(NSString *)arg7 lastAddressedLocalHandle:(NSString *)arg8 properties:(NSDictionary *)arg9 state:(int)arg10 style:(unsigned char)arg11;
- (void)_setUnreadCount:(unsigned int)arg0;
- (char)isArchived;
- (void)_setRowID:(long long)arg0;
- (IMDServiceSession *)serviceSession;
- (NSDictionary *)chatProperties;
- (void)_updateLastMessage:(NSString *)arg0;
- (void)updateProperties:(NSDictionary *)arg0;
- (void)updateGroupID:(NSObject *)arg0;
- (void)updateLastAddressedHandle:(id)arg0;
- (void)updateDisplayName:(NSString *)arg0;
- (void)setAccountID:(NSString *)arg0;
- (void)setRoomName:(NSString *)arg0;
- (unsigned int)unreadCount;
- (NSString *)groupID;
- (void)setGroupID:(NSString *)arg0;
- (NSString *)chatIdentifier;
- (void)setChatIdentifier:(NSString *)arg0;

@end

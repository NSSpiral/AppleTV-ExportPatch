/* Runtime dump - BRCFSEventsPersistedState
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSEventsPersistedState : NSObject <NSSecureCoding>
{
    BRCAccountSession * _session;
    NSUUID * _streamUUID;
    unsigned long long _latestEventID;
    unsigned long long _rootID;
}

@property (retain, nonatomic) NSUUID * streamUUID;
@property (nonatomic) unsigned long long latestEventID;
@property (nonatomic) unsigned long long rootID;

+ (char)supportsSecureCoding;
+ (NSObject *)loadFromClientStateInSession:(NSObject *)arg0;

- (BRCFSEventsPersistedState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setLatestEventID:(unsigned long long)arg0;
- (void)setStreamUUID:(NSUUID *)arg0;
- (void)setRootID:(unsigned long long)arg0;
- (NSUUID *)streamUUID;
- (unsigned long long)latestEventID;
- (unsigned long long)rootID;

@end

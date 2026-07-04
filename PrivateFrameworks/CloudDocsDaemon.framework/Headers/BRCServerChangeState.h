/* Runtime dump - BRCServerChangeState
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>
{
    NSDate * _lastSyncDownDate;
    int _lastSyncDownStatus;
    CKServerChangeToken * _changeToken;
    CKServerChangeToken * _pendingChangeToken;
    unsigned long long _clientRequestID;
}

@property (retain) NSDate * lastSyncDownDate;
@property (nonatomic) int lastSyncDownStatus;
@property (retain, nonatomic) CKServerChangeToken * changeToken;
@property (retain, nonatomic) CKServerChangeToken * pendingChangeToken;
@property (nonatomic) unsigned long long clientRequestID;
@property (readonly, nonatomic) CKServerChangeToken * nextSyncRequestChangeToken;
@property (readonly, nonatomic) char hasNeverSyncedDown;

+ (char)supportsSecureCoding;

- (BRCServerChangeState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (BRCServerChangeState *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CKServerChangeToken *)nextSyncRequestChangeToken;
- (char)updateWithServerChangeToken:(NSString *)arg0 clientRequestID:(unsigned long long)arg1 syncDownStatus:(int)arg2;
- (char)hasNeverSyncedDown;
- (unsigned long long)clientRequestID;
- (int)lastSyncDownStatus;
- (NSDate *)lastSyncDownDate;
- (CKServerChangeToken *)changeToken;
- (CKServerChangeToken *)pendingChangeToken;
- (void)setLastSyncDownDate:(NSDate *)arg0;
- (void)setLastSyncDownStatus:(int)arg0;
- (void)setChangeToken:(CKServerChangeToken *)arg0;
- (void)setPendingChangeToken:(CKServerChangeToken *)arg0;
- (void)setClientRequestID:(unsigned long long)arg0;
- (void)forgetPendingChangeToken;
- (void)forgetChangeTokens;
- (void)forgetClientRequestID;
- (BRCServerChangeState *)initWithServerSyncState:(NSObject *)arg0;

@end

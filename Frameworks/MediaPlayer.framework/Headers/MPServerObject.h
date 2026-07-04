/* Runtime dump - MPServerObject
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObject : NSObject
{
    int _clientPID;
    struct ? * _clientAuditToken;
}

@property (readonly, nonatomic) int clientPID;
@property (readonly, nonatomic) struct ? * clientAuditToken;

+ (struct SCNVector3)_center;

- (void)_registerNotificationsForSelectors;
- (NSString *)_forwardMessage:(NSString *)arg0 userInfo:(NSDictionary *)arg1 auditToken:(struct ? *)arg2;
- (struct ? *)clientAuditToken;
- (MPServerObject *)init;
- (int)clientPID;

@end

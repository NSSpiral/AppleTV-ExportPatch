/* Runtime dump - DAResponse
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResponse : DAAction
{
    int _status;
}

@property (nonatomic) int status;

- (DAResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)status;
- (void)setStatus:(int)arg0;
- (DAResponse *)initWithItemChangeType:(int)arg0 changedItem:(NSObject *)arg1 serverId:(NSString *)arg2 status:(int)arg3;

@end

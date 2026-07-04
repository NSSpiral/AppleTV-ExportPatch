/* Runtime dump - DAMoveAction
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMoveAction : DAAction
{
    NSString * _sourceContainerId;
    NSString * _sourceServerId;
    NSString * _destinationContainerId;
}

@property (retain, nonatomic) NSString * sourceContainerId;
@property (retain, nonatomic) NSString * sourceServerId;
@property (retain, nonatomic) NSString * destinationContainerId;

- (DAMoveAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setSourceContainerId:(NSString *)arg0;
- (void)setSourceServerId:(NSString *)arg0;
- (void)setDestinationContainerId:(NSString *)arg0;
- (NSString *)sourceContainerId;
- (NSString *)sourceServerId;
- (NSString *)destinationContainerId;
- (DAMoveAction *)initWithItemChangeType:(int)arg0 changedItem:(NSObject *)arg1 sourceContainerId:(NSString *)arg2 sourceServerId:(NSString *)arg3 destinationContainerId:(NSString *)arg4;

@end

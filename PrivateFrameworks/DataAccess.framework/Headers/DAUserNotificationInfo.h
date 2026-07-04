/* Runtime dump - DAUserNotificationInfo
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAUserNotificationInfo : NSObject
{
    id _handler;
    NSString * _groupIdentifier;
}

@property (copy, nonatomic) NSString * groupIdentifier;

- (NSString *)groupIdentifier;
- (void)setGroupIdentifier:(NSString *)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void).cxx_destruct;

@end

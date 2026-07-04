/* Runtime dump - IMDServiceController
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDServiceController : NSObject
{
    NSMutableDictionary * _services;
}

@property (readonly, nonatomic) NSArray * allServices;

+ (IMDServiceController *)sharedInstance;

- (void)dealloc;
- (IMDServiceController *)init;
- (NSArray *)allServices;
- (NSString *)serviceWithName:(NSString *)arg0;
- (void)registerSessionClassWithBundle:(NSObject *)arg0;

@end

/* Runtime dump - BKSSystemService
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSSystemService : NSObject
{
    FBSSystemService * _fbsSystemService;
}

- (NSString *)systemApplicationBundleIdentifier;
- (void)openURL:(NSURL *)arg0 application:(NSString *)arg1 options:(NSDictionary *)arg2 clientPort:(unsigned int)arg3 withResult:(NSObject *)arg4;
- (void)cleanupClientPort:(unsigned int)arg0;
- (unsigned int)createClientPort;
- (void)openApplication:(id)arg0 options:(NSDictionary *)arg1 clientPort:(unsigned int)arg2 withResult:(NSObject *)arg3;
- (void)dealloc;
- (BKSSystemService *)init;
- (void)openApplication:(id)arg0 options:(NSDictionary *)arg1 withResult:(NSObject *)arg2;
- (int)pidForApplication:(id)arg0;
- (char)canOpenApplication:(id)arg0 reason:(int *)arg1;
- (void)openDataActivationURL:(NSURL *)arg0 withResult:(NSObject *)arg1;
- (void)terminateApplication:(id)arg0 forReason:(int)arg1 andReport:(char)arg2 withDescription:(NSString *)arg3;
- (void)terminateApplicationGroup:(int)arg0 forReason:(int)arg1 andReport:(char)arg2 withDescription:(NSString *)arg3;

@end

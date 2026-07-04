/* Runtime dump - SBCXPCServiceInterface
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCXPCServiceInterface : NSObject

+ (NSString *)serviceName;
+ (SBCXPCServiceInterface *)serviceInterface;
+ (SBCXPCServiceInterface *)serviceClientInterface;
+ (SBCXPCServiceInterface *)newListener;

- (NSURLConnection *)newServiceConnection;

@end

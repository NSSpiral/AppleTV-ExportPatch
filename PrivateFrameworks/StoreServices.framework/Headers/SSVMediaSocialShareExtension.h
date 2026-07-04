/* Runtime dump - SSVMediaSocialShareExtension
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialShareExtension : NSObject
{
    SSXPCConnection * _connection;
}

@property (readonly, copy, nonatomic) NSString * extensionIdentifier;

- (SSVMediaSocialShareExtension *)init;
- (void).cxx_destruct;
- (NSString *)extensionIdentifier;
- (void)getVisibilityWithCompletionBlock:(id /* block */)arg0;

@end

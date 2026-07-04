/* Runtime dump - BBServerConduit
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBServerConduit : NSObject <BBServerConduitClientInterface>
{
    NSXPCConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BBServerConduit *)serverInterface;
+ (BBServerConduit *)sharedConduit;
+ (BBServerConduit *)clientInterface;

- (void)dealloc;
- (BBServerConduit *)init;
- (void)invalidate;
- (void)sendMessageToDataProviderSectionID:(NSObject *)arg0 name:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)weeAppWithBundleID:(NSString *)arg0 setHiddenFromUser:(char)arg1;
- (void)weeAppWithBundleID:(NSString *)arg0 getHiddenFromUser:(id)arg1;

@end

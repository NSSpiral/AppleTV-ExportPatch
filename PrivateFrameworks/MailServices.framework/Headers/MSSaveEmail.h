/* Runtime dump - MSSaveEmail
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSaveEmail : MSMailDefaultService

+ (void)saveMessageData:(NSData *)arg0 forAccountWithID:(int)arg1 autosaveIdentifier:(NSString *)arg2 completionBlock:(id /* block */)arg3;
+ (void)saveEmail:(MSSaveEmail *)arg0 completionBlock:(id /* block */)arg1;

- (void)_simulateServicesMethod:(NSString *)arg0 arguments:(NSDictionary *)arg1 callback:(id /* block */)arg2;
- (void)_saveMessageData:(NSData *)arg0 forAccountWithID:(int)arg1 autosaveIdentifier:(NSString *)arg2 completionBlock:(id /* block */)arg3;
- (void)_saveEmail:(MSSaveEmail *)arg0 completionBlock:(id /* block */)arg1;

@end

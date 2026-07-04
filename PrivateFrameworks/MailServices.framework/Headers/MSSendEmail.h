/* Runtime dump - MSSendEmail
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSendEmail : MSMailDefaultService

+ (NSData *)sendMessageData:(NSData *)arg0 autosaveIdentifier:(NSString *)arg1 completionBlock:(id /* block */)arg2;
+ (MSSendEmail *)sendEmail:(MSSendEmail *)arg0 playSound:(char)arg1 completionBlock:(id /* block */)arg2;

- (void)_simulateServicesMethod:(NSString *)arg0 arguments:(NSDictionary *)arg1 callback:(id /* block */)arg2;
- (void)_sendMessageData:(NSData *)arg0 autosaveIdentifier:(NSString *)arg1 completionBlock:(id /* block */)arg2;
- (void)_sendEmail:(MSSendEmail *)arg0 playSound:(char)arg1 completionBlock:(id /* block */)arg2;

@end

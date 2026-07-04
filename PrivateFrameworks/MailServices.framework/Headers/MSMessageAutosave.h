/* Runtime dump - MSMessageAutosave
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSMessageAutosave : MSMailDefaultService

+ (void)autosaveMessageData:(NSData *)arg0 withIdentifier:(NSString *)arg1 handler:(id /* block */)arg2;
+ (void)removeAutosavedMessageWithIdentifier:(NSString *)arg0;
+ (NSString *)autosavedMessageDataWithIdentifier:(NSString *)arg0 error:(id *)arg1;
+ (char)hasAutosavedMessageWithIdentifier:(NSString *)arg0;

@end

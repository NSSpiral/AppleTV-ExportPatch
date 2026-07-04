/* Runtime dump - MFIMAPResponseConsumer
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPResponseConsumer : NSObject
{
    NSMutableDictionary * _consumersBySection;
}

- (void)dealloc;
- (void)done;
- (void)addConsumer:(NSObject *)arg0 forSection:(struct CGSize)arg1;
- (void)appendData:(NSData *)arg0 forSection:(struct CGSize)arg1;
- (NSMutableDictionary *)consumersBySection;

@end

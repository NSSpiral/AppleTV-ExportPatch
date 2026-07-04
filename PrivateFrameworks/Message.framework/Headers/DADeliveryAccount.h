/* Runtime dump - DADeliveryAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface DADeliveryAccount : DeliveryAccount
{
    DAMailAccount * _DAMailAccount;
}

- (void)dealloc;
- (NSString *)newDeliveryWithMessage:(NSString *)arg0;
- (NSDictionary *)newDeliveryWithHeaders:(NSDictionary *)arg0 mixedContent:(NSArray *)arg1 textPartsAreHTML:(char)arg2;
- (NSDictionary *)newDeliveryWithHeaders:(NSDictionary *)arg0 HTML:(id)arg1 plainTextAlternative:(MFPlainTextDocument *)arg2 other:(id)arg3 charsets:(NSArray *)arg4;
- (Class)deliveryClass;
- (id)mailAccountIfAvailable;
- (DADeliveryAccount *)initWithDAMailAccount:(NSObject *)arg0;

@end

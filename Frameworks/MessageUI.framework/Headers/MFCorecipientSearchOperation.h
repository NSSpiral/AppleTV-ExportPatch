/* Runtime dump - MFCorecipientSearchOperation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCorecipientSearchOperation : MFContactsSearchOperation
{
    NSString * _bundleIdentifier;
    NSSet * _otherRecipients;
    unsigned int _implicitGroupThreshold;
}

+ (MFCorecipientSearchOperation *)operationWithAddressBook:(void *)arg0 owner:(NSObject *)arg1 otherRecipients:(NSSet *)arg2 taskID:(NSNumber *)arg3 properties:(NSDictionary *)arg4 bundleIdentifier:(NSString *)arg5 implicitGroupThreshold:(unsigned int)arg6;

- (void)dealloc;
- (void)main;

@end

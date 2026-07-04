/* Runtime dump - MFRecentsSearchOperation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecentsSearchOperation : MFContactsSearchOperation
{
    NSString * _bundleIdentifier;
    unsigned int _implicitGroupThreshold;
    unsigned int _queryOptions;
}

+ (MFRecentsSearchOperation *)operationWithAddressBook:(void *)arg0 owner:(NSObject *)arg1 text:(NSString *)arg2 taskID:(NSNumber *)arg3 properties:(NSDictionary *)arg4 bundleIdentifier:(NSString *)arg5 implicitGroupThreshold:(unsigned int)arg6 queryOptions:(unsigned int)arg7;

- (void)dealloc;
- (unsigned int)type;
- (void)main;

@end

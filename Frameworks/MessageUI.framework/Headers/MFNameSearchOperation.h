/* Runtime dump - MFNameSearchOperation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFNameSearchOperation : _MFAddressBookSearchOperation <ABPredicateDelegate>
{
    struct __CFArray * _uids;
    struct __CFArray * _addresses;
    struct __CFArray * _identifiers;
    struct __CFArray * _properties;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFNameSearchOperation *)operationWithAddressBook:(void *)arg0 owner:(NSObject *)arg1 text:(NSString *)arg2 taskID:(NSNumber *)arg3 properties:(struct __CFArray *)arg4;

- (char)predicateShouldContinue:(id)arg0;
- (char)predicateShouldContinue:(id)arg0 afterFindingRecord:(void *)arg1;
- (struct __CFArray *)copyArrayOfUIDsMatchingText:(NSString *)arg0 addresses:(struct __CFArray * *)arg1 identifiers:(struct __CFArray *)arg2 properties:(struct __CFArray * *)arg3;
- (void)dealloc;

@end

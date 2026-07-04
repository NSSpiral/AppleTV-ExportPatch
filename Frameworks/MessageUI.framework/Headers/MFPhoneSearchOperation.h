/* Runtime dump - MFPhoneSearchOperation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFPhoneSearchOperation : _MFAddressBookPropertySearchOperation <ABPredicateDelegate>
{
    struct __CFString * _countryCode;
    struct __CFArray * _uids;
    struct __CFArray * _addresses;
    struct __CFArray * _identifiers;
    NSString * _searchTerm;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)property;

- (char)predicateShouldContinue:(id)arg0;
- (char)predicateShouldContinue:(id)arg0 afterFindingRecord:(void *)arg1;
- (struct __CFArray *)copyArrayOfUIDsMatchingText:(NSString *)arg0 addresses:(struct __CFArray * *)arg1 identifiers:(struct __CFArray *)arg2;
- (void)dealloc;

@end

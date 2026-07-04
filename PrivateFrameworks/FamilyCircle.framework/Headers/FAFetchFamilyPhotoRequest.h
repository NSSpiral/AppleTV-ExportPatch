/* Runtime dump - FAFetchFamilyPhotoRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest
{
    char _localFallback;
    char _useMonogramAsLastResort;
    NSNumber * _memberDSID;
    NSString * _memberHashedDSID;
    unsigned int _requestedSize;
    int _monogramStyle;
    NSString * _fullname;
    NSString * _emailAddress;
    NSString * _phoneNumber;
    double _requiredWidth;
    double _requiredHeight;
    double _monogramDiameter;
}

@property (readonly, copy) NSNumber * memberDSID;
@property (readonly, copy) NSString * memberHashedDSID;
@property (readonly) char localFallback;
@property (readonly) unsigned int requestedSize;
@property double requiredWidth;
@property double requiredHeight;
@property double monogramDiameter;
@property char useMonogramAsLastResort;
@property int monogramStyle;
@property (copy) NSString * fullname;
@property (copy) NSString * emailAddress;
@property (copy) NSString * phoneNumber;

- (void)setPhoneNumber:(NSString *)arg0;
- (FAFetchFamilyPhotoRequest *)init;
- (NSString *)phoneNumber;
- (void).cxx_destruct;
- (double)requiredHeight;
- (unsigned int)requestedSize;
- (NSNumber *)memberDSID;
- (void)startRequestWithCompletionHandler:(id /* block */)arg0;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (FAFetchFamilyPhotoRequest *)initWithFamilyMemberDSID:(NSNumber *)arg0 size:(unsigned int)arg1 localFallback:(char)arg2;
- (void)setMonogramDiameter:(double)arg0;
- (void)setMonogramStyle:(int)arg0;
- (NSDictionary *)requestOptions;
- (int)monogramStyle;
- (double)monogramDiameter;
- (NSString *)fullname;
- (char)useMonogramAsLastResort;
- (NSString *)memberHashedDSID;
- (char)localFallback;
- (FAFetchFamilyPhotoRequest *)initWithFamilyMemberHashedDSID:(id)arg0 size:(unsigned int)arg1 localFallback:(char)arg2;
- (double)requiredWidth;
- (void)setRequiredWidth:(double)arg0;
- (void)setRequiredHeight:(double)arg0;
- (void)setUseMonogramAsLastResort:(char)arg0;
- (void)setFullname:(NSString *)arg0;

@end

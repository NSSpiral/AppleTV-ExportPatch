/* Runtime dump - AAUIProfilePictureStore
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIProfilePictureStore : NSObject
{
    ACAccount * _account;
    ACAccountStore * _accountStore;
    AAGrandSlamSigner * _grandSlamSigner;
    ABMonogrammer * _monogrammer;
    NSOperationQueue * _networkingQueue;
    char _didBeginUsingAddressBookSingleton;
    float _pictureDiameter;
    int _pictureStyle;
}

@property (nonatomic) float pictureDiameter;
@property (nonatomic) int pictureStyle;

- (void)dealloc;
- (AAUIProfilePictureStore *)init;
- (void).cxx_destruct;
- (float)pictureDiameter;
- (void)_invalidateMonogrammer;
- (ABMonogrammer *)_monogrammer;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (NSString *)_fallbackProfilePictureForPersonWithFirstName:(NSString *)arg0 lastName:(NSString *)arg1;
- (UIImage *)_correctlySizedImageFromImage:(UIImage *)arg0;
- (id)_meCardPicture;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(NSObject *)arg0 serverCacheTag:(NSString *)arg1 completion:(id /* block */)arg2;
- (void)_fetchProfilePictureWithRequest:(NSURLRequest *)arg0 personID:(NSString *)arg1 completion:(id /* block */)arg2;
- (id)cacheablePictureForPicture:(id)arg0 cropRect:(struct CGRect)arg1;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg0;
- (id)_familyMemberPersonPicture:(id)arg0;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(NSObject *)arg0 serverCacheTag:(NSString *)arg1 completion:(id /* block */)arg2;
- (UIImage *)_monogramPersonImage:(void *)arg0;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMember:(id)arg0;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberEmailAddress:(NSString *)arg0;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberFirstAndLastNames:(id)arg0;
- (char)_onAddressBookQueue_peopleLinkedToMeCardContainsRecordID:(int)arg0;
- (void)_updateServerProfilePictureForAccountOwner:(NSObject *)arg0 cropRect:(struct CGRect)arg1;
- (char)_onAddressBookQueue_personSyncsWithiCloud:(void *)arg0;
- (void)_updateServerProfilePictureWithRequest:(NSURLRequest *)arg0;
- (id)_profilePictureForPicture:(id)arg0 crop:(char)arg1 cropRect:(struct CGRect)arg2 cacheable:(struct CGSize)arg3;
- (void)setPictureDiameter:(float)arg0;
- (void)setPictureStyle:(int)arg0;
- (NSObject *)profilePictureForAccountOwner;
- (void)fetchProfilePictureForAccountOwner:(NSObject *)arg0;
- (void)fetchProfilePictureForFamilyMember:(id)arg0 completion:(id /* block */)arg1;
- (void)setProfilePictureForAccountOwner:(NSObject *)arg0 cropRect:(struct CGRect)arg1;
- (id)profilePictureForPicture:(id)arg0;
- (id)profilePictureForPicture:(id)arg0 cropRect:(struct CGRect)arg1;
- (int)pictureStyle;
- (AAUIProfilePictureStore *)initWithAppleAccount:(NSObject *)arg0 store:(EKEventStore *)arg1;
- (NSString *)profilePictureForFamilyMemberWithFirstName:(NSString *)arg0 lastName:(NSString *)arg1 email:(SAPhonePlayVoiceMail *)arg2;
- (void)setProfilePictureForAccountOwner:(NSObject *)arg0;
- (AAUIProfilePictureStore *)initWithGrandSlamSigner:(AAGrandSlamSigner *)arg0;
- (AAUIProfilePictureStore *)initWithAppleAccount:(NSObject *)arg0 grandSlamAccount:(ACAccount *)arg1 accountStore:(ACAccountStore *)arg2;
- (id)profilePictureForFamilyMember:(id)arg0;

@end

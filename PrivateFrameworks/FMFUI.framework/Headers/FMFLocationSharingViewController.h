/* Runtime dump - FMFLocationSharingViewController
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal>
{
    char _isMyLocationEnabled;
    char _useFamilyCirclePhotos;
    char _useFamilyCirclePhotosLoaded;
    NSArray * _allFollowersHandles;
    NSArray * _followersHandles;
    NSArray * _followersSpecifiers;
    NSArray * _familySpecifiers;
    NSMutableDictionary * _dsidToFamilyPhoto;
    NSArray * _hashedFamilyDsids;
    void * _addressBook;
    FMFHandle * _lastSelectedHandle;
    NSArray * _familyMembers;
    UIAlertView * _genericErrorAlert;
}

@property (retain, nonatomic) NSArray * allFollowersHandles;
@property (retain, nonatomic) NSArray * followersHandles;
@property (retain, nonatomic) NSArray * followersSpecifiers;
@property (retain, nonatomic) NSArray * familySpecifiers;
@property (retain, nonatomic) NSMutableDictionary * dsidToFamilyPhoto;
@property (retain, nonatomic) NSArray * hashedFamilyDsids;
@property (nonatomic) void * addressBook;
@property (retain, nonatomic) FMFHandle * lastSelectedHandle;
@property (nonatomic) char isMyLocationEnabled;
@property (retain, nonatomic) NSArray * familyMembers;
@property (retain, nonatomic) UIAlertView * genericErrorAlert;
@property (nonatomic) char useFamilyCirclePhotos;
@property (nonatomic) char useFamilyCirclePhotosLoaded;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void).cxx_destruct;
- (void)abChanged:(NSNotification *)arg0;
- (void)networkReachabilityUpdated:(char)arg0;
- (void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg0;
- (void)didUpdateActiveDeviceList:(NSSet *)arg0;
- (void)didReceiveServerError:(NSError *)arg0;
- (void)didUpdateHidingStatus:(char)arg0;
- (char)isMyLocationEnabled;
- (void)setDsidToFamilyPhoto:(NSMutableDictionary *)arg0;
- (void)reloadSpecifiersOnMainQueue;
- (void)_loadFamilyMembers:(char)arg0;
- (void)_setShareSwitchEnabled:(id)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)_shareSwitchEnabled:(id)arg0;
- (void)_meDeviceSpecifierWasTapped:(id)arg0;
- (id)_specifierForFamilyMember:(id)arg0;
- (void)setFamilySpecifiers:(NSArray *)arg0;
- (NSArray *)sortedFollowersWithCombinedRecords:(struct tmat4x4<float> *)arg0;
- (void)setAllFollowersHandles:(NSArray *)arg0;
- (NSArray *)allFollowersHandles;
- (NSArray *)hashedFamilyDsids;
- (id)_specifierForHandle:(id)arg0;
- (void)setFollowersSpecifiers:(NSArray *)arg0;
- (void)setFollowersHandles:(NSArray *)arg0;
- (NSArray *)followersSpecifiers;
- (void)setHashedFamilyDsids:(NSArray *)arg0;
- (char)useFamilyCirclePhotos;
- (void)_loadFamilyMemberPhotos;
- (NSMutableDictionary *)dsidToFamilyPhoto;
- (void *)recordForHandle:(id)arg0;
- (id)monogramForHandle:(id)arg0;
- (void)_showHandleDetails:(id)arg0;
- (id)offerTimeRemaining:(double)arg0;
- (void)_showFamilyMemberDetails:(id)arg0;
- (char)_isFamilyMemberAFollower:(id)arg0;
- (id)formatStringForHours:(int)arg0 minutes:(int)arg1;
- (void)displayGenericErrorAlert;
- (UIAlertView *)genericErrorAlert;
- (void)setGenericErrorAlert:(UIAlertView *)arg0;
- (NSArray *)followersHandles;
- (void)setLastSelectedHandle:(FMFHandle *)arg0;
- (void)_pushAddressBookUIForHandle:(id)arg0;
- (NSArray *)familySpecifiers;
- (char)_isHandleAFollower:(id)arg0;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg0;
- (int)identifierOfProperty:(int)arg0 withHandleId:(NSObject *)arg1 forRecord:(void *)arg2;
- (void)addRemoveActionToPersonViewController:(BRController *)arg0;
- (void)addShareActionToPersonViewController:(BRController *)arg0;
- (void *)unknownRecordForData:(NSData *)arg0 property:(int)arg1;
- (char)phoneNumberMatches:(id)arg0 phone2:(UIKBRenderFactoryEmoji_iPhone *)arg1;
- (NSSet *)stringByKeepingCharacterSet:(NSSet *)arg0 inString:(NSAttributedString *)arg1;
- (NSString *)reverseString:(NSString *)arg0;
- (void)removeFollower:(id)arg0;
- (void)shareMyLocation:(NSObject *)arg0;
- (FMFHandle *)lastSelectedHandle;
- (id)_followerHandleWithHashedDSID:(NSString *)arg0;
- (char)noMeDeviceSelected:(id)arg0;
- (void)setIsMyLocationEnabled:(char)arg0;
- (void)setUseFamilyCirclePhotos:(char)arg0;
- (char)useFamilyCirclePhotosLoaded;
- (void)setUseFamilyCirclePhotosLoaded:(char)arg0;
- (void)didStartSharingMyLocationWithHandle:(FMFHandle *)arg0;
- (void)didStopSharingMyLocationWithHandle:(FMFHandle *)arg0;
- (void *)addressBook;
- (NSArray *)specifiers;
- (NSArray *)familyMembers;
- (void)setFamilyMembers:(NSArray *)arg0;

@end

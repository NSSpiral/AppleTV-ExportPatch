/* Runtime dump - HMDHomeData
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeData : NSObject
{
    NSArray * _homes;
    NSArray * _accessories;
    NSUUID * _primaryHomeUUID;
    int _dataVersion;
    NSUUID * _dataTag;
    NSArray * _uuidsOfRemovedHomes;
    NSArray * _incomingInvitations;
    unsigned int _assistantGenerationCounter;
    HMDApplicationVendorIDStore * _appVendorIDStore;
    NSArray * _pendingUserManagementOperations;
}

@property (readonly, copy, nonatomic) NSArray * homes;
@property (readonly, copy, nonatomic) NSArray * accessories;
@property (readonly, copy, nonatomic) NSUUID * primaryHomeUUID;
@property (readonly, nonatomic) int dataVersion;
@property (readonly, copy, nonatomic) NSUUID * dataTag;
@property (readonly, copy, nonatomic) NSArray * uuidsOfRemovedHomes;
@property (readonly, copy, nonatomic) NSArray * incomingInvitations;
@property (readonly, nonatomic) unsigned int assistantGenerationCounter;
@property (readonly, nonatomic) HMDApplicationVendorIDStore * appVendorIDStore;
@property (readonly, copy, nonatomic) NSArray * pendingUserManagementOperations;

- (void).cxx_destruct;
- (NSArray *)accessories;
- (NSArray *)pendingUserManagementOperations;
- (HMDHomeData *)initWithHomes:(NSArray *)arg0 accessories:(NSArray *)arg1 primaryHomeUUID:(NSUUID *)arg2 dataVersion:(int)arg3 dataTag:(NSUUID *)arg4 uuidsOfRemovedHomes:(NSArray *)arg5 incomingInvitations:(NSArray *)arg6 assistantGenerationCounter:(unsigned int)arg7 appVendorIDStore:(HMDApplicationVendorIDStore *)arg8 pendingUserManagementOperations:(NSArray *)arg9;
- (NSArray *)homes;
- (NSUUID *)primaryHomeUUID;
- (int)dataVersion;
- (NSUUID *)dataTag;
- (NSArray *)uuidsOfRemovedHomes;
- (NSArray *)incomingInvitations;
- (unsigned int)assistantGenerationCounter;
- (HMDApplicationVendorIDStore *)appVendorIDStore;

@end

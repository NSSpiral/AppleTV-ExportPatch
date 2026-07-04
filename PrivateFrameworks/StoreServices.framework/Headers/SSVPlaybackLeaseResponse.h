/* Runtime dump - SSVPlaybackLeaseResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse

@property (readonly, nonatomic) double leaseDuration;
@property (readonly, nonatomic) char offlineSlotAvailable;
@property (readonly, copy, nonatomic) NSData * leaseInfoData;
@property (readonly, copy, nonatomic) NSData * subscriptionKeyBagData;

- (NSString *)itemForItemIdentifier:(NSString *)arg0;
- (double)leaseDuration;
- (char)isOfflineSlotAvailable;
- (NSData *)leaseInfoData;
- (NSData *)subscriptionKeyBagData;

@end

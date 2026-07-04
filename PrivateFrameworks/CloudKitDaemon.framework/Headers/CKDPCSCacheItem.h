/* Runtime dump - CKDPCSCacheItem
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSCacheItem : NSObject
{
    CKDPCSData * _pcsData;
    NSObject<OS_dispatch_group> * _fetchGroup;
    NSError * _fetchError;
}

@property (retain, nonatomic) CKDPCSData * pcsData;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * fetchGroup;
@property (retain, nonatomic) NSError * fetchError;

- (void).cxx_destruct;
- (NSObject<OS_dispatch_group> *)fetchGroup;
- (void)setFetchGroup:(NSObject<OS_dispatch_group> *)arg0;
- (void)setPcsData:(CKDPCSData *)arg0;
- (CKDPCSData *)pcsData;
- (CKDPCSCacheItem *)initWithFetchGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSError *)fetchError;
- (void)setFetchError:(NSError *)arg0;

@end

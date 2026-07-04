/* Runtime dump - CKDDiscoverAllContactsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverAllContactsOperation : CKDDiscoverUserInfosOperation

- (void)main;
- (CKDDiscoverAllContactsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)_handleDiscoveredInfo:(NSDictionary *)arg0 emailToDiscover:(id)arg1;
- (void)_discoverEmailsByBatch:(id)arg0;

@end

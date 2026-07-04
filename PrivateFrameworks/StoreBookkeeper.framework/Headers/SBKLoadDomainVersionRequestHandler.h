/* Runtime dump - SBKLoadDomainVersionRequestHandler
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing>
{
    char _loadsRemoteItemCount;
    unsigned int _responseItemCount;
    unsigned int _itemCount;
    SBKSyncTransaction * _transaction;
}

@property char loadsRemoteItemCount;
@property (readonly) unsigned int responseItemCount;
@property (copy) NSString * responseDomainVersion;
@property unsigned int itemCount;
@property (retain) SBKSyncTransaction * transaction;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)conflictDetectionType;

- (void)setTransaction:(SBKSyncTransaction *)arg0;
- (void).cxx_destruct;
- (unsigned int)itemCount;
- (SBKSyncTransaction *)transaction;
- (void)runWithCompletionHandler:(id /* block */)arg0;
- (char)loadsRemoteItemCount;
- (void)setLoadsRemoteItemCount:(char)arg0;
- (unsigned int)responseItemCount;
- (void)setItemCount:(unsigned int)arg0;

@end

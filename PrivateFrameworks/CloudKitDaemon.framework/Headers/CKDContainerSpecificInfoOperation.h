/* Runtime dump - CKDContainerSpecificInfoOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerSpecificInfoOperation : CKDOperation
{
    char _needUserID;
    CKDContainerInfo * _containerInfo;
    NSObject<OS_dispatch_group> * _infoFetchedGroup;
}

@property (nonatomic) char needUserID;
@property (copy, nonatomic) CKDContainerInfo * containerInfo;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * infoFetchedGroup;

- (void)setCompletionBlock:(id /* block */)arg0;
- (void)main;
- (void).cxx_destruct;
- (CKDContainerSpecificInfoOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (char)shouldCheckAppVersion;
- (char)needUserID;
- (void)setContainerInfo:(CKDContainerInfo *)arg0;
- (CKDContainerInfo *)containerInfo;
- (void)setNeedUserID:(char)arg0;
- (NSObject<OS_dispatch_group> *)infoFetchedGroup;

@end

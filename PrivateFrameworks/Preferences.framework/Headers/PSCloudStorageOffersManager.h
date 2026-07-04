/* Runtime dump - PSCloudStorageOffersManager
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate>
{
    CommerceRemoteUIDelegate * _commerceDelegate;
    <PSCloudStorageOffersManagerDelegate> * _delegate;
    unsigned long long _requiredStorageThreshold;
}

@property (nonatomic) <PSCloudStorageOffersManagerDelegate> * delegate;
@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<PSCloudStorageOffersManagerDelegate> *)arg0;
- (<PSCloudStorageOffersManagerDelegate> *)delegate;
- (unsigned long long)requiredStorageThreshold;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg0 willPresentObjectModel:(NSObject *)arg1 page:(id)arg2;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg0 loadDidFailWithError:(NSError *)arg1;
- (void)commerceDelegateDidCancel:(id)arg0;
- (void)beginFlowWithNavigationController:(UINavigationController *)arg0 modally:(char)arg1;
- (void)setRequiredStorageThreshold:(unsigned long long)arg0;
- (void)cancelLoad;

@end

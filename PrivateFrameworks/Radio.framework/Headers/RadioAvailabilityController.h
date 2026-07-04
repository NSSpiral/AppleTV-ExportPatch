/* Runtime dump - RadioAvailabilityController
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAvailabilityController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSNumber * _lastActiveAccountUniqueIdentifier;
    char _radioAvailable;
}

@property (readonly, nonatomic) char radioAvailable;

- (char)isRadioAvailable;
- (void)_storeFrontDidChangeNotification:(NSNotification *)arg0;
- (void)dealloc;
- (RadioAvailabilityController *)init;
- (void).cxx_destruct;
- (NSString *)_currentStoreFrontIdentifier;
- (NSString *)_userDefaultsDomain;
- (void)_reloadRadioAvailability;

@end

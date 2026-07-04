/* Runtime dump - HMLocalization
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMLocalization : NSObject
{
    NSDictionary * _localizedStrings;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (readonly, nonatomic) NSDictionary * localizedStrings;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;

+ (HMLocalization *)sharedManager;

- (HMLocalization *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (void)_updateLocalizedStrings;
- (NSDictionary *)localizedStrings;
- (NSString *)getLocalizedString:(NSString *)arg0;
- (NSString *)getLocalizedOrCustomString:(NSString *)arg0;

@end

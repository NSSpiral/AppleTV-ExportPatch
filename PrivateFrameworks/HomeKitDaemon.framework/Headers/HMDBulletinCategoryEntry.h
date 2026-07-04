/* Runtime dump - HMDBulletinCategoryEntry
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinCategoryEntry : NSObject
{
    NSString * _serviceType;
    NSString * _characteristicType;
}

@property (retain, nonatomic) NSString * serviceType;
@property (retain, nonatomic) NSString * characteristicType;

- (HMDBulletinCategoryEntry *)init;
- (void).cxx_destruct;
- (NSString *)characteristicType;
- (NSString *)serviceType;
- (void)setServiceType:(NSString *)arg0;
- (void)setCharacteristicType:(NSString *)arg0;
- (HMDBulletinCategoryEntry *)initWithServiceType:(NSString *)arg0 characteristicType:(NSString *)arg1;
- (char)isRelatedToCharacteristic:(id)arg0;

@end

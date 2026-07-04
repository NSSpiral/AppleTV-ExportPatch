/* Runtime dump - ATVCupidMyPhotoStream
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAccessObject;
@interface ATVCupidMyPhotoStream : ATVDataCollection
{
    ACAccount * _appleAccount;
}

@property (retain, nonatomic) ACAccount * appleAccount;

+ (NSNumber *)idForAppleAccount:(NSObject *)arg0;
+ (NSObject *)collectionWithDataClient:(NSObject *)arg0 accessObject:(ATVCupidAccessObject *)arg1;

- (ATVCupidMyPhotoStream *)initWithDataClient:(ATVDataClient *)arg0 appleAccount:(ACAccount *)arg1;
- (void)setAppleAccount:(ACAccount *)arg0;
- (void).cxx_destruct;
- (ACAccount *)appleAccount;
- (ATVCupidMyPhotoStream *)initWithDataClient:(ATVDataClient *)arg0;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end

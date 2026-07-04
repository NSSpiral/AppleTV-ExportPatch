/* Runtime dump - ATVCupidRecentUpdatesStream
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAccessObject;
@interface ATVCupidRecentUpdatesStream : ATVDataCollection
{
    ACAccount * _appleAccount;
}

@property (retain, nonatomic) ACAccount * appleAccount;

+ (NSNumber *)idForAppleAccount:(NSObject *)arg0;
+ (NSObject *)collectionWithDataClient:(NSObject *)arg0 accessObject:(ATVCupidAccessObject *)arg1;

- (ATVCupidRecentUpdatesStream *)initWithDataClient:(ATVDataClient *)arg0 appleAccount:(ACAccount *)arg1;
- (void)setAppleAccount:(ACAccount *)arg0;
- (void).cxx_destruct;
- (ACAccount *)appleAccount;
- (ATVCupidRecentUpdatesStream *)initWithDataClient:(ATVDataClient *)arg0;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end

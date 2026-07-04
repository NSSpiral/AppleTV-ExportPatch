/* Runtime dump - ATVAirPlayDataClient
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVAirPlayDataClient : ATVDataClient

+ (ATVAirPlayDataClient *)airPlayDataClient;

- (void)concreteDataClientConnect;
- (char)supportsProperty:(NSObject *)arg0;

@end

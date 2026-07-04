/* Runtime dump - ATVHSServiceClientDataClient
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSServiceClientDataClient : ATVHSDataClient

+ (void)initialize;

- (void)concreteDataClientConnect;
- (void)_handleRequestFailed;
- (void)_handleBadSessionIDError;

@end

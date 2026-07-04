/* Runtime dump - ATVDatabasesResponse
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVDatabasesResponse : ATVDMAPResponse

- (char)_addCloudDatabaseToResponseBuffer:(NSObject *)arg0;
- (char)_addRadioDatabaseToResponseBuffer:(NSObject *)arg0;
- (char)_addCloudRentalsDatabaseToResponseBuffer:(NSObject *)arg0;
- (NSData *)responseBody;

@end

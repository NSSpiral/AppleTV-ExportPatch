/* Runtime dump - CallDBManagerServer
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBManagerServer : CallDBManager

+ (NSString *)getDestinationModelForVersion:(int)arg0;
+ (NSObject *)getDestinationModel:(int)arg0;

- (NSObject *)permDBLocation;
- (char)bootUpDBAtLocation:(NSObject *)arg0 isEncrypted:(char)arg1;
- (NSObject *)tempDBLocation;
- (void)createPermanent;
- (void)createTemporary;
- (void)moveCallsFromTempDatabase;

@end

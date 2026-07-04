/* Runtime dump - SAMPCreateRadioStation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber * startPlaying;
@property (copy, nonatomic) NSURL * stationUrl;

+ (SAMPCreateRadioStation *)createRadioStation;
+ (NSDictionary *)createRadioStationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)startPlaying;
- (void)setStartPlaying:(NSNumber *)arg0;
- (NSURL *)stationUrl;
- (void)setStationUrl:(NSURL *)arg0;

@end

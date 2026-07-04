/* Runtime dump - SAClockShowWorldClock
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockShowWorldClock : SABaseClientBoundCommand

@property (retain, nonatomic) SAClockObject * clock;

+ (SAClockShowWorldClock *)showWorldClock;
+ (NSDictionary *)showWorldClockWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setClock:(SAClockObject *)arg0;
- (SAClockObject *)clock;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

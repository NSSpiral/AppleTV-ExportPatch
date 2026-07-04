/* Runtime dump - SANPSetShuffleMode
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSetShuffleMode : SADomainCommand

@property (copy, nonatomic) NSString * shuffleMode;

+ (SANPSetShuffleMode *)setShuffleMode;
+ (NSDictionary *)setShuffleModeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)shuffleMode;
- (void)setShuffleMode:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

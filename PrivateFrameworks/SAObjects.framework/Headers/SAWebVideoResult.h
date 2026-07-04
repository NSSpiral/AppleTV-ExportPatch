/* Runtime dump - SAWebVideoResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebVideoResult : SAWebImageResult

@property (copy, nonatomic) NSNumber * runTimeInMilliseconds;

+ (NSObject *)videoResult;
+ (NSDictionary *)videoResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSNumber *)runTimeInMilliseconds;
- (void)setRunTimeInMilliseconds:(NSNumber *)arg0;

@end

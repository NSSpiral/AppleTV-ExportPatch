/* Runtime dump - SAMPSetOutputSource
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetOutputSource : SADomainCommand

@property (copy, nonatomic) NSURL * outputSourceId;

+ (NSObject *)setOutputSource;
+ (NSDictionary *)setOutputSourceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)outputSourceId;
- (void)setOutputSourceId:(NSURL *)arg0;

@end

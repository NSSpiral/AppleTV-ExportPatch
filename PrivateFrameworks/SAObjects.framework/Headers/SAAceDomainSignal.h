/* Runtime dump - SAAceDomainSignal
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * domain;

+ (NSObject *)aceDomainSignal;
+ (NSDictionary *)aceDomainSignalWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)domain;
- (void)setDomain:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end

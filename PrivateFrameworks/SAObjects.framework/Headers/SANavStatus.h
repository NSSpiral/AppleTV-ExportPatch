/* Runtime dump - SANavStatus
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANavStatus : AceObject <SABackgroundContextObject>

@property (copy, nonatomic) NSString * statusValue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SANavStatus *)navStatus;
+ (NSDictionary *)navStatusWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)statusValue;
- (void)setStatusValue:(NSString *)arg0;

@end

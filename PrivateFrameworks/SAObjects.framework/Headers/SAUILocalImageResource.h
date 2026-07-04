/* Runtime dump - SAUILocalImageResource
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUILocalImageResource : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * imageCode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAUILocalImageResource *)localImageResource;
+ (NSDictionary *)localImageResourceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)imageCode;
- (void)setImageCode:(NSString *)arg0;

@end

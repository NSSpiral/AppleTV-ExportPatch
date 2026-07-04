/* Runtime dump - SAEntryPoint
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEntryPoint : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * latitude;
@property (copy, nonatomic) NSNumber * longitude;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)entryPoint;
+ (NSDictionary *)entryPointWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setLatitude:(NSNumber *)arg0;
- (void)setLongitude:(NSNumber *)arg0;
- (NSNumber *)latitude;
- (NSNumber *)longitude;
- (NSString *)encodedClassName;

@end

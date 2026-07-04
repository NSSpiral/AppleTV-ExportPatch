/* Runtime dump - SATextDecorationRegion
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATextDecorationRegion : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * length;
@property (copy, nonatomic) NSString * property;
@property (copy, nonatomic) NSNumber * start;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)textDecorationRegion;
+ (NSDictionary *)textDecorationRegionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)length;
- (void)setLength:(NSNumber *)arg0;
- (NSNumber *)start;
- (void)setStart:(NSNumber *)arg0;
- (NSString *)property;
- (void)setProperty:(NSString *)arg0;
- (NSString *)encodedClassName;

@end

/* Runtime dump - SAUIURLData
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIURLData : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSData * data;
@property (copy, nonatomic) NSURL * uri;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)uRLData;
+ (NSDictionary *)uRLDataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSURL *)uri;
- (NSString *)encodedClassName;
- (void)setUri:(NSURL *)arg0;

@end

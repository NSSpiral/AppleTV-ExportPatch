/* Runtime dump - SADecoratedString
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADecoratedString : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * regions;
@property (copy, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)decoratedString;
+ (NSDictionary *)decoratedStringWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)regions;
- (void)setRegions:(NSArray *)arg0;

@end

/* Runtime dump - SASyncAnchor
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (nonatomic) int count;
@property (copy, nonatomic) NSString * generation;
@property (copy, nonatomic) NSString * key;
@property (copy, nonatomic) NSString * validity;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)anchor;
+ (NSDictionary *)anchorWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setGeneration:(NSString *)arg0;
- (int)count;
- (NSString *)key;
- (void)setCount:(int)arg0;
- (void)setKey:(NSString *)arg0;
- (NSString *)generation;
- (NSString *)encodedClassName;
- (void)setValidity:(NSString *)arg0;
- (NSString *)validity;

@end

/* Runtime dump - SAAceUiAppInfo
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceUiAppInfo : SAAppInfo <SASyncWrap>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSURL * identifier;
@property (copy, nonatomic) NSNumber * generation;

+ (NSDictionary *)aceUiAppInfo;
+ (NSDictionary *)aceUiAppInfoWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setGeneration:(NSNumber *)arg0;
- (NSNumber *)generation;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end

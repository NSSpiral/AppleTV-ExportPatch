/* Runtime dump - SAStructuredDictationItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationItem : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * resultOptions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)structuredDictationItem;
+ (NSDictionary *)structuredDictationItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)resultOptions;
- (void)setResultOptions:(NSArray *)arg0;

@end

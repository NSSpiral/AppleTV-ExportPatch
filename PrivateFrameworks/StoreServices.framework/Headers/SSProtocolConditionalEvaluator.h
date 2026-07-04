/* Runtime dump - SSProtocolConditionalEvaluator
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSProtocolConditionalEvaluator : NSObject
{
    SSProtocolConditionalContext * _context;
    NSDictionary * _dictionary;
}

+ (SSProtocolConditionalEvaluator *)defaultConditionalContext;
+ (void)setDefaultConditionalContext:(NSObject *)arg0;

- (void)dealloc;
- (SSProtocolConditionalEvaluator *)init;
- (SSProtocolConditionalEvaluator *)initWithDictionary:(NSDictionary *)arg0;
- (SSProtocolConditionalEvaluator *)initWithDictionary:(NSDictionary *)arg0 conditionalContext:(NSObject *)arg1;
- (NSDictionary *)_dictionaryByEvaluatingWithForcedValue:(int)arg0;
- (NSDictionary *)_dictionaryByEvaluatingDictionary:(NSDictionary *)arg0 withForcedValue:(int)arg1;
- (NSArray *)_arrayByEvaluatingChildrenOfArray:(NSArray *)arg0 withForcedValue:(int)arg1;
- (int)_logicalOperatorForString:(NSString *)arg0;
- (char)_checkConditions:(id)arg0 withOperator:(_NSItemProviderExtensionVendorLoadOperator *)arg1;
- (NSDictionary *)_dictionaryByEvaluatingChildrenOfDictionary:(NSDictionary *)arg0 withForcedValue:(int)arg1;
- (NSDictionary *)dictionaryByEvaluatingConditions;
- (NSDictionary *)dictionaryByRemovingConditions;

@end

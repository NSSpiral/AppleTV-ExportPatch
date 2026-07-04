/* Runtime dump - TSTEphemeralFilter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTEphemeralFilter : NSObject
{
    unsigned int mFilterIndex;
    unsigned char mColumnIndex;
    NSArray * mRules;
}

@property (readonly, nonatomic) unsigned int filterIndex;
@property (readonly, nonatomic) unsigned char columnIndex;
@property (readonly, nonatomic) unsigned int ruleCount;

+ (NSObject *)filterWithIndex:(unsigned int)arg0 columnIndex:(unsigned char)arg1 rules:(VCImageAttributeRules *)arg2;

- (TSTEphemeralFilter *)initWithIndex:(unsigned int)arg0 columnIndex:(unsigned char)arg1 rules:(VCImageAttributeRules *)arg2;
- (NSObject *)filterWithRule:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)filterByAddingRule:(NSObject *)arg0;
- (NSObject *)filterByRemovingRuleAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)filterIndex;
- (unsigned int)ruleCount;
- (NSObject *)ruleAtIndex:(unsigned int)arg0;
- (unsigned char)columnIndex;

@end

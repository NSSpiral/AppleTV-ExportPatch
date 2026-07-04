/* Runtime dump - TSTFormulaTokenContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaTokenContext : NSObject
{
    TSTExpressionNode * mExpressionNode;
    unsigned int mParenNestingLevel;
    unsigned int mArgumentIndex;
}

@property (readonly, nonatomic) TSTExpressionNode * expressionNode;
@property (readonly, nonatomic) unsigned int parenNestingLevel;
@property (readonly, nonatomic) unsigned int argumentIndex;

+ (NSObject *)tokenContextWithExpressionNode:(TSTExpressionNode *)arg0 parenNestingLevel:(unsigned int)arg1;
+ (NSObject *)tokenContextWithExpressionNode:(TSTExpressionNode *)arg0 parenNestingLevel:(unsigned int)arg1 argumentIndex:(unsigned int)arg2;

- (TSTFormulaTokenContext *)initWithExpressionNode:(TSTExpressionNode *)arg0 parenNestingLevel:(unsigned int)arg1 argumentIndex:(unsigned int)arg2;
- (TSTFormulaTokenContext *)initWithExpressionNode:(TSTExpressionNode *)arg0 parenNestingLevel:(unsigned int)arg1;
- (TSTExpressionNode *)expressionNode;
- (unsigned int)parenNestingLevel;
- (unsigned int)argumentIndex;
- (void)dealloc;
- (TSTFormulaTokenContext *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)debugDescription;

@end

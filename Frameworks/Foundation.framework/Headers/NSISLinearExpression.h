/* Runtime dump - NSISLinearExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISLinearExpression : NSObject <NSISRowBody, NSFastEnumeration>
{
    unsigned int inline_capacity;
    unsigned int var_count;
    double constant;
    id data;
}

@property double constant;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSISLinearExpression *)acquireFromPoolForUseCase:(int)arg0;
+ (NSISLinearExpression *)newExpressionWithCapacity:(unsigned int)arg0;

- (void)verifyInternalIntegrity;
- (void)enumerateVariablesAndCoefficients:(id)arg0;
- (void)enumerateVariables:(id)arg0;
- (void)removeVariable:(NSISVariable *)arg0;
- (void)addVariable:(NSISVariable *)arg0 coefficient:(double)arg1 processVariableNewToReceiver:(NSObject *)arg2 processVariableDroppedFromReceiver:(/* block */ id)arg3;
- (void)addExpression:(NSObject *)arg0 times:(double)arg1 processVariableNewToReceiver:(NSObject *)arg2 processVariableDroppedFromReceiver:(/* block */ id)arg3;
- (void)replaceVariable:(id)arg0 withExpression:(NSObject *)arg1 processVariableNewToReceiver:(NSObject *)arg2 processVariableDroppedFromReceiver:(/* block */ id)arg3;
- (double)coefficientForVariable:(id)arg0;
- (void)replaceVariable:(id)arg0 withVariable:(NSISVariable *)arg1 coefficient:(double)arg2;
- (void)replaceVariable:(id)arg0 withVariablePlusDelta:(double)arg1 timesVariable:(id)arg2 processVariableNewToReceiver:(NSObject *)arg3 processVariableDroppedFromReceiver:(/* block */ id)arg4;
- (NSObject *)copyContentsAndReturnToPool;
- (char)enumerateVariablesAndCoefficientsUntil:(id)arg0;
- (void)replaceVariable:(id)arg0 withVariablePlusDelta:(double)arg1;
- (unsigned int)variableCount;
- (NSISLinearExpression *)initWithInlineCapacity:(unsigned int)arg0;
- (void)setCoefficient:(double)arg0 forVariable:(NSISVariable *)arg1;
- (NSArray *)variablesArray;
- (void)returnToPool;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSISLinearExpression *)init;
- (NSString *)description;
- (NSISLinearExpression *)copyWithZone:(struct _NSZone *)arg0;
- (void)setConstant:(double)arg0;
- (double)constant;
- (char)isConstant;
- (double)incrementConstant:(double)arg0;
- (void)addVariable:(NSISVariable *)arg0 coefficient:(double)arg1;
- (void)addExpression:(NSObject *)arg0 times:(double)arg1;
- (void)scaleBy:(double)arg0;

@end

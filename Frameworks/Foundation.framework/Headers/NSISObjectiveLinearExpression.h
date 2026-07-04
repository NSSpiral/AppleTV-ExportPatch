/* Runtime dump - NSISObjectiveLinearExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody>
{
    struct __CFDictionary * _priorityMap;
    NSMutableArray * _variablesSortedByPriorityVectors;
    struct __CFData * _constant;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)verifyInternalIntegrity;
- (void)enumerateVariables:(id)arg0;
- (void)removeVariable:(NSISVariable *)arg0;
- (void)addVariable:(NSISVariable *)arg0 priority:(float)arg1 times:(double)arg2 processVariableNewToReceiver:(NSObject *)arg3 processVariableDroppedFromReceiver:(/* block */ id)arg4;
- (void)addExpression:(NSObject *)arg0 priority:(float)arg1 times:(double)arg2 processVariableNewToReceiver:(NSObject *)arg3 processVariableDroppedFromReceiver:(/* block */ id)arg4;
- (void)replaceVariable:(id)arg0 withExpression:(NSObject *)arg1 processVariableNewToReceiver:(NSObject *)arg2 processVariableDroppedFromReceiver:(/* block */ id)arg3;
- (void)replaceVariable:(id)arg0 withVariablePlusDelta:(double)arg1 timesVariable:(id)arg2 processVariableNewToReceiver:(NSObject *)arg3 processVariableDroppedFromReceiver:(/* block */ id)arg4;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
- (void)leadingPriority:(float *)arg0 andValue:(double *)arg1 forVariable:(NSISVariable *)arg2;
- (void)addVariable:(NSISVariable *)arg0 priority:(float)arg1 times:(double)arg2;
- (NSISObjectiveLinearExpression *)initWithLinearExpression:(NSObject *)arg0 priority:(float)arg1;
- (char)constantTermIsZero;
- (void)replaceVariable:(id)arg0 withVariablePlusDelta:(double)arg1;
- (unsigned int)variableCount;
- (void)incrementConstantWithPriority:(float)arg0 value:(double)arg1;
- (struct __CFData *)priorityVectorForVariable:(id)arg0;
- (void)setPriorityVector:(struct __CFData *)arg0 forKnownAbsentVariable:(id)arg1;
- (void)incrementConstantWithPriorityVector:(struct __CFData *)arg0 timesScalarCoefficient:(double)arg1;
- (void)dealloc;
- (NSISObjectiveLinearExpression *)init;
- (NSString *)description;

@end

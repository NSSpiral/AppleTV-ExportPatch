/* Runtime dump - NSDecimalNumberHandler
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding>
{
    id _scale;
    id _roundingMode;
    id _raiseOnExactness;
    id _raiseOnOverflow;
    id _raiseOnUnderflow;
    id _raiseOnDivideByZero;
    id _unused;
    void * _reserved2;
    void * _reserved;
}

+ (NSDecimalNumberHandler *)defaultDecimalNumberHandler;
+ (NSDecimalNumberHandler *)decimalNumberHandlerWithRoundingMode:(unsigned int)arg0 scale:(short)arg1 raiseOnExactness:(char)arg2 raiseOnOverflow:(char)arg3 raiseOnUnderflow:(char)arg4 raiseOnDivideByZero:(char)arg5;

- (unsigned int)roundingMode;
- (NSDecimalNumberHandler *)initWithRoundingMode:(unsigned int)arg0 scale:(short)arg1 raiseOnExactness:(char)arg2 raiseOnOverflow:(char)arg3 raiseOnUnderflow:(char)arg4 raiseOnDivideByZero:(char)arg5;
- (NSObject *)exceptionDuringOperation:(SEL)arg0 error:(unsigned int)arg1 leftOperand:(id)arg2 rightOperand:(id)arg3;
- (NSDecimalNumberHandler *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (short)scale;

@end

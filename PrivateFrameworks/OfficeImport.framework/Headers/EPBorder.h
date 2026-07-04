/* Runtime dump - EPBorder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EPBorder : EDBorder
{
    unsigned int mPrecedence;
}

+ (EPBorder *)borderWithBorder:(NSString *)arg0 precedence:(unsigned int)arg1 resources:(NSArray *)arg2;

- (char)isEqualToBorder:(id)arg0;
- (unsigned int)precedence;
- (EPBorder *)initWithBorder:(NSString *)arg0 precedence:(unsigned int)arg1 resources:(NSArray *)arg2;

@end

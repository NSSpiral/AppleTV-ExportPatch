/* Runtime dump - TSKCOUpdateOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOUpdateOperation : TSKCOAbstractOperation
{
    NSString * mPropertyName;
}

@property (readonly, nonatomic) NSString * propertyName;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOUpdateOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (TSKCOUpdateOperation *)initWithPropertyName:(NSString *)arg0 noop:(char)arg1;
- (int)conflictTypeWithOperation:(NSObject *)arg0 hadRun:(char)arg1;
- (TSKCOUpdateOperation *)initWithPropertyName:(NSString *)arg0;
- (void)dealloc;
- (NSString *)propertyName;

@end

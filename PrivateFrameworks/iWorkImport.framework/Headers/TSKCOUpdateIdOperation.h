/* Runtime dump - TSKCOUpdateIdOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOUpdateIdOperation : TSKCOUpdateOperation <TSKCOIdOperation, TSKCOUpdateIdOperationSubset, TSKCOTransforming>
{
    TSKCOIdAddress * mAddress;
}

@property (readonly, nonatomic) TSKCOIdAddress * address;

+ (NSString *)operationWithIdAddress:(NSString *)arg0 propertyName:(NSString *)arg1;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOUpdateIdOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (NSObject *)transformUpdateRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (id)operationWithNewNoop:(char)arg0;
- (NSObject *)transformIdPlacementBaseOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformUpdateIdOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformReplaceRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformDynamicByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (NSObject *)transformStaticByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (id)ut_transformByTransformer:(id)arg0;
- (TSKCOUpdateIdOperation *)initWithIdAddress:(NSString *)arg0 propertyName:(NSString *)arg1;
- (TSKCOUpdateIdOperation *)initWithIdAddress:(NSString *)arg0 propertyName:(NSString *)arg1 noop:(char)arg2;
- (NSObject *)toUpdateIdOperation;
- (NSObject *)fromUpdateIdOperation:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSKCOIdAddress *)address;

@end

/* Runtime dump - TSKCOUpdateRangeOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation, TSKCOUpdateRangeOperationSubset, TSKCOTransforming>
{
    TSKCORangeAddress * mAddress;
    int mTransformBehavior;
}

@property (readonly, nonatomic) int transformBehavior;
@property (readonly, nonatomic) TSKCORangeAddress * address;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOUpdateRangeOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (NSObject *)transformUpdateRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (TSKCOUpdateRangeOperation *)initWithRangeAddress:(NSString *)arg0 propertyName:(NSString *)arg1 transformBehavior:(int)arg2 noop:(char)arg3;
- (id)operationWithNewNoop:(char)arg0;
- (NSString *)operationWithNewAddress:(char)arg0;
- (int)transformBehavior;
- (NSObject *)toUpdateRangeOperation;
- (NSObject *)fromUpdateRangeOperation:(NSObject *)arg0;
- (NSObject *)transformIdPlacementBaseOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformUpdateIdOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformReplaceRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformDynamicByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (NSObject *)transformStaticByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (id)ut_transformByTransformer:(id)arg0;
- (TSKCOUpdateRangeOperation *)initWithRangeAddress:(NSString *)arg0 propertyName:(NSString *)arg1 transformBehavior:(int)arg2;
- (TSKCOUpdateRangeOperation *)initWithRangeAddress:(NSString *)arg0 propertyName:(NSString *)arg1;
- (void)dealloc;
- (NSString *)description;
- (TSKCORangeAddress *)address;

@end

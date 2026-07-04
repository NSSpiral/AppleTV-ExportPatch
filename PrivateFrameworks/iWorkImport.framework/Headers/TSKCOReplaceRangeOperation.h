/* Runtime dump - TSKCOReplaceRangeOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation, TSKCOReplaceRangeOperationSubset, TSKCOTransforming>
{
    TSKCORangeAddress * mAddress;
    unsigned int mInsertLength;
    char mPreserveLowerPriorityLocation;
}

@property (readonly, nonatomic) unsigned int insertLength;
@property (readonly, nonatomic) char preserveLowerPriorityLocation;
@property (readonly, nonatomic) TSKCORangeAddress * address;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOReplaceRangeOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (NSObject *)transformUpdateRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (id)operationWithNewNoop:(char)arg0;
- (NSString *)operationWithNewAddress:(char)arg0;
- (NSObject *)transformIdPlacementBaseOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformUpdateIdOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformReplaceRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformDynamicByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (NSObject *)transformStaticByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (id)ut_transformByTransformer:(id)arg0;
- (TSKCOReplaceRangeOperation *)initWithRangeAddress:(NSString *)arg0 insertLength:(unsigned int)arg1 preserveLowerPriorityLocation:(char)arg2 noop:(char)arg3;
- (TSKCOReplaceRangeOperation *)initWithRangeAddress:(NSString *)arg0 insertLength:(unsigned int)arg1 noop:(char)arg2;
- (unsigned int)insertLength;
- (char)preserveLowerPriorityLocation;
- (NSObject *)p_transformReplaceRange:(struct _NSRange)arg0 replacementLength:(unsigned int)arg1 myRange:(struct _NSRange)arg2 myReplacementLength:(unsigned int)arg3 preserveLocation:(char)arg4;
- (void)p_validateAndMergeTransformedRanges:(NSArray *)arg0;
- (NSString *)operationWithNewAddress:(char)arg0 newPreserveLowerPriorityLocation:(char)arg1;
- (NSObject *)p_transformUpdateRange:(struct _NSRange)arg0 myRange:(struct _NSRange)arg1 replacementLength:(unsigned int)arg2 transformBehavior:(int)arg3;
- (NSObject *)toReplaceRangeOperation;
- (NSObject *)fromReplaceRangeOperation:(NSObject *)arg0;
- (TSKCOReplaceRangeOperation *)initWithRangeAddress:(NSString *)arg0 insertLength:(unsigned int)arg1;
- (char)hasNoEffects;
- (void)dealloc;
- (NSString *)description;
- (TSKCORangeAddress *)address;

@end

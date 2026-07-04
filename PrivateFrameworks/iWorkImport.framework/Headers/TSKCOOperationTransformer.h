/* Runtime dump - TSKCOOperationTransformer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOOperationTransformer : NSObject <NSCopying>
{
    NSObject<TSKCOIntermediateOperationEnumerator> * mEnumerator;
    char mIsHigherPriority;
    TSPObject * mDelegate;
}

@property (nonatomic) TSPObject * delegate;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct OperationTransformer *)arg1;
- (TSKCOOperationTransformer *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct OperationTransformer *)arg1;
- (NSObject *)transformUpdateRangeOperation:(NSObject *)arg0;
- (NSObject *)transformIdPlacementBaseOperation:(NSObject *)arg0;
- (void)appendOperation:(NSObject *)arg0;
- (TSKCOOperationTransformer *)initWithOperationEnumerator:(NSEnumerator *)arg0;
- (TSKCOOperationTransformer *)initWithOperationEnumerator:(NSEnumerator *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformUpdateIdOperation:(NSObject *)arg0;
- (NSObject *)transformReplaceRangeOperation:(NSObject *)arg0;
- (NSArray *)transformOperations:(NSArray *)arg0;
- (void)dealloc;
- (void)setDelegate:(TSPObject *)arg0;
- (TSPObject *)delegate;
- (TSKCOOperationTransformer *)copyWithZone:(struct _NSZone *)arg0;

@end

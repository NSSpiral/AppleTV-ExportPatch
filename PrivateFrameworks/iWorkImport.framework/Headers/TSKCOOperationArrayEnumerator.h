/* Runtime dump - TSKCOOperationArrayEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOOperationArrayEnumerator : NSObject <TSKCOIntermediateOperationEnumerator>
{
    NSMutableArray * mOperationArray;
    unsigned int mNextIndex;
}

- (NSObject *)nextOperation;
- (void)replaceOperation:(NSObject *)arg0;
- (void)appendOperation:(NSObject *)arg0;
- (NSString *)nextOperationOnAddress:(NSString *)arg0;
- (TSKCOOperationArrayEnumerator *)initWithOperationEnumerator:(NSEnumerator *)arg0;
- (void)dealloc;
- (void)reset;
- (TSKCOOperationArrayEnumerator *)copyWithZone:(struct _NSZone *)arg0;

@end
